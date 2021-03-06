// This file was generated by the create_regs script
#define CCP2TX_BASE                                              0x7e001000
#define CCP2TX_APB_ID                                            0x63637032
#define CCP2TX_TC                                                HW_REGISTER_RW( 0x7e001000 ) 
   #define CCP2TX_TC_MASK                                        0x8000ff07
   #define CCP2TX_TC_WIDTH                                       32
   #define CCP2TX_TC_RESET                                       0x0000ff00
      #define CCP2TX_TC_SWR_BITS                                 31:31
      #define CCP2TX_TC_SWR_SET                                  0x80000000
      #define CCP2TX_TC_SWR_CLR                                  0x7fffffff
      #define CCP2TX_TC_SWR_MSB                                  31
      #define CCP2TX_TC_SWR_LSB                                  31
      #define CCP2TX_TC_TIP_BITS                                 15:8
      #define CCP2TX_TC_TIP_SET                                  0x0000ff00
      #define CCP2TX_TC_TIP_CLR                                  0xffff00ff
      #define CCP2TX_TC_TIP_MSB                                  15
      #define CCP2TX_TC_TIP_LSB                                  8
      #define CCP2TX_TC_CLKM_BITS                                2:2
      #define CCP2TX_TC_CLKM_SET                                 0x00000004
      #define CCP2TX_TC_CLKM_CLR                                 0xfffffffb
      #define CCP2TX_TC_CLKM_MSB                                 2
      #define CCP2TX_TC_CLKM_LSB                                 2
      #define CCP2TX_TC_MEN_BITS                                 1:1
      #define CCP2TX_TC_MEN_SET                                  0x00000002
      #define CCP2TX_TC_MEN_CLR                                  0xfffffffd
      #define CCP2TX_TC_MEN_MSB                                  1
      #define CCP2TX_TC_MEN_LSB                                  1
      #define CCP2TX_TC_TEN_BITS                                 0:0
      #define CCP2TX_TC_TEN_SET                                  0x00000001
      #define CCP2TX_TC_TEN_CLR                                  0xfffffffe
      #define CCP2TX_TC_TEN_MSB                                  0
      #define CCP2TX_TC_TEN_LSB                                  0
#define CCP2TX_TS                                                HW_REGISTER_RW( 0x7e001004 ) 
   #define CCP2TX_TS_MASK                                        0x000f1f7f
   #define CCP2TX_TS_WIDTH                                       20
   #define CCP2TX_TS_RESET                                       0000000000
      #define CCP2TX_TS_TQI_BITS                                 19:19
      #define CCP2TX_TS_TQI_SET                                  0x00080000
      #define CCP2TX_TS_TQI_CLR                                  0xfff7ffff
      #define CCP2TX_TS_TQI_MSB                                  19
      #define CCP2TX_TS_TQI_LSB                                  19
      #define CCP2TX_TS_TEI_BITS                                 18:18
      #define CCP2TX_TS_TEI_SET                                  0x00040000
      #define CCP2TX_TS_TEI_CLR                                  0xfffbffff
      #define CCP2TX_TS_TEI_MSB                                  18
      #define CCP2TX_TS_TEI_LSB                                  18
      #define CCP2TX_TS_TII_BITS                                 17:17
      #define CCP2TX_TS_TII_SET                                  0x00020000
      #define CCP2TX_TS_TII_CLR                                  0xfffdffff
      #define CCP2TX_TS_TII_MSB                                  17
      #define CCP2TX_TS_TII_LSB                                  17
      #define CCP2TX_TS_IS_BITS                                  16:16
      #define CCP2TX_TS_IS_SET                                   0x00010000
      #define CCP2TX_TS_IS_CLR                                   0xfffeffff
      #define CCP2TX_TS_IS_MSB                                   16
      #define CCP2TX_TS_IS_LSB                                   16
      #define CCP2TX_TS_TQL_BITS                                 12:8
      #define CCP2TX_TS_TQL_SET                                  0x00001f00
      #define CCP2TX_TS_TQL_CLR                                  0xffffe0ff
      #define CCP2TX_TS_TQL_MSB                                  12
      #define CCP2TX_TS_TQL_LSB                                  8
      #define CCP2TX_TS_TFP_BITS                                 6:6
      #define CCP2TX_TS_TFP_SET                                  0x00000040
      #define CCP2TX_TS_TFP_CLR                                  0xffffffbf
      #define CCP2TX_TS_TFP_MSB                                  6
      #define CCP2TX_TS_TFP_LSB                                  6
      #define CCP2TX_TS_TFF_BITS                                 5:5
      #define CCP2TX_TS_TFF_SET                                  0x00000020
      #define CCP2TX_TS_TFF_CLR                                  0xffffffdf
      #define CCP2TX_TS_TFF_MSB                                  5
      #define CCP2TX_TS_TFF_LSB                                  5
      #define CCP2TX_TS_TFE_BITS                                 4:4
      #define CCP2TX_TS_TFE_SET                                  0x00000010
      #define CCP2TX_TS_TFE_CLR                                  0xffffffef
      #define CCP2TX_TS_TFE_MSB                                  4
      #define CCP2TX_TS_TFE_LSB                                  4
      #define CCP2TX_TS_TUE_BITS                                 3:3
      #define CCP2TX_TS_TUE_SET                                  0x00000008
      #define CCP2TX_TS_TUE_CLR                                  0xfffffff7
      #define CCP2TX_TS_TUE_MSB                                  3
      #define CCP2TX_TS_TUE_LSB                                  3
      #define CCP2TX_TS_ARE_BITS                                 2:2
      #define CCP2TX_TS_ARE_SET                                  0x00000004
      #define CCP2TX_TS_ARE_CLR                                  0xfffffffb
      #define CCP2TX_TS_ARE_MSB                                  2
      #define CCP2TX_TS_ARE_LSB                                  2
      #define CCP2TX_TS_IEB_BITS                                 1:1
      #define CCP2TX_TS_IEB_SET                                  0x00000002
      #define CCP2TX_TS_IEB_CLR                                  0xfffffffd
      #define CCP2TX_TS_IEB_MSB                                  1
      #define CCP2TX_TS_IEB_LSB                                  1
      #define CCP2TX_TS_TXB_BITS                                 0:0
      #define CCP2TX_TS_TXB_SET                                  0x00000001
      #define CCP2TX_TS_TXB_CLR                                  0xfffffffe
      #define CCP2TX_TS_TXB_MSB                                  0
      #define CCP2TX_TS_TXB_LSB                                  0
#define CCP2TX_TAC                                               HW_REGISTER_RW( 0x7e001008 ) 
   #define CCP2TX_TAC_MASK                                       0xffffff0f
   #define CCP2TX_TAC_WIDTH                                      32
   #define CCP2TX_TAC_RESET                                      0x77434307
      #define CCP2TX_TAC_CTATADJ_BITS                            31:28
      #define CCP2TX_TAC_CTATADJ_SET                             0xf0000000
      #define CCP2TX_TAC_CTATADJ_CLR                             0x0fffffff
      #define CCP2TX_TAC_CTATADJ_MSB                             31
      #define CCP2TX_TAC_CTATADJ_LSB                             28
      #define CCP2TX_TAC_PTATADJ_BITS                            27:24
      #define CCP2TX_TAC_PTATADJ_SET                             0x0f000000
      #define CCP2TX_TAC_PTATADJ_CLR                             0xf0ffffff
      #define CCP2TX_TAC_PTATADJ_MSB                             27
      #define CCP2TX_TAC_PTATADJ_LSB                             24
      #define CCP2TX_TAC_CLAC_BITS                               23:16
      #define CCP2TX_TAC_CLAC_SET                                0x00ff0000
      #define CCP2TX_TAC_CLAC_CLR                                0xff00ffff
      #define CCP2TX_TAC_CLAC_MSB                                23
      #define CCP2TX_TAC_CLAC_LSB                                16
      #define CCP2TX_TAC_DLAC_BITS                               15:8
      #define CCP2TX_TAC_DLAC_SET                                0x0000ff00
      #define CCP2TX_TAC_DLAC_CLR                                0xffff00ff
      #define CCP2TX_TAC_DLAC_MSB                                15
      #define CCP2TX_TAC_DLAC_LSB                                8
      #define CCP2TX_TAC_TPC_BITS                                3:3
      #define CCP2TX_TAC_TPC_SET                                 0x00000008
      #define CCP2TX_TAC_TPC_CLR                                 0xfffffff7
      #define CCP2TX_TAC_TPC_MSB                                 3
      #define CCP2TX_TAC_TPC_LSB                                 3
      #define CCP2TX_TAC_BPD_BITS                                2:2
      #define CCP2TX_TAC_BPD_SET                                 0x00000004
      #define CCP2TX_TAC_BPD_CLR                                 0xfffffffb
      #define CCP2TX_TAC_BPD_MSB                                 2
      #define CCP2TX_TAC_BPD_LSB                                 2
      #define CCP2TX_TAC_APD_BITS                                1:1
      #define CCP2TX_TAC_APD_SET                                 0x00000002
      #define CCP2TX_TAC_APD_CLR                                 0xfffffffd
      #define CCP2TX_TAC_APD_MSB                                 1
      #define CCP2TX_TAC_APD_LSB                                 1
      #define CCP2TX_TAC_ARST_BITS                               0:0
      #define CCP2TX_TAC_ARST_SET                                0x00000001
      #define CCP2TX_TAC_ARST_CLR                                0xfffffffe
      #define CCP2TX_TAC_ARST_MSB                                0
      #define CCP2TX_TAC_ARST_LSB                                0
#define CCP2TX_TPC                                               HW_REGISTER_RW( 0x7e00100c ) 
   #define CCP2TX_TPC_MASK                                       0x0000ffff
   #define CCP2TX_TPC_WIDTH                                      16
   #define CCP2TX_TPC_RESET                                      0000000000
      #define CCP2TX_TPC_TPT_BITS                                15:8
      #define CCP2TX_TPC_TPT_SET                                 0x0000ff00
      #define CCP2TX_TPC_TPT_CLR                                 0xffff00ff
      #define CCP2TX_TPC_TPT_MSB                                 15
      #define CCP2TX_TPC_TPT_LSB                                 8
      #define CCP2TX_TPC_TPP_BITS                                7:4
      #define CCP2TX_TPC_TPP_SET                                 0x000000f0
      #define CCP2TX_TPC_TPP_CLR                                 0xffffff0f
      #define CCP2TX_TPC_TPP_MSB                                 7
      #define CCP2TX_TPC_TPP_LSB                                 4
      #define CCP2TX_TPC_TNP_BITS                                3:0
      #define CCP2TX_TPC_TNP_SET                                 0x0000000f
      #define CCP2TX_TPC_TNP_CLR                                 0xfffffff0
      #define CCP2TX_TPC_TNP_MSB                                 3
      #define CCP2TX_TPC_TNP_LSB                                 0
#define CCP2TX_TSC                                               HW_REGISTER_RW( 0x7e001010 ) 
   #define CCP2TX_TSC_MASK                                       0x0000000f
   #define CCP2TX_TSC_WIDTH                                      4
   #define CCP2TX_TSC_RESET                                      0x00000002
      #define CCP2TX_TSC_TSM_BITS                                3:0
      #define CCP2TX_TSC_TSM_SET                                 0x0000000f
      #define CCP2TX_TSC_TSM_CLR                                 0xfffffff0
      #define CCP2TX_TSC_TSM_MSB                                 3
      #define CCP2TX_TSC_TSM_LSB                                 0
#define CCP2TX_TIC                                               HW_REGISTER_RW( 0x7e001014 ) 
   #define CCP2TX_TIC_MASK                                       0x000000f7
   #define CCP2TX_TIC_WIDTH                                      8
   #define CCP2TX_TIC_RESET                                      0000000000
      #define CCP2TX_TIC_TQIT_BITS                               7:4
      #define CCP2TX_TIC_TQIT_SET                                0x000000f0
      #define CCP2TX_TIC_TQIT_CLR                                0xffffff0f
      #define CCP2TX_TIC_TQIT_MSB                                7
      #define CCP2TX_TIC_TQIT_LSB                                4
      #define CCP2TX_TIC_TQIE_BITS                               2:2
      #define CCP2TX_TIC_TQIE_SET                                0x00000004
      #define CCP2TX_TIC_TQIE_CLR                                0xfffffffb
      #define CCP2TX_TIC_TQIE_MSB                                2
      #define CCP2TX_TIC_TQIE_LSB                                2
      #define CCP2TX_TIC_TEIE_BITS                               1:1
      #define CCP2TX_TIC_TEIE_SET                                0x00000002
      #define CCP2TX_TIC_TEIE_CLR                                0xfffffffd
      #define CCP2TX_TIC_TEIE_MSB                                1
      #define CCP2TX_TIC_TEIE_LSB                                1
      #define CCP2TX_TIC_TIIE_BITS                               0:0
      #define CCP2TX_TIC_TIIE_SET                                0x00000001
      #define CCP2TX_TIC_TIIE_CLR                                0xfffffffe
      #define CCP2TX_TIC_TIIE_MSB                                0
      #define CCP2TX_TIC_TIIE_LSB                                0
#define CCP2TX_TTC                                               HW_REGISTER_RW( 0x7e001018 ) 
   #define CCP2TX_TTC_MASK                                       0x80ff1fff
   #define CCP2TX_TTC_WIDTH                                      32
   #define CCP2TX_TTC_RESET                                      0x00000100
      #define CCP2TX_TTC_ATX_BITS                                31:31
      #define CCP2TX_TTC_ATX_SET                                 0x80000000
      #define CCP2TX_TTC_ATX_CLR                                 0x7fffffff
      #define CCP2TX_TTC_ATX_MSB                                 31
      #define CCP2TX_TTC_ATX_LSB                                 31
      #define CCP2TX_TTC_BI_BITS                                 23:16
      #define CCP2TX_TTC_BI_SET                                  0x00ff0000
      #define CCP2TX_TTC_BI_CLR                                  0xff00ffff
      #define CCP2TX_TTC_BI_MSB                                  23
      #define CCP2TX_TTC_BI_LSB                                  16
      #define CCP2TX_TTC_FSP_BITS                                12:12
      #define CCP2TX_TTC_FSP_SET                                 0x00001000
      #define CCP2TX_TTC_FSP_CLR                                 0xffffefff
      #define CCP2TX_TTC_FSP_MSB                                 12
      #define CCP2TX_TTC_FSP_LSB                                 12
      #define CCP2TX_TTC_LEC_BITS                                11:8
      #define CCP2TX_TTC_LEC_SET                                 0x00000f00
      #define CCP2TX_TTC_LEC_CLR                                 0xfffff0ff
      #define CCP2TX_TTC_LEC_MSB                                 11
      #define CCP2TX_TTC_LEC_LSB                                 8
      #define CCP2TX_TTC_LSC_BITS                                7:4
      #define CCP2TX_TTC_LSC_SET                                 0x000000f0
      #define CCP2TX_TTC_LSC_CLR                                 0xffffff0f
      #define CCP2TX_TTC_LSC_MSB                                 7
      #define CCP2TX_TTC_LSC_LSB                                 4
      #define CCP2TX_TTC_LCN_BITS                                3:0
      #define CCP2TX_TTC_LCN_SET                                 0x0000000f
      #define CCP2TX_TTC_LCN_CLR                                 0xfffffff0
      #define CCP2TX_TTC_LCN_MSB                                 3
      #define CCP2TX_TTC_LCN_LSB                                 0
#define CCP2TX_TBA                                               HW_REGISTER_RW( 0x7e00101c ) 
   #define CCP2TX_TBA_MASK                                       0x3fffffff
   #define CCP2TX_TBA_WIDTH                                      30
   #define CCP2TX_TBA_RESET                                      0000000000
      #define CCP2TX_TBA_ADDR_BITS                               29:0
      #define CCP2TX_TBA_ADDR_SET                                0x3fffffff
      #define CCP2TX_TBA_ADDR_CLR                                0xc0000000
      #define CCP2TX_TBA_ADDR_MSB                                29
      #define CCP2TX_TBA_ADDR_LSB                                0
#define CCP2TX_TDL                                               HW_REGISTER_RW( 0x7e001020 ) 
   #define CCP2TX_TDL_MASK                                       0x3fffffff
   #define CCP2TX_TDL_WIDTH                                      30
   #define CCP2TX_TDL_RESET                                      0000000000
      #define CCP2TX_TDL_LEN_BITS                                29:0
      #define CCP2TX_TDL_LEN_SET                                 0x3fffffff
      #define CCP2TX_TDL_LEN_CLR                                 0xc0000000
      #define CCP2TX_TDL_LEN_MSB                                 29
      #define CCP2TX_TDL_LEN_LSB                                 0
#define CCP2TX_TD                                                HW_REGISTER_RW( 0x7e001024 ) 
   #define CCP2TX_TD_MASK                                        0x000000ff
   #define CCP2TX_TD_WIDTH                                       8
      #define CCP2TX_TD_IES_BITS                                 6:5
      #define CCP2TX_TD_IES_SET                                  0x00000060
      #define CCP2TX_TD_IES_CLR                                  0xffffff9f
      #define CCP2TX_TD_IES_MSB                                  6
      #define CCP2TX_TD_IES_LSB                                  5
      #define CCP2TX_TD_TCS_BITS                                 4:0
      #define CCP2TX_TD_TCS_SET                                  0x0000001f
      #define CCP2TX_TD_TCS_CLR                                  0xffffffe0
      #define CCP2TX_TD_TCS_MSB                                  4
      #define CCP2TX_TD_TCS_LSB                                  0
#define CCP2TX_TSPARE                                            HW_REGISTER_RW( 0x7e001028 ) 
   #define CCP2TX_TSPARE_MASK                                    0xffffffff
   #define CCP2TX_TSPARE_WIDTH                                   32
