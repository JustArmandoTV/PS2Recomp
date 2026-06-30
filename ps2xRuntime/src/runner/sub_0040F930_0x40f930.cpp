#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0040F930
// Address: 0x40f930 - 0x40fcb0
void sub_0040F930_0x40f930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040F930_0x40f930");
#endif

    switch (ctx->pc) {
        case 0x40f930u: goto label_40f930;
        case 0x40f934u: goto label_40f934;
        case 0x40f938u: goto label_40f938;
        case 0x40f93cu: goto label_40f93c;
        case 0x40f940u: goto label_40f940;
        case 0x40f944u: goto label_40f944;
        case 0x40f948u: goto label_40f948;
        case 0x40f94cu: goto label_40f94c;
        case 0x40f950u: goto label_40f950;
        case 0x40f954u: goto label_40f954;
        case 0x40f958u: goto label_40f958;
        case 0x40f95cu: goto label_40f95c;
        case 0x40f960u: goto label_40f960;
        case 0x40f964u: goto label_40f964;
        case 0x40f968u: goto label_40f968;
        case 0x40f96cu: goto label_40f96c;
        case 0x40f970u: goto label_40f970;
        case 0x40f974u: goto label_40f974;
        case 0x40f978u: goto label_40f978;
        case 0x40f97cu: goto label_40f97c;
        case 0x40f980u: goto label_40f980;
        case 0x40f984u: goto label_40f984;
        case 0x40f988u: goto label_40f988;
        case 0x40f98cu: goto label_40f98c;
        case 0x40f990u: goto label_40f990;
        case 0x40f994u: goto label_40f994;
        case 0x40f998u: goto label_40f998;
        case 0x40f99cu: goto label_40f99c;
        case 0x40f9a0u: goto label_40f9a0;
        case 0x40f9a4u: goto label_40f9a4;
        case 0x40f9a8u: goto label_40f9a8;
        case 0x40f9acu: goto label_40f9ac;
        case 0x40f9b0u: goto label_40f9b0;
        case 0x40f9b4u: goto label_40f9b4;
        case 0x40f9b8u: goto label_40f9b8;
        case 0x40f9bcu: goto label_40f9bc;
        case 0x40f9c0u: goto label_40f9c0;
        case 0x40f9c4u: goto label_40f9c4;
        case 0x40f9c8u: goto label_40f9c8;
        case 0x40f9ccu: goto label_40f9cc;
        case 0x40f9d0u: goto label_40f9d0;
        case 0x40f9d4u: goto label_40f9d4;
        case 0x40f9d8u: goto label_40f9d8;
        case 0x40f9dcu: goto label_40f9dc;
        case 0x40f9e0u: goto label_40f9e0;
        case 0x40f9e4u: goto label_40f9e4;
        case 0x40f9e8u: goto label_40f9e8;
        case 0x40f9ecu: goto label_40f9ec;
        case 0x40f9f0u: goto label_40f9f0;
        case 0x40f9f4u: goto label_40f9f4;
        case 0x40f9f8u: goto label_40f9f8;
        case 0x40f9fcu: goto label_40f9fc;
        case 0x40fa00u: goto label_40fa00;
        case 0x40fa04u: goto label_40fa04;
        case 0x40fa08u: goto label_40fa08;
        case 0x40fa0cu: goto label_40fa0c;
        case 0x40fa10u: goto label_40fa10;
        case 0x40fa14u: goto label_40fa14;
        case 0x40fa18u: goto label_40fa18;
        case 0x40fa1cu: goto label_40fa1c;
        case 0x40fa20u: goto label_40fa20;
        case 0x40fa24u: goto label_40fa24;
        case 0x40fa28u: goto label_40fa28;
        case 0x40fa2cu: goto label_40fa2c;
        case 0x40fa30u: goto label_40fa30;
        case 0x40fa34u: goto label_40fa34;
        case 0x40fa38u: goto label_40fa38;
        case 0x40fa3cu: goto label_40fa3c;
        case 0x40fa40u: goto label_40fa40;
        case 0x40fa44u: goto label_40fa44;
        case 0x40fa48u: goto label_40fa48;
        case 0x40fa4cu: goto label_40fa4c;
        case 0x40fa50u: goto label_40fa50;
        case 0x40fa54u: goto label_40fa54;
        case 0x40fa58u: goto label_40fa58;
        case 0x40fa5cu: goto label_40fa5c;
        case 0x40fa60u: goto label_40fa60;
        case 0x40fa64u: goto label_40fa64;
        case 0x40fa68u: goto label_40fa68;
        case 0x40fa6cu: goto label_40fa6c;
        case 0x40fa70u: goto label_40fa70;
        case 0x40fa74u: goto label_40fa74;
        case 0x40fa78u: goto label_40fa78;
        case 0x40fa7cu: goto label_40fa7c;
        case 0x40fa80u: goto label_40fa80;
        case 0x40fa84u: goto label_40fa84;
        case 0x40fa88u: goto label_40fa88;
        case 0x40fa8cu: goto label_40fa8c;
        case 0x40fa90u: goto label_40fa90;
        case 0x40fa94u: goto label_40fa94;
        case 0x40fa98u: goto label_40fa98;
        case 0x40fa9cu: goto label_40fa9c;
        case 0x40faa0u: goto label_40faa0;
        case 0x40faa4u: goto label_40faa4;
        case 0x40faa8u: goto label_40faa8;
        case 0x40faacu: goto label_40faac;
        case 0x40fab0u: goto label_40fab0;
        case 0x40fab4u: goto label_40fab4;
        case 0x40fab8u: goto label_40fab8;
        case 0x40fabcu: goto label_40fabc;
        case 0x40fac0u: goto label_40fac0;
        case 0x40fac4u: goto label_40fac4;
        case 0x40fac8u: goto label_40fac8;
        case 0x40faccu: goto label_40facc;
        case 0x40fad0u: goto label_40fad0;
        case 0x40fad4u: goto label_40fad4;
        case 0x40fad8u: goto label_40fad8;
        case 0x40fadcu: goto label_40fadc;
        case 0x40fae0u: goto label_40fae0;
        case 0x40fae4u: goto label_40fae4;
        case 0x40fae8u: goto label_40fae8;
        case 0x40faecu: goto label_40faec;
        case 0x40faf0u: goto label_40faf0;
        case 0x40faf4u: goto label_40faf4;
        case 0x40faf8u: goto label_40faf8;
        case 0x40fafcu: goto label_40fafc;
        case 0x40fb00u: goto label_40fb00;
        case 0x40fb04u: goto label_40fb04;
        case 0x40fb08u: goto label_40fb08;
        case 0x40fb0cu: goto label_40fb0c;
        case 0x40fb10u: goto label_40fb10;
        case 0x40fb14u: goto label_40fb14;
        case 0x40fb18u: goto label_40fb18;
        case 0x40fb1cu: goto label_40fb1c;
        case 0x40fb20u: goto label_40fb20;
        case 0x40fb24u: goto label_40fb24;
        case 0x40fb28u: goto label_40fb28;
        case 0x40fb2cu: goto label_40fb2c;
        case 0x40fb30u: goto label_40fb30;
        case 0x40fb34u: goto label_40fb34;
        case 0x40fb38u: goto label_40fb38;
        case 0x40fb3cu: goto label_40fb3c;
        case 0x40fb40u: goto label_40fb40;
        case 0x40fb44u: goto label_40fb44;
        case 0x40fb48u: goto label_40fb48;
        case 0x40fb4cu: goto label_40fb4c;
        case 0x40fb50u: goto label_40fb50;
        case 0x40fb54u: goto label_40fb54;
        case 0x40fb58u: goto label_40fb58;
        case 0x40fb5cu: goto label_40fb5c;
        case 0x40fb60u: goto label_40fb60;
        case 0x40fb64u: goto label_40fb64;
        case 0x40fb68u: goto label_40fb68;
        case 0x40fb6cu: goto label_40fb6c;
        case 0x40fb70u: goto label_40fb70;
        case 0x40fb74u: goto label_40fb74;
        case 0x40fb78u: goto label_40fb78;
        case 0x40fb7cu: goto label_40fb7c;
        case 0x40fb80u: goto label_40fb80;
        case 0x40fb84u: goto label_40fb84;
        case 0x40fb88u: goto label_40fb88;
        case 0x40fb8cu: goto label_40fb8c;
        case 0x40fb90u: goto label_40fb90;
        case 0x40fb94u: goto label_40fb94;
        case 0x40fb98u: goto label_40fb98;
        case 0x40fb9cu: goto label_40fb9c;
        case 0x40fba0u: goto label_40fba0;
        case 0x40fba4u: goto label_40fba4;
        case 0x40fba8u: goto label_40fba8;
        case 0x40fbacu: goto label_40fbac;
        case 0x40fbb0u: goto label_40fbb0;
        case 0x40fbb4u: goto label_40fbb4;
        case 0x40fbb8u: goto label_40fbb8;
        case 0x40fbbcu: goto label_40fbbc;
        case 0x40fbc0u: goto label_40fbc0;
        case 0x40fbc4u: goto label_40fbc4;
        case 0x40fbc8u: goto label_40fbc8;
        case 0x40fbccu: goto label_40fbcc;
        case 0x40fbd0u: goto label_40fbd0;
        case 0x40fbd4u: goto label_40fbd4;
        case 0x40fbd8u: goto label_40fbd8;
        case 0x40fbdcu: goto label_40fbdc;
        case 0x40fbe0u: goto label_40fbe0;
        case 0x40fbe4u: goto label_40fbe4;
        case 0x40fbe8u: goto label_40fbe8;
        case 0x40fbecu: goto label_40fbec;
        case 0x40fbf0u: goto label_40fbf0;
        case 0x40fbf4u: goto label_40fbf4;
        case 0x40fbf8u: goto label_40fbf8;
        case 0x40fbfcu: goto label_40fbfc;
        case 0x40fc00u: goto label_40fc00;
        case 0x40fc04u: goto label_40fc04;
        case 0x40fc08u: goto label_40fc08;
        case 0x40fc0cu: goto label_40fc0c;
        case 0x40fc10u: goto label_40fc10;
        case 0x40fc14u: goto label_40fc14;
        case 0x40fc18u: goto label_40fc18;
        case 0x40fc1cu: goto label_40fc1c;
        case 0x40fc20u: goto label_40fc20;
        case 0x40fc24u: goto label_40fc24;
        case 0x40fc28u: goto label_40fc28;
        case 0x40fc2cu: goto label_40fc2c;
        case 0x40fc30u: goto label_40fc30;
        case 0x40fc34u: goto label_40fc34;
        case 0x40fc38u: goto label_40fc38;
        case 0x40fc3cu: goto label_40fc3c;
        case 0x40fc40u: goto label_40fc40;
        case 0x40fc44u: goto label_40fc44;
        case 0x40fc48u: goto label_40fc48;
        case 0x40fc4cu: goto label_40fc4c;
        case 0x40fc50u: goto label_40fc50;
        case 0x40fc54u: goto label_40fc54;
        case 0x40fc58u: goto label_40fc58;
        case 0x40fc5cu: goto label_40fc5c;
        case 0x40fc60u: goto label_40fc60;
        case 0x40fc64u: goto label_40fc64;
        case 0x40fc68u: goto label_40fc68;
        case 0x40fc6cu: goto label_40fc6c;
        case 0x40fc70u: goto label_40fc70;
        case 0x40fc74u: goto label_40fc74;
        case 0x40fc78u: goto label_40fc78;
        case 0x40fc7cu: goto label_40fc7c;
        case 0x40fc80u: goto label_40fc80;
        case 0x40fc84u: goto label_40fc84;
        case 0x40fc88u: goto label_40fc88;
        case 0x40fc8cu: goto label_40fc8c;
        case 0x40fc90u: goto label_40fc90;
        case 0x40fc94u: goto label_40fc94;
        case 0x40fc98u: goto label_40fc98;
        case 0x40fc9cu: goto label_40fc9c;
        case 0x40fca0u: goto label_40fca0;
        case 0x40fca4u: goto label_40fca4;
        case 0x40fca8u: goto label_40fca8;
        case 0x40fcacu: goto label_40fcac;
        default: break;
    }

    ctx->pc = 0x40f930u;

label_40f930:
    // 0x40f930: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x40f930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_40f934:
    // 0x40f934: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x40f934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_40f938:
    // 0x40f938: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x40f938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_40f93c:
    // 0x40f93c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x40f93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_40f940:
    // 0x40f940: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x40f940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_40f944:
    // 0x40f944: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x40f944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_40f948:
    // 0x40f948: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x40f948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_40f94c:
    // 0x40f94c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40f94cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40f950:
    // 0x40f950: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x40f950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_40f954:
    // 0x40f954: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x40f954u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40f958:
    // 0x40f958: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x40f958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_40f95c:
    // 0x40f95c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x40f95cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40f960:
    // 0x40f960: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x40f960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_40f964:
    // 0x40f964: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x40f964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_40f968:
    // 0x40f968: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40f968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_40f96c:
    // 0x40f96c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40f96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_40f970:
    // 0x40f970: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x40f970u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
label_40f974:
    // 0x40f974: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x40f974u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_40f978:
    // 0x40f978: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x40f978u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
label_40f97c:
    // 0x40f97c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x40f97cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_40f980:
    // 0x40f980: 0x2631bf40  addiu       $s1, $s1, -0x40C0
    ctx->pc = 0x40f980u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950720));
label_40f984:
    // 0x40f984: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x40f984u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_40f988:
    // 0x40f988: 0x2610bf30  addiu       $s0, $s0, -0x40D0
    ctx->pc = 0x40f988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950704));
label_40f98c:
    // 0x40f98c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x40f98cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_40f990:
    // 0x40f990: 0x8c520e68  lw          $s2, 0xE68($v0)
    ctx->pc = 0x40f990u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_40f994:
    // 0x40f994: 0x8c7389e0  lw          $s3, -0x7620($v1)
    ctx->pc = 0x40f994u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_40f998:
    // 0x40f998: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x40f998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_40f99c:
    // 0x40f99c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x40f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_40f9a0:
    // 0x40f9a0: 0x8e570010  lw          $s7, 0x10($s2)
    ctx->pc = 0x40f9a0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_40f9a4:
    // 0x40f9a4: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x40f9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_40f9a8:
    // 0x40f9a8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x40f9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_40f9ac:
    // 0x40f9ac: 0x2463c100  addiu       $v1, $v1, -0x3F00
    ctx->pc = 0x40f9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951168));
label_40f9b0:
    // 0x40f9b0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x40f9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_40f9b4:
    // 0x40f9b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x40f9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_40f9b8:
    // 0x40f9b8: 0x8cc90968  lw          $t1, 0x968($a2)
    ctx->pc = 0x40f9b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2408)));
label_40f9bc:
    // 0x40f9bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x40f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_40f9c0:
    // 0x40f9c0: 0x8c560eac  lw          $s6, 0xEAC($v0)
    ctx->pc = 0x40f9c0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_40f9c4:
    // 0x40f9c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40f9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40f9c8:
    // 0x40f9c8: 0x8cc60cc4  lw          $a2, 0xCC4($a2)
    ctx->pc = 0x40f9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3268)));
label_40f9cc:
    // 0x40f9cc: 0x252affff  addiu       $t2, $t1, -0x1
    ctx->pc = 0x40f9ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_40f9d0:
    // 0x40f9d0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x40f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_40f9d4:
    // 0x40f9d4: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x40f9d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_40f9d8:
    // 0x40f9d8: 0x12a4823  subu        $t1, $t1, $t2
    ctx->pc = 0x40f9d8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_40f9dc:
    // 0x40f9dc: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x40f9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_40f9e0:
    // 0x40f9e0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x40f9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_40f9e4:
    // 0x40f9e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x40f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_40f9e8:
    // 0x40f9e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x40f9e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40f9ec:
    // 0x40f9ec: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x40f9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_40f9f0:
    // 0x40f9f0: 0x694823  subu        $t1, $v1, $t1
    ctx->pc = 0x40f9f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_40f9f4:
    // 0x40f9f4: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x40f9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_40f9f8:
    // 0x40f9f8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x40f9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_40f9fc:
    // 0x40f9fc: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x40f9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_40fa00:
    // 0x40fa00: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x40fa00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_40fa04:
    // 0x40fa04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x40fa04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40fa08:
    // 0x40fa08: 0xc0ee398  jal         func_3B8E60
label_40fa0c:
    if (ctx->pc == 0x40FA0Cu) {
        ctx->pc = 0x40FA0Cu;
            // 0x40fa0c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40FA10u;
        goto label_40fa10;
    }
    ctx->pc = 0x40FA08u;
    SET_GPR_U32(ctx, 31, 0x40FA10u);
    ctx->pc = 0x40FA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40FA08u;
            // 0x40fa0c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E60u;
    if (runtime->hasFunction(0x3B8E60u)) {
        auto targetFn = runtime->lookupFunction(0x3B8E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FA10u; }
        if (ctx->pc != 0x40FA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8E60_0x3b8e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FA10u; }
        if (ctx->pc != 0x40FA10u) { return; }
    }
    ctx->pc = 0x40FA10u;
label_40fa10:
    // 0x40fa10: 0xae570010  sw          $s7, 0x10($s2)
    ctx->pc = 0x40fa10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 23));
label_40fa14:
    // 0x40fa14: 0x3c0242b8  lui         $v0, 0x42B8
    ctx->pc = 0x40fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17080 << 16));
label_40fa18:
    // 0x40fa18: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x40fa18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_40fa1c:
    // 0x40fa1c: 0xc6c10088  lwc1        $f1, 0x88($s6)
    ctx->pc = 0x40fa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40fa20:
    // 0x40fa20: 0x3c024391  lui         $v0, 0x4391
    ctx->pc = 0x40fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17297 << 16));
label_40fa24:
    // 0x40fa24: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x40fa24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_40fa28:
    // 0x40fa28: 0x3c02440e  lui         $v0, 0x440E
    ctx->pc = 0x40fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17422 << 16));
label_40fa2c:
    // 0x40fa2c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x40fa2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_40fa30:
    // 0x40fa30: 0xc7a600a8  lwc1        $f6, 0xA8($sp)
    ctx->pc = 0x40fa30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_40fa34:
    // 0x40fa34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40fa34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40fa38:
    // 0x40fa38: 0x0  nop
    ctx->pc = 0x40fa38u;
    // NOP
label_40fa3c:
    // 0x40fa3c: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x40fa3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40fa40:
    // 0x40fa40: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_40fa44:
    if (ctx->pc == 0x40FA44u) {
        ctx->pc = 0x40FA44u;
            // 0x40fa44: 0x46800d20  cvt.s.w     $f20, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x40FA48u;
        goto label_40fa48;
    }
    ctx->pc = 0x40FA40u;
    {
        const bool branch_taken_0x40fa40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40FA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40FA40u;
            // 0x40fa44: 0x46800d20  cvt.s.w     $f20, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fa40) {
            ctx->pc = 0x40FA68u;
            goto label_40fa68;
        }
    }
    ctx->pc = 0x40FA48u;
label_40fa48:
    // 0x40fa48: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x40fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_40fa4c:
    // 0x40fa4c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x40fa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_40fa50:
    // 0x40fa50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40fa50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40fa54:
    // 0x40fa54: 0x0  nop
    ctx->pc = 0x40fa54u;
    // NOP
label_40fa58:
    // 0x40fa58: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x40fa58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_40fa5c:
    // 0x40fa5c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x40fa5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40fa60:
    // 0x40fa60: 0x0  nop
    ctx->pc = 0x40fa60u;
    // NOP
label_40fa64:
    // 0x40fa64: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x40fa64u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_40fa68:
    // 0x40fa68: 0xc7a500ac  lwc1        $f5, 0xAC($sp)
    ctx->pc = 0x40fa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_40fa6c:
    // 0x40fa6c: 0x3c0242a4  lui         $v0, 0x42A4
    ctx->pc = 0x40fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17060 << 16));
label_40fa70:
    // 0x40fa70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40fa70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40fa74:
    // 0x40fa74: 0x0  nop
    ctx->pc = 0x40fa74u;
    // NOP
label_40fa78:
    // 0x40fa78: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x40fa78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40fa7c:
    // 0x40fa7c: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_40fa80:
    if (ctx->pc == 0x40FA80u) {
        ctx->pc = 0x40FA80u;
            // 0x40fa80: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->pc = 0x40FA84u;
        goto label_40fa84;
    }
    ctx->pc = 0x40FA7Cu;
    {
        const bool branch_taken_0x40fa7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40fa7c) {
            ctx->pc = 0x40FA80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40FA7Cu;
            // 0x40fa80: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40FA98u;
            goto label_40fa98;
        }
    }
    ctx->pc = 0x40FA84u;
label_40fa84:
    // 0x40fa84: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x40fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_40fa88:
    // 0x40fa88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40fa88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40fa8c:
    // 0x40fa8c: 0x0  nop
    ctx->pc = 0x40fa8cu;
    // NOP
label_40fa90:
    // 0x40fa90: 0x46002880  add.s       $f2, $f5, $f0
    ctx->pc = 0x40fa90u;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_40fa94:
    // 0x40fa94: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x40fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_40fa98:
    // 0x40fa98: 0x3c0743b2  lui         $a3, 0x43B2
    ctx->pc = 0x40fa98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17330 << 16));
label_40fa9c:
    // 0x40fa9c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x40fa9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_40faa0:
    // 0x40faa0: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x40faa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_40faa4:
    // 0x40faa4: 0x460220c2  mul.s       $f3, $f4, $f2
    ctx->pc = 0x40faa4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_40faa8:
    // 0x40faa8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x40faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_40faac:
    // 0x40faac: 0x8c447c30  lw          $a0, 0x7C30($v0)
    ctx->pc = 0x40faacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31792)));
label_40fab0:
    // 0x40fab0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x40fab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_40fab4:
    // 0x40fab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40fab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40fab8:
    // 0x40fab8: 0xc6a20084  lwc1        $f2, 0x84($s5)
    ctx->pc = 0x40fab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40fabc:
    // 0x40fabc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x40fabcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40fac0:
    // 0x40fac0: 0x0  nop
    ctx->pc = 0x40fac0u;
    // NOP
label_40fac4:
    // 0x40fac4: 0x46140818  adda.s      $f1, $f20
    ctx->pc = 0x40fac4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_40fac8:
    // 0x40fac8: 0x46021d82  mul.s       $f22, $f3, $f2
    ctx->pc = 0x40fac8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_40facc:
    // 0x40facc: 0x4606209d  msub.s      $f2, $f4, $f6
    ctx->pc = 0x40faccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
label_40fad0:
    // 0x40fad0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x40fad0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40fad4:
    // 0x40fad4: 0x0  nop
    ctx->pc = 0x40fad4u;
    // NOP
label_40fad8:
    // 0x40fad8: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x40fad8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_40fadc:
    // 0x40fadc: 0x4605201d  msub.s      $f0, $f4, $f5
    ctx->pc = 0x40fadcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
label_40fae0:
    // 0x40fae0: 0xe4c2fc90  swc1        $f2, -0x370($a2)
    ctx->pc = 0x40fae0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294966416), bits); }
label_40fae4:
    // 0x40fae4: 0xc0506ac  jal         func_141AB0
label_40fae8:
    if (ctx->pc == 0x40FAE8u) {
        ctx->pc = 0x40FAE8u;
            // 0x40fae8: 0xe460fc94  swc1        $f0, -0x36C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294966420), bits); }
        ctx->pc = 0x40FAECu;
        goto label_40faec;
    }
    ctx->pc = 0x40FAE4u;
    SET_GPR_U32(ctx, 31, 0x40FAECu);
    ctx->pc = 0x40FAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40FAE4u;
            // 0x40fae8: 0xe460fc94  swc1        $f0, -0x36C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294966420), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FAECu; }
        if (ctx->pc != 0x40FAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FAECu; }
        if (ctx->pc != 0x40FAECu) { return; }
    }
    ctx->pc = 0x40FAECu;
label_40faec:
    // 0x40faec: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x40faecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40faf0:
    // 0x40faf0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x40faf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40faf4:
    // 0x40faf4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x40faf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_40faf8:
    // 0x40faf8: 0x320f809  jalr        $t9
label_40fafc:
    if (ctx->pc == 0x40FAFCu) {
        ctx->pc = 0x40FAFCu;
            // 0x40fafc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x40FB00u;
        goto label_40fb00;
    }
    ctx->pc = 0x40FAF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40FB00u);
        ctx->pc = 0x40FAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40FAF8u;
            // 0x40fafc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40FB00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40FB00u; }
            if (ctx->pc != 0x40FB00u) { return; }
        }
        }
    }
    ctx->pc = 0x40FB00u;
label_40fb00:
    // 0x40fb00: 0x3c0243b2  lui         $v0, 0x43B2
    ctx->pc = 0x40fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17330 << 16));
label_40fb04:
    // 0x40fb04: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x40fb04u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_40fb08:
    // 0x40fb08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40fb08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40fb0c:
    // 0x40fb0c: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x40fb0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_40fb10:
    // 0x40fb10: 0x461605c0  add.s       $f23, $f0, $f22
    ctx->pc = 0x40fb10u;
    ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_40fb14:
    // 0x40fb14: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x40fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_40fb18:
    // 0x40fb18: 0x262500e0  addiu       $a1, $s1, 0xE0
    ctx->pc = 0x40fb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_40fb1c:
    // 0x40fb1c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x40fb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40fb20:
    // 0x40fb20: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x40fb20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40fb24:
    // 0x40fb24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40fb24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40fb28:
    // 0x40fb28: 0x46160581  sub.s       $f22, $f0, $f22
    ctx->pc = 0x40fb28u;
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
label_40fb2c:
    // 0x40fb2c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x40fb2cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40fb30:
    // 0x40fb30: 0x0  nop
    ctx->pc = 0x40fb30u;
    // NOP
label_40fb34:
    // 0x40fb34: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x40fb34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_40fb38:
    // 0x40fb38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40fb38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40fb3c:
    // 0x40fb3c: 0x0  nop
    ctx->pc = 0x40fb3cu;
    // NOP
label_40fb40:
    // 0x40fb40: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x40fb40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_40fb44:
    // 0x40fb44: 0x4615a301  sub.s       $f12, $f20, $f21
    ctx->pc = 0x40fb44u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
label_40fb48:
    // 0x40fb48: 0x4615a380  add.s       $f14, $f20, $f21
    ctx->pc = 0x40fb48u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
label_40fb4c:
    // 0x40fb4c: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x40fb4cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
label_40fb50:
    // 0x40fb50: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x40fb50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_40fb54:
    // 0x40fb54: 0xc0bc284  jal         func_2F0A10
label_40fb58:
    if (ctx->pc == 0x40FB58u) {
        ctx->pc = 0x40FB58u;
            // 0x40fb58: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x40FB5Cu;
        goto label_40fb5c;
    }
    ctx->pc = 0x40FB54u;
    SET_GPR_U32(ctx, 31, 0x40FB5Cu);
    ctx->pc = 0x40FB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40FB54u;
            // 0x40fb58: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FB5Cu; }
        if (ctx->pc != 0x40FB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FB5Cu; }
        if (ctx->pc != 0x40FB5Cu) { return; }
    }
    ctx->pc = 0x40FB5Cu;
label_40fb5c:
    // 0x40fb5c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x40fb5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40fb60:
    // 0x40fb60: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x40fb60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_40fb64:
    // 0x40fb64: 0x320f809  jalr        $t9
label_40fb68:
    if (ctx->pc == 0x40FB68u) {
        ctx->pc = 0x40FB68u;
            // 0x40fb68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40FB6Cu;
        goto label_40fb6c;
    }
    ctx->pc = 0x40FB64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40FB6Cu);
        ctx->pc = 0x40FB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40FB64u;
            // 0x40fb68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40FB6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40FB6Cu; }
            if (ctx->pc != 0x40FB6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x40FB6Cu;
label_40fb6c:
    // 0x40fb6c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x40fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_40fb70:
    // 0x40fb70: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x40fb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_40fb74:
    // 0x40fb74: 0xc0506ac  jal         func_141AB0
label_40fb78:
    if (ctx->pc == 0x40FB78u) {
        ctx->pc = 0x40FB78u;
            // 0x40fb78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40FB7Cu;
        goto label_40fb7c;
    }
    ctx->pc = 0x40FB74u;
    SET_GPR_U32(ctx, 31, 0x40FB7Cu);
    ctx->pc = 0x40FB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40FB74u;
            // 0x40fb78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FB7Cu; }
        if (ctx->pc != 0x40FB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FB7Cu; }
        if (ctx->pc != 0x40FB7Cu) { return; }
    }
    ctx->pc = 0x40FB7Cu;
label_40fb7c:
    // 0x40fb7c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x40fb7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40fb80:
    // 0x40fb80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x40fb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40fb84:
    // 0x40fb84: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x40fb84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_40fb88:
    // 0x40fb88: 0x320f809  jalr        $t9
label_40fb8c:
    if (ctx->pc == 0x40FB8Cu) {
        ctx->pc = 0x40FB8Cu;
            // 0x40fb8c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x40FB90u;
        goto label_40fb90;
    }
    ctx->pc = 0x40FB88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40FB90u);
        ctx->pc = 0x40FB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40FB88u;
            // 0x40fb8c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40FB90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40FB90u; }
            if (ctx->pc != 0x40FB90u) { return; }
        }
        }
    }
    ctx->pc = 0x40FB90u;
label_40fb90:
    // 0x40fb90: 0x4615a000  add.s       $f0, $f20, $f21
    ctx->pc = 0x40fb90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
label_40fb94:
    // 0x40fb94: 0x3c04435a  lui         $a0, 0x435A
    ctx->pc = 0x40fb94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17242 << 16));
label_40fb98:
    // 0x40fb98: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x40fb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_40fb9c:
    // 0x40fb9c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x40fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_40fba0:
    // 0x40fba0: 0x8468bd20  lh          $t0, -0x42E0($v1)
    ctx->pc = 0x40fba0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950176)));
label_40fba4:
    // 0x40fba4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x40fba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_40fba8:
    // 0x40fba8: 0x8442bd22  lh          $v0, -0x42DE($v0)
    ctx->pc = 0x40fba8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950178)));
label_40fbac:
    // 0x40fbac: 0x24a5be50  addiu       $a1, $a1, -0x41B0
    ctx->pc = 0x40fbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950480));
label_40fbb0:
    // 0x40fbb0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x40fbb0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40fbb4:
    // 0x40fbb4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x40fbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40fbb8:
    // 0x40fbb8: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x40fbb8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_40fbbc:
    // 0x40fbbc: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x40fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_40fbc0:
    // 0x40fbc0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x40fbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40fbc4:
    // 0x40fbc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40fbc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40fbc8:
    // 0x40fbc8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x40fbc8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40fbcc:
    // 0x40fbcc: 0x0  nop
    ctx->pc = 0x40fbccu;
    // NOP
label_40fbd0:
    // 0x40fbd0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x40fbd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_40fbd4:
    // 0x40fbd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40fbd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40fbd8:
    // 0x40fbd8: 0x0  nop
    ctx->pc = 0x40fbd8u;
    // NOP
label_40fbdc:
    // 0x40fbdc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x40fbdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_40fbe0:
    // 0x40fbe0: 0x46016380  add.s       $f14, $f12, $f1
    ctx->pc = 0x40fbe0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_40fbe4:
    // 0x40fbe4: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x40fbe4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_40fbe8:
    // 0x40fbe8: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x40fbe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_40fbec:
    // 0x40fbec: 0xc0bc284  jal         func_2F0A10
label_40fbf0:
    if (ctx->pc == 0x40FBF0u) {
        ctx->pc = 0x40FBF0u;
            // 0x40fbf0: 0x4600bbc6  mov.s       $f15, $f23 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x40FBF4u;
        goto label_40fbf4;
    }
    ctx->pc = 0x40FBECu;
    SET_GPR_U32(ctx, 31, 0x40FBF4u);
    ctx->pc = 0x40FBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40FBECu;
            // 0x40fbf0: 0x4600bbc6  mov.s       $f15, $f23 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FBF4u; }
        if (ctx->pc != 0x40FBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FBF4u; }
        if (ctx->pc != 0x40FBF4u) { return; }
    }
    ctx->pc = 0x40FBF4u;
label_40fbf4:
    // 0x40fbf4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x40fbf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40fbf8:
    // 0x40fbf8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x40fbf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_40fbfc:
    // 0x40fbfc: 0x320f809  jalr        $t9
label_40fc00:
    if (ctx->pc == 0x40FC00u) {
        ctx->pc = 0x40FC00u;
            // 0x40fc00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40FC04u;
        goto label_40fc04;
    }
    ctx->pc = 0x40FBFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40FC04u);
        ctx->pc = 0x40FC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40FBFCu;
            // 0x40fc00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40FC04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40FC04u; }
            if (ctx->pc != 0x40FC04u) { return; }
        }
        }
    }
    ctx->pc = 0x40FC04u;
label_40fc04:
    // 0x40fc04: 0x8ea30068  lw          $v1, 0x68($s5)
    ctx->pc = 0x40fc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
label_40fc08:
    // 0x40fc08: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
label_40fc0c:
    if (ctx->pc == 0x40FC0Cu) {
        ctx->pc = 0x40FC0Cu;
            // 0x40fc0c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x40FC10u;
        goto label_40fc10;
    }
    ctx->pc = 0x40FC08u;
    {
        const bool branch_taken_0x40fc08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x40fc08) {
            ctx->pc = 0x40FC0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40FC08u;
            // 0x40fc0c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40FC70u;
            goto label_40fc70;
        }
    }
    ctx->pc = 0x40FC10u;
label_40fc10:
    // 0x40fc10: 0xc6a10084  lwc1        $f1, 0x84($s5)
    ctx->pc = 0x40fc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40fc14:
    // 0x40fc14: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x40fc14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_40fc18:
    // 0x40fc18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40fc18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40fc1c:
    // 0x40fc1c: 0x0  nop
    ctx->pc = 0x40fc1cu;
    // NOP
label_40fc20:
    // 0x40fc20: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x40fc20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40fc24:
    // 0x40fc24: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_40fc28:
    if (ctx->pc == 0x40FC28u) {
        ctx->pc = 0x40FC2Cu;
        goto label_40fc2c;
    }
    ctx->pc = 0x40FC24u;
    {
        const bool branch_taken_0x40fc24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40fc24) {
            ctx->pc = 0x40FC6Cu;
            goto label_40fc6c;
        }
    }
    ctx->pc = 0x40FC2Cu;
label_40fc2c:
    // 0x40fc2c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x40fc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_40fc30:
    // 0x40fc30: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x40fc30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_40fc34:
    // 0x40fc34: 0x8c510e68  lw          $s1, 0xE68($v0)
    ctx->pc = 0x40fc34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_40fc38:
    // 0x40fc38: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x40fc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_40fc3c:
    // 0x40fc3c: 0x24c6fc90  addiu       $a2, $a2, -0x370
    ctx->pc = 0x40fc3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966416));
label_40fc40:
    // 0x40fc40: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x40fc40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40fc44:
    // 0x40fc44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x40fc44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40fc48:
    // 0x40fc48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x40fc48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40fc4c:
    // 0x40fc4c: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x40fc4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_40fc50:
    // 0x40fc50: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x40fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_40fc54:
    // 0x40fc54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40fc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40fc58:
    // 0x40fc58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x40fc58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40fc5c:
    // 0x40fc5c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x40fc5cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40fc60:
    // 0x40fc60: 0xc0ee334  jal         func_3B8CD0
label_40fc64:
    if (ctx->pc == 0x40FC64u) {
        ctx->pc = 0x40FC64u;
            // 0x40fc64: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x40FC68u;
        goto label_40fc68;
    }
    ctx->pc = 0x40FC60u;
    SET_GPR_U32(ctx, 31, 0x40FC68u);
    ctx->pc = 0x40FC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40FC60u;
            // 0x40fc64: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FC68u; }
        if (ctx->pc != 0x40FC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40FC68u; }
        if (ctx->pc != 0x40FC68u) { return; }
    }
    ctx->pc = 0x40FC68u;
label_40fc68:
    // 0x40fc68: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x40fc68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
label_40fc6c:
    // 0x40fc6c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x40fc6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_40fc70:
    // 0x40fc70: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x40fc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_40fc74:
    // 0x40fc74: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x40fc74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_40fc78:
    // 0x40fc78: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x40fc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_40fc7c:
    // 0x40fc7c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x40fc7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_40fc80:
    // 0x40fc80: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x40fc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_40fc84:
    // 0x40fc84: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x40fc84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_40fc88:
    // 0x40fc88: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x40fc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_40fc8c:
    // 0x40fc8c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x40fc8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_40fc90:
    // 0x40fc90: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x40fc90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_40fc94:
    // 0x40fc94: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x40fc94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40fc98:
    // 0x40fc98: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40fc98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40fc9c:
    // 0x40fc9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40fc9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40fca0:
    // 0x40fca0: 0x3e00008  jr          $ra
label_40fca4:
    if (ctx->pc == 0x40FCA4u) {
        ctx->pc = 0x40FCA4u;
            // 0x40fca4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x40FCA8u;
        goto label_40fca8;
    }
    ctx->pc = 0x40FCA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40FCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40FCA0u;
            // 0x40fca4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40FCA8u;
label_40fca8:
    // 0x40fca8: 0x0  nop
    ctx->pc = 0x40fca8u;
    // NOP
label_40fcac:
    // 0x40fcac: 0x0  nop
    ctx->pc = 0x40fcacu;
    // NOP
}
