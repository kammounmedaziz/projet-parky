/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_Client_Space (void)
{
  GtkWidget *Client_Space;
  GtkWidget *notebook6;
  GtkWidget *notebook13;
  GtkWidget *fixed71;
  GtkObject *SBavisnote_adj;
  GtkWidget *SBavisnote;
  GtkWidget *Eavis;
  GtkWidget *CBavisparking;
  GtkWidget *label359;
  GtkWidget *label360;
  GtkWidget *label361;
  GtkWidget *label362;
  GtkWidget *Lidavis;
  GtkWidget *Lavismessage;
  GtkWidget *Bajouteravis;
  GtkWidget *RBavisavsis;
  GSList *RBavisavsis_group = NULL;
  GtkWidget *RBavisreclamation;
  GtkWidget *Bavisrefresh;
  GtkWidget *add_review;
  GtkWidget *fixed72;
  GtkObject *SBmodifieravisnote_adj;
  GtkWidget *SBmodifieravisnote;
  GtkWidget *Emodifieravisreclamation;
  GtkWidget *label365;
  GtkWidget *label366;
  GtkWidget *label367;
  GtkWidget *label368;
  GtkWidget *label372;
  GtkWidget *cbmodifieravisparking;
  GtkWidget *cbmodifieravisid;
  GtkWidget *Bmodifieravi;
  GtkWidget *Bmodifieravisrefreshparking;
  GtkWidget *Lmodifieravismessage;
  GtkWidget *Bmodifieravisrefreshid;
  GtkWidget *RBmodifieravisavis;
  GSList *RBmodifieravisavis_group = NULL;
  GtkWidget *RBmodifieravisreclamation;
  GtkWidget *edit_review;
  GtkWidget *fixed73;
  GtkWidget *label382;
  GtkWidget *Lsupprimeravismessage;
  GtkWidget *CBdeleteavis;
  GtkWidget *Bsupprimeravis;
  GtkWidget *CBsupprimeravis;
  GtkWidget *Bdeleteavisrefresh;
  GtkWidget *delete_review;
  GtkWidget *fixed74;
  GtkWidget *Eafficheravis;
  GtkWidget *label384;
  GtkWidget *label385;
  GtkWidget *TVafficheravis;
  GtkWidget *Bafficheravis;
  GtkWidget *display_review;
  GtkWidget *fixed75;
  GtkWidget *label386;
  GtkWidget *treeview22;
  GtkWidget *Bsupp;
  GtkWidget *display_parking;
  GtkWidget *label353;

  Client_Space = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (Client_Space), _("Client Space"));
  gtk_window_set_resizable (GTK_WINDOW (Client_Space), FALSE);

  notebook6 = gtk_notebook_new ();
  gtk_widget_show (notebook6);
  gtk_container_add (GTK_CONTAINER (Client_Space), notebook6);

  notebook13 = gtk_notebook_new ();
  gtk_widget_show (notebook13);
  gtk_container_add (GTK_CONTAINER (notebook6), notebook13);

  fixed71 = gtk_fixed_new ();
  gtk_widget_show (fixed71);
  gtk_container_add (GTK_CONTAINER (notebook13), fixed71);

  SBavisnote_adj = gtk_adjustment_new (5, 0, 5, 1, 10, 10);
  SBavisnote = gtk_spin_button_new (GTK_ADJUSTMENT (SBavisnote_adj), 1, 0);
  gtk_widget_show (SBavisnote);
  gtk_fixed_put (GTK_FIXED (fixed71), SBavisnote, 144, 120);
  gtk_widget_set_size_request (SBavisnote, 60, 27);

  Eavis = gtk_entry_new ();
  gtk_widget_show (Eavis);
  gtk_fixed_put (GTK_FIXED (fixed71), Eavis, 144, 192);
  gtk_widget_set_size_request (Eavis, 432, 88);
  gtk_entry_set_invisible_char (GTK_ENTRY (Eavis), 8226);

  CBavisparking = gtk_combo_box_new_text ();
  gtk_widget_show (CBavisparking);
  gtk_fixed_put (GTK_FIXED (fixed71), CBavisparking, 148, 52);
  gtk_widget_set_size_request (CBavisparking, 237, 31);

  label359 = gtk_label_new (_("rating of 5: "));
  gtk_widget_show (label359);
  gtk_fixed_put (GTK_FIXED (fixed71), label359, 24, 128);
  gtk_widget_set_size_request (label359, 104, 16);

  label360 = gtk_label_new (_("Claim: "));
  gtk_widget_show (label360);
  gtk_fixed_put (GTK_FIXED (fixed71), label360, 32, 200);
  gtk_widget_set_size_request (label360, 96, 24);

  label361 = gtk_label_new (_("Type: "));
  gtk_widget_show (label361);
  gtk_fixed_put (GTK_FIXED (fixed71), label361, 40, 312);
  gtk_widget_set_size_request (label361, 57, 17);

  label362 = gtk_label_new (_("Select Parking: "));
  gtk_widget_show (label362);
  gtk_fixed_put (GTK_FIXED (fixed71), label362, 24, 56);
  gtk_widget_set_size_request (label362, 128, 24);

  Lidavis = gtk_label_new (_("id avis"));
  gtk_widget_show (Lidavis);
  gtk_fixed_put (GTK_FIXED (fixed71), Lidavis, 216, 456);
  gtk_widget_set_size_request (Lidavis, 408, 16);

  Lavismessage = gtk_label_new (_("message"));
  gtk_widget_show (Lavismessage);
  gtk_fixed_put (GTK_FIXED (fixed71), Lavismessage, 152, 488);
  gtk_widget_set_size_request (Lavismessage, 544, 16);

  Bajouteravis = gtk_button_new_with_mnemonic (_("Submit"));
  gtk_widget_show (Bajouteravis);
  gtk_fixed_put (GTK_FIXED (fixed71), Bajouteravis, 272, 376);
  gtk_widget_set_size_request (Bajouteravis, 280, 48);

  RBavisavsis = gtk_radio_button_new_with_mnemonic (NULL, _("Review"));
  gtk_widget_show (RBavisavsis);
  gtk_fixed_put (GTK_FIXED (fixed71), RBavisavsis, 112, 312);
  gtk_widget_set_size_request (RBavisavsis, 124, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (RBavisavsis), RBavisavsis_group);
  RBavisavsis_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (RBavisavsis));

  RBavisreclamation = gtk_radio_button_new_with_mnemonic (NULL, _("Claim"));
  gtk_widget_show (RBavisreclamation);
  gtk_fixed_put (GTK_FIXED (fixed71), RBavisreclamation, 224, 312);
  gtk_widget_set_size_request (RBavisreclamation, 124, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (RBavisreclamation), RBavisavsis_group);
  RBavisavsis_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (RBavisreclamation));

  Bavisrefresh = gtk_button_new_with_mnemonic (_("Refresh"));
  gtk_widget_show (Bavisrefresh);
  gtk_fixed_put (GTK_FIXED (fixed71), Bavisrefresh, 384, 56);
  gtk_widget_set_size_request (Bavisrefresh, 82, 29);

  add_review = gtk_label_new (_("add review"));
  gtk_widget_show (add_review);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook13), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook13), 0), add_review);

  fixed72 = gtk_fixed_new ();
  gtk_widget_show (fixed72);
  gtk_container_add (GTK_CONTAINER (notebook13), fixed72);

  SBmodifieravisnote_adj = gtk_adjustment_new (5, 0, 5, 1, 10, 10);
  SBmodifieravisnote = gtk_spin_button_new (GTK_ADJUSTMENT (SBmodifieravisnote_adj), 1, 0);
  gtk_widget_show (SBmodifieravisnote);
  gtk_fixed_put (GTK_FIXED (fixed72), SBmodifieravisnote, 144, 120);
  gtk_widget_set_size_request (SBmodifieravisnote, 60, 27);

  Emodifieravisreclamation = gtk_entry_new ();
  gtk_widget_show (Emodifieravisreclamation);
  gtk_fixed_put (GTK_FIXED (fixed72), Emodifieravisreclamation, 144, 192);
  gtk_widget_set_size_request (Emodifieravisreclamation, 432, 88);
  gtk_entry_set_invisible_char (GTK_ENTRY (Emodifieravisreclamation), 8226);

  label365 = gtk_label_new (_("rating of 5: "));
  gtk_widget_show (label365);
  gtk_fixed_put (GTK_FIXED (fixed72), label365, 24, 128);
  gtk_widget_set_size_request (label365, 104, 16);

  label366 = gtk_label_new (_("Claim: "));
  gtk_widget_show (label366);
  gtk_fixed_put (GTK_FIXED (fixed72), label366, 32, 200);
  gtk_widget_set_size_request (label366, 96, 24);

  label367 = gtk_label_new (_("Type: "));
  gtk_widget_show (label367);
  gtk_fixed_put (GTK_FIXED (fixed72), label367, 40, 312);
  gtk_widget_set_size_request (label367, 57, 17);

  label368 = gtk_label_new (_("Select Parking: "));
  gtk_widget_show (label368);
  gtk_fixed_put (GTK_FIXED (fixed72), label368, 24, 56);
  gtk_widget_set_size_request (label368, 128, 24);

  label372 = gtk_label_new (_("review ID: "));
  gtk_widget_show (label372);
  gtk_fixed_put (GTK_FIXED (fixed72), label372, 48, 24);
  gtk_widget_set_size_request (label372, 104, 16);

  cbmodifieravisparking = gtk_combo_box_new_text ();
  gtk_widget_show (cbmodifieravisparking);
  gtk_fixed_put (GTK_FIXED (fixed72), cbmodifieravisparking, 148, 54);
  gtk_widget_set_size_request (cbmodifieravisparking, 237, 31);

  cbmodifieravisid = gtk_combo_box_new_text ();
  gtk_widget_show (cbmodifieravisid);
  gtk_fixed_put (GTK_FIXED (fixed72), cbmodifieravisid, 146, 14);
  gtk_widget_set_size_request (cbmodifieravisid, 239, 31);

  Bmodifieravi = gtk_button_new_with_mnemonic (_("edit"));
  gtk_widget_show (Bmodifieravi);
  gtk_fixed_put (GTK_FIXED (fixed72), Bmodifieravi, 280, 392);
  gtk_widget_set_size_request (Bmodifieravi, 280, 48);

  Bmodifieravisrefreshparking = gtk_button_new_with_mnemonic (_("refresh"));
  gtk_widget_show (Bmodifieravisrefreshparking);
  gtk_fixed_put (GTK_FIXED (fixed72), Bmodifieravisrefreshparking, 392, 56);
  gtk_widget_set_size_request (Bmodifieravisrefreshparking, 82, 29);

  Lmodifieravismessage = gtk_label_new (_("message"));
  gtk_widget_show (Lmodifieravismessage);
  gtk_fixed_put (GTK_FIXED (fixed72), Lmodifieravismessage, 152, 456);
  gtk_widget_set_size_request (Lmodifieravismessage, 544, 16);

  Bmodifieravisrefreshid = gtk_button_new_with_mnemonic (_("refresh"));
  gtk_widget_show (Bmodifieravisrefreshid);
  gtk_fixed_put (GTK_FIXED (fixed72), Bmodifieravisrefreshid, 392, 16);
  gtk_widget_set_size_request (Bmodifieravisrefreshid, 82, 29);

  RBmodifieravisavis = gtk_radio_button_new_with_mnemonic (NULL, _("Review"));
  gtk_widget_show (RBmodifieravisavis);
  gtk_fixed_put (GTK_FIXED (fixed72), RBmodifieravisavis, 112, 312);
  gtk_widget_set_size_request (RBmodifieravisavis, 124, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (RBmodifieravisavis), RBmodifieravisavis_group);
  RBmodifieravisavis_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (RBmodifieravisavis));

  RBmodifieravisreclamation = gtk_radio_button_new_with_mnemonic (NULL, _("Claim"));
  gtk_widget_show (RBmodifieravisreclamation);
  gtk_fixed_put (GTK_FIXED (fixed72), RBmodifieravisreclamation, 224, 312);
  gtk_widget_set_size_request (RBmodifieravisreclamation, 124, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (RBmodifieravisreclamation), RBmodifieravisavis_group);
  RBmodifieravisavis_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (RBmodifieravisreclamation));

  edit_review = gtk_label_new (_("edit review"));
  gtk_widget_show (edit_review);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook13), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook13), 1), edit_review);

  fixed73 = gtk_fixed_new ();
  gtk_widget_show (fixed73);
  gtk_container_add (GTK_CONTAINER (notebook13), fixed73);

  label382 = gtk_label_new (_("review ID: "));
  gtk_widget_show (label382);
  gtk_fixed_put (GTK_FIXED (fixed73), label382, 48, 168);
  gtk_widget_set_size_request (label382, 104, 16);

  Lsupprimeravismessage = gtk_label_new (_("message"));
  gtk_widget_show (Lsupprimeravismessage);
  gtk_fixed_put (GTK_FIXED (fixed73), Lsupprimeravismessage, 24, 312);
  gtk_widget_set_size_request (Lsupprimeravismessage, 544, 16);

  CBdeleteavis = gtk_combo_box_new_text ();
  gtk_widget_show (CBdeleteavis);
  gtk_fixed_put (GTK_FIXED (fixed73), CBdeleteavis, 146, 158);
  gtk_widget_set_size_request (CBdeleteavis, 239, 31);

  Bsupprimeravis = gtk_button_new_with_mnemonic (_("Delete"));
  gtk_widget_show (Bsupprimeravis);
  gtk_fixed_put (GTK_FIXED (fixed73), Bsupprimeravis, 144, 240);
  gtk_widget_set_size_request (Bsupprimeravis, 280, 48);

  CBsupprimeravis = gtk_check_button_new_with_mnemonic (_("Delete all reviews"));
  gtk_widget_show (CBsupprimeravis);
  gtk_fixed_put (GTK_FIXED (fixed73), CBsupprimeravis, 152, 208);
  gtk_widget_set_size_request (CBsupprimeravis, 126, 24);

  Bdeleteavisrefresh = gtk_button_new_with_mnemonic (_("refresh"));
  gtk_widget_show (Bdeleteavisrefresh);
  gtk_fixed_put (GTK_FIXED (fixed73), Bdeleteavisrefresh, 392, 160);
  gtk_widget_set_size_request (Bdeleteavisrefresh, 82, 29);

  delete_review = gtk_label_new (_("delete review"));
  gtk_widget_show (delete_review);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook13), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook13), 2), delete_review);

  fixed74 = gtk_fixed_new ();
  gtk_widget_show (fixed74);
  gtk_container_add (GTK_CONTAINER (notebook13), fixed74);

  Eafficheravis = gtk_entry_new ();
  gtk_widget_show (Eafficheravis);
  gtk_fixed_put (GTK_FIXED (fixed74), Eafficheravis, 152, 160);
  gtk_widget_set_size_request (Eafficheravis, 248, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (Eafficheravis), 8226);

  label384 = gtk_label_new (_("review ID: "));
  gtk_widget_show (label384);
  gtk_fixed_put (GTK_FIXED (fixed74), label384, 48, 168);
  gtk_widget_set_size_request (label384, 104, 16);

  label385 = gtk_label_new (_("message"));
  gtk_widget_show (label385);
  gtk_fixed_put (GTK_FIXED (fixed74), label385, 16, 280);
  gtk_widget_set_size_request (label385, 544, 16);

  TVafficheravis = gtk_tree_view_new ();
  gtk_widget_show (TVafficheravis);
  gtk_fixed_put (GTK_FIXED (fixed74), TVafficheravis, 136, 328);
  gtk_widget_set_size_request (TVafficheravis, 300, 200);

  Bafficheravis = gtk_button_new_with_mnemonic (_("display"));
  gtk_widget_show (Bafficheravis);
  gtk_fixed_put (GTK_FIXED (fixed74), Bafficheravis, 144, 208);
  gtk_widget_set_size_request (Bafficheravis, 280, 48);

  display_review = gtk_label_new (_("display review"));
  gtk_widget_show (display_review);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook13), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook13), 3), display_review);

  fixed75 = gtk_fixed_new ();
  gtk_widget_show (fixed75);
  gtk_container_add (GTK_CONTAINER (notebook13), fixed75);

  label386 = gtk_label_new (_("Parking sorted by rating: "));
  gtk_widget_show (label386);
  gtk_fixed_put (GTK_FIXED (fixed75), label386, 16, 64);
  gtk_widget_set_size_request (label386, 296, 16);

  treeview22 = gtk_tree_view_new ();
  gtk_widget_show (treeview22);
  gtk_fixed_put (GTK_FIXED (fixed75), treeview22, 80, 160);
  gtk_widget_set_size_request (treeview22, 300, 200);

  Bsupp = gtk_button_new_with_mnemonic (_("Refresh"));
  gtk_widget_show (Bsupp);
  gtk_fixed_put (GTK_FIXED (fixed75), Bsupp, 80, 112);
  gtk_widget_set_size_request (Bsupp, 304, 40);

  display_parking = gtk_label_new (_("display parking"));
  gtk_widget_show (display_parking);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook13), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook13), 4), display_parking);

  label353 = gtk_label_new (_("Reviews"));
  gtk_widget_show (label353);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook6), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook6), 0), label353);

  g_signal_connect ((gpointer) Bajouteravis, "clicked",
                    G_CALLBACK (on_Bajouteravis_clicked),
                    NULL);
  g_signal_connect ((gpointer) RBavisavsis, "toggled",
                    G_CALLBACK (on_RBavisavsis_toggled),
                    NULL);
  g_signal_connect ((gpointer) RBavisreclamation, "toggled",
                    G_CALLBACK (on_RBavisreclamation_toggled),
                    NULL);
  g_signal_connect ((gpointer) Bavisrefresh, "clicked",
                    G_CALLBACK (on_Bavisrefresh_clicked),
                    NULL);
  g_signal_connect ((gpointer) Bmodifieravi, "clicked",
                    G_CALLBACK (on_Bmodifieravi_clicked),
                    NULL);
  g_signal_connect ((gpointer) Bmodifieravisrefreshparking, "clicked",
                    G_CALLBACK (on_Bmodifieravisrefreshparking_clicked),
                    NULL);
  g_signal_connect ((gpointer) Bmodifieravisrefreshid, "clicked",
                    G_CALLBACK (on_Bmodifieravisrefreshid_clicked),
                    NULL);
  g_signal_connect ((gpointer) RBmodifieravisavis, "toggled",
                    G_CALLBACK (on_RBmodifieravisavis_toggled),
                    NULL);
  g_signal_connect ((gpointer) RBmodifieravisreclamation, "toggled",
                    G_CALLBACK (on_RBmodifieravisreclamation_toggled),
                    NULL);
  g_signal_connect ((gpointer) Bsupprimeravis, "clicked",
                    G_CALLBACK (on_Bsupprimeravis_clicked),
                    NULL);
  g_signal_connect ((gpointer) CBsupprimeravis, "toggled",
                    G_CALLBACK (on_CBsupprimeravis_toggled),
                    NULL);
  g_signal_connect ((gpointer) Bdeleteavisrefresh, "clicked",
                    G_CALLBACK (on_Bdeleteavisrefresh_clicked),
                    NULL);
  g_signal_connect ((gpointer) Bafficheravis, "clicked",
                    G_CALLBACK (on_Bafficheravis_clicked),
                    NULL);
  g_signal_connect ((gpointer) Bsupp, "clicked",
                    G_CALLBACK (on_Bsupp_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (Client_Space, Client_Space, "Client_Space");
  GLADE_HOOKUP_OBJECT (Client_Space, notebook6, "notebook6");
  GLADE_HOOKUP_OBJECT (Client_Space, notebook13, "notebook13");
  GLADE_HOOKUP_OBJECT (Client_Space, fixed71, "fixed71");
  GLADE_HOOKUP_OBJECT (Client_Space, SBavisnote, "SBavisnote");
  GLADE_HOOKUP_OBJECT (Client_Space, Eavis, "Eavis");
  GLADE_HOOKUP_OBJECT (Client_Space, CBavisparking, "CBavisparking");
  GLADE_HOOKUP_OBJECT (Client_Space, label359, "label359");
  GLADE_HOOKUP_OBJECT (Client_Space, label360, "label360");
  GLADE_HOOKUP_OBJECT (Client_Space, label361, "label361");
  GLADE_HOOKUP_OBJECT (Client_Space, label362, "label362");
  GLADE_HOOKUP_OBJECT (Client_Space, Lidavis, "Lidavis");
  GLADE_HOOKUP_OBJECT (Client_Space, Lavismessage, "Lavismessage");
  GLADE_HOOKUP_OBJECT (Client_Space, Bajouteravis, "Bajouteravis");
  GLADE_HOOKUP_OBJECT (Client_Space, RBavisavsis, "RBavisavsis");
  GLADE_HOOKUP_OBJECT (Client_Space, RBavisreclamation, "RBavisreclamation");
  GLADE_HOOKUP_OBJECT (Client_Space, Bavisrefresh, "Bavisrefresh");
  GLADE_HOOKUP_OBJECT (Client_Space, add_review, "add_review");
  GLADE_HOOKUP_OBJECT (Client_Space, fixed72, "fixed72");
  GLADE_HOOKUP_OBJECT (Client_Space, SBmodifieravisnote, "SBmodifieravisnote");
  GLADE_HOOKUP_OBJECT (Client_Space, Emodifieravisreclamation, "Emodifieravisreclamation");
  GLADE_HOOKUP_OBJECT (Client_Space, label365, "label365");
  GLADE_HOOKUP_OBJECT (Client_Space, label366, "label366");
  GLADE_HOOKUP_OBJECT (Client_Space, label367, "label367");
  GLADE_HOOKUP_OBJECT (Client_Space, label368, "label368");
  GLADE_HOOKUP_OBJECT (Client_Space, label372, "label372");
  GLADE_HOOKUP_OBJECT (Client_Space, cbmodifieravisparking, "cbmodifieravisparking");
  GLADE_HOOKUP_OBJECT (Client_Space, cbmodifieravisid, "cbmodifieravisid");
  GLADE_HOOKUP_OBJECT (Client_Space, Bmodifieravi, "Bmodifieravi");
  GLADE_HOOKUP_OBJECT (Client_Space, Bmodifieravisrefreshparking, "Bmodifieravisrefreshparking");
  GLADE_HOOKUP_OBJECT (Client_Space, Lmodifieravismessage, "Lmodifieravismessage");
  GLADE_HOOKUP_OBJECT (Client_Space, Bmodifieravisrefreshid, "Bmodifieravisrefreshid");
  GLADE_HOOKUP_OBJECT (Client_Space, RBmodifieravisavis, "RBmodifieravisavis");
  GLADE_HOOKUP_OBJECT (Client_Space, RBmodifieravisreclamation, "RBmodifieravisreclamation");
  GLADE_HOOKUP_OBJECT (Client_Space, edit_review, "edit_review");
  GLADE_HOOKUP_OBJECT (Client_Space, fixed73, "fixed73");
  GLADE_HOOKUP_OBJECT (Client_Space, label382, "label382");
  GLADE_HOOKUP_OBJECT (Client_Space, Lsupprimeravismessage, "Lsupprimeravismessage");
  GLADE_HOOKUP_OBJECT (Client_Space, CBdeleteavis, "CBdeleteavis");
  GLADE_HOOKUP_OBJECT (Client_Space, Bsupprimeravis, "Bsupprimeravis");
  GLADE_HOOKUP_OBJECT (Client_Space, CBsupprimeravis, "CBsupprimeravis");
  GLADE_HOOKUP_OBJECT (Client_Space, Bdeleteavisrefresh, "Bdeleteavisrefresh");
  GLADE_HOOKUP_OBJECT (Client_Space, delete_review, "delete_review");
  GLADE_HOOKUP_OBJECT (Client_Space, fixed74, "fixed74");
  GLADE_HOOKUP_OBJECT (Client_Space, Eafficheravis, "Eafficheravis");
  GLADE_HOOKUP_OBJECT (Client_Space, label384, "label384");
  GLADE_HOOKUP_OBJECT (Client_Space, label385, "label385");
  GLADE_HOOKUP_OBJECT (Client_Space, TVafficheravis, "TVafficheravis");
  GLADE_HOOKUP_OBJECT (Client_Space, Bafficheravis, "Bafficheravis");
  GLADE_HOOKUP_OBJECT (Client_Space, display_review, "display_review");
  GLADE_HOOKUP_OBJECT (Client_Space, fixed75, "fixed75");
  GLADE_HOOKUP_OBJECT (Client_Space, label386, "label386");
  GLADE_HOOKUP_OBJECT (Client_Space, treeview22, "treeview22");
  GLADE_HOOKUP_OBJECT (Client_Space, Bsupp, "Bsupp");
  GLADE_HOOKUP_OBJECT (Client_Space, display_parking, "display_parking");
  GLADE_HOOKUP_OBJECT (Client_Space, label353, "label353");

  return Client_Space;
}

