#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00447EC0
// Address: 0x447ec0 - 0x448260
void sub_00447EC0_0x447ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00447EC0_0x447ec0");
#endif

    switch (ctx->pc) {
        case 0x447ec0u: goto label_447ec0;
        case 0x447ec4u: goto label_447ec4;
        case 0x447ec8u: goto label_447ec8;
        case 0x447eccu: goto label_447ecc;
        case 0x447ed0u: goto label_447ed0;
        case 0x447ed4u: goto label_447ed4;
        case 0x447ed8u: goto label_447ed8;
        case 0x447edcu: goto label_447edc;
        case 0x447ee0u: goto label_447ee0;
        case 0x447ee4u: goto label_447ee4;
        case 0x447ee8u: goto label_447ee8;
        case 0x447eecu: goto label_447eec;
        case 0x447ef0u: goto label_447ef0;
        case 0x447ef4u: goto label_447ef4;
        case 0x447ef8u: goto label_447ef8;
        case 0x447efcu: goto label_447efc;
        case 0x447f00u: goto label_447f00;
        case 0x447f04u: goto label_447f04;
        case 0x447f08u: goto label_447f08;
        case 0x447f0cu: goto label_447f0c;
        case 0x447f10u: goto label_447f10;
        case 0x447f14u: goto label_447f14;
        case 0x447f18u: goto label_447f18;
        case 0x447f1cu: goto label_447f1c;
        case 0x447f20u: goto label_447f20;
        case 0x447f24u: goto label_447f24;
        case 0x447f28u: goto label_447f28;
        case 0x447f2cu: goto label_447f2c;
        case 0x447f30u: goto label_447f30;
        case 0x447f34u: goto label_447f34;
        case 0x447f38u: goto label_447f38;
        case 0x447f3cu: goto label_447f3c;
        case 0x447f40u: goto label_447f40;
        case 0x447f44u: goto label_447f44;
        case 0x447f48u: goto label_447f48;
        case 0x447f4cu: goto label_447f4c;
        case 0x447f50u: goto label_447f50;
        case 0x447f54u: goto label_447f54;
        case 0x447f58u: goto label_447f58;
        case 0x447f5cu: goto label_447f5c;
        case 0x447f60u: goto label_447f60;
        case 0x447f64u: goto label_447f64;
        case 0x447f68u: goto label_447f68;
        case 0x447f6cu: goto label_447f6c;
        case 0x447f70u: goto label_447f70;
        case 0x447f74u: goto label_447f74;
        case 0x447f78u: goto label_447f78;
        case 0x447f7cu: goto label_447f7c;
        case 0x447f80u: goto label_447f80;
        case 0x447f84u: goto label_447f84;
        case 0x447f88u: goto label_447f88;
        case 0x447f8cu: goto label_447f8c;
        case 0x447f90u: goto label_447f90;
        case 0x447f94u: goto label_447f94;
        case 0x447f98u: goto label_447f98;
        case 0x447f9cu: goto label_447f9c;
        case 0x447fa0u: goto label_447fa0;
        case 0x447fa4u: goto label_447fa4;
        case 0x447fa8u: goto label_447fa8;
        case 0x447facu: goto label_447fac;
        case 0x447fb0u: goto label_447fb0;
        case 0x447fb4u: goto label_447fb4;
        case 0x447fb8u: goto label_447fb8;
        case 0x447fbcu: goto label_447fbc;
        case 0x447fc0u: goto label_447fc0;
        case 0x447fc4u: goto label_447fc4;
        case 0x447fc8u: goto label_447fc8;
        case 0x447fccu: goto label_447fcc;
        case 0x447fd0u: goto label_447fd0;
        case 0x447fd4u: goto label_447fd4;
        case 0x447fd8u: goto label_447fd8;
        case 0x447fdcu: goto label_447fdc;
        case 0x447fe0u: goto label_447fe0;
        case 0x447fe4u: goto label_447fe4;
        case 0x447fe8u: goto label_447fe8;
        case 0x447fecu: goto label_447fec;
        case 0x447ff0u: goto label_447ff0;
        case 0x447ff4u: goto label_447ff4;
        case 0x447ff8u: goto label_447ff8;
        case 0x447ffcu: goto label_447ffc;
        case 0x448000u: goto label_448000;
        case 0x448004u: goto label_448004;
        case 0x448008u: goto label_448008;
        case 0x44800cu: goto label_44800c;
        case 0x448010u: goto label_448010;
        case 0x448014u: goto label_448014;
        case 0x448018u: goto label_448018;
        case 0x44801cu: goto label_44801c;
        case 0x448020u: goto label_448020;
        case 0x448024u: goto label_448024;
        case 0x448028u: goto label_448028;
        case 0x44802cu: goto label_44802c;
        case 0x448030u: goto label_448030;
        case 0x448034u: goto label_448034;
        case 0x448038u: goto label_448038;
        case 0x44803cu: goto label_44803c;
        case 0x448040u: goto label_448040;
        case 0x448044u: goto label_448044;
        case 0x448048u: goto label_448048;
        case 0x44804cu: goto label_44804c;
        case 0x448050u: goto label_448050;
        case 0x448054u: goto label_448054;
        case 0x448058u: goto label_448058;
        case 0x44805cu: goto label_44805c;
        case 0x448060u: goto label_448060;
        case 0x448064u: goto label_448064;
        case 0x448068u: goto label_448068;
        case 0x44806cu: goto label_44806c;
        case 0x448070u: goto label_448070;
        case 0x448074u: goto label_448074;
        case 0x448078u: goto label_448078;
        case 0x44807cu: goto label_44807c;
        case 0x448080u: goto label_448080;
        case 0x448084u: goto label_448084;
        case 0x448088u: goto label_448088;
        case 0x44808cu: goto label_44808c;
        case 0x448090u: goto label_448090;
        case 0x448094u: goto label_448094;
        case 0x448098u: goto label_448098;
        case 0x44809cu: goto label_44809c;
        case 0x4480a0u: goto label_4480a0;
        case 0x4480a4u: goto label_4480a4;
        case 0x4480a8u: goto label_4480a8;
        case 0x4480acu: goto label_4480ac;
        case 0x4480b0u: goto label_4480b0;
        case 0x4480b4u: goto label_4480b4;
        case 0x4480b8u: goto label_4480b8;
        case 0x4480bcu: goto label_4480bc;
        case 0x4480c0u: goto label_4480c0;
        case 0x4480c4u: goto label_4480c4;
        case 0x4480c8u: goto label_4480c8;
        case 0x4480ccu: goto label_4480cc;
        case 0x4480d0u: goto label_4480d0;
        case 0x4480d4u: goto label_4480d4;
        case 0x4480d8u: goto label_4480d8;
        case 0x4480dcu: goto label_4480dc;
        case 0x4480e0u: goto label_4480e0;
        case 0x4480e4u: goto label_4480e4;
        case 0x4480e8u: goto label_4480e8;
        case 0x4480ecu: goto label_4480ec;
        case 0x4480f0u: goto label_4480f0;
        case 0x4480f4u: goto label_4480f4;
        case 0x4480f8u: goto label_4480f8;
        case 0x4480fcu: goto label_4480fc;
        case 0x448100u: goto label_448100;
        case 0x448104u: goto label_448104;
        case 0x448108u: goto label_448108;
        case 0x44810cu: goto label_44810c;
        case 0x448110u: goto label_448110;
        case 0x448114u: goto label_448114;
        case 0x448118u: goto label_448118;
        case 0x44811cu: goto label_44811c;
        case 0x448120u: goto label_448120;
        case 0x448124u: goto label_448124;
        case 0x448128u: goto label_448128;
        case 0x44812cu: goto label_44812c;
        case 0x448130u: goto label_448130;
        case 0x448134u: goto label_448134;
        case 0x448138u: goto label_448138;
        case 0x44813cu: goto label_44813c;
        case 0x448140u: goto label_448140;
        case 0x448144u: goto label_448144;
        case 0x448148u: goto label_448148;
        case 0x44814cu: goto label_44814c;
        case 0x448150u: goto label_448150;
        case 0x448154u: goto label_448154;
        case 0x448158u: goto label_448158;
        case 0x44815cu: goto label_44815c;
        case 0x448160u: goto label_448160;
        case 0x448164u: goto label_448164;
        case 0x448168u: goto label_448168;
        case 0x44816cu: goto label_44816c;
        case 0x448170u: goto label_448170;
        case 0x448174u: goto label_448174;
        case 0x448178u: goto label_448178;
        case 0x44817cu: goto label_44817c;
        case 0x448180u: goto label_448180;
        case 0x448184u: goto label_448184;
        case 0x448188u: goto label_448188;
        case 0x44818cu: goto label_44818c;
        case 0x448190u: goto label_448190;
        case 0x448194u: goto label_448194;
        case 0x448198u: goto label_448198;
        case 0x44819cu: goto label_44819c;
        case 0x4481a0u: goto label_4481a0;
        case 0x4481a4u: goto label_4481a4;
        case 0x4481a8u: goto label_4481a8;
        case 0x4481acu: goto label_4481ac;
        case 0x4481b0u: goto label_4481b0;
        case 0x4481b4u: goto label_4481b4;
        case 0x4481b8u: goto label_4481b8;
        case 0x4481bcu: goto label_4481bc;
        case 0x4481c0u: goto label_4481c0;
        case 0x4481c4u: goto label_4481c4;
        case 0x4481c8u: goto label_4481c8;
        case 0x4481ccu: goto label_4481cc;
        case 0x4481d0u: goto label_4481d0;
        case 0x4481d4u: goto label_4481d4;
        case 0x4481d8u: goto label_4481d8;
        case 0x4481dcu: goto label_4481dc;
        case 0x4481e0u: goto label_4481e0;
        case 0x4481e4u: goto label_4481e4;
        case 0x4481e8u: goto label_4481e8;
        case 0x4481ecu: goto label_4481ec;
        case 0x4481f0u: goto label_4481f0;
        case 0x4481f4u: goto label_4481f4;
        case 0x4481f8u: goto label_4481f8;
        case 0x4481fcu: goto label_4481fc;
        case 0x448200u: goto label_448200;
        case 0x448204u: goto label_448204;
        case 0x448208u: goto label_448208;
        case 0x44820cu: goto label_44820c;
        case 0x448210u: goto label_448210;
        case 0x448214u: goto label_448214;
        case 0x448218u: goto label_448218;
        case 0x44821cu: goto label_44821c;
        case 0x448220u: goto label_448220;
        case 0x448224u: goto label_448224;
        case 0x448228u: goto label_448228;
        case 0x44822cu: goto label_44822c;
        case 0x448230u: goto label_448230;
        case 0x448234u: goto label_448234;
        case 0x448238u: goto label_448238;
        case 0x44823cu: goto label_44823c;
        case 0x448240u: goto label_448240;
        case 0x448244u: goto label_448244;
        case 0x448248u: goto label_448248;
        case 0x44824cu: goto label_44824c;
        case 0x448250u: goto label_448250;
        case 0x448254u: goto label_448254;
        case 0x448258u: goto label_448258;
        case 0x44825cu: goto label_44825c;
        default: break;
    }

    ctx->pc = 0x447ec0u;

label_447ec0:
    // 0x447ec0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x447ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_447ec4:
    // 0x447ec4: 0x2485ff9c  addiu       $a1, $a0, -0x64
    ctx->pc = 0x447ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
label_447ec8:
    // 0x447ec8: 0x2442d5c8  addiu       $v0, $v0, -0x2A38
    ctx->pc = 0x447ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956488));
label_447ecc:
    // 0x447ecc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x447eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_447ed0:
    // 0x447ed0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x447ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_447ed4:
    // 0x447ed4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x447ed4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_447ed8:
    // 0x447ed8: 0x3e00008  jr          $ra
label_447edc:
    if (ctx->pc == 0x447EDCu) {
        ctx->pc = 0x447EDCu;
            // 0x447edc: 0xac657538  sw          $a1, 0x7538($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 30008), GPR_U32(ctx, 5));
        ctx->pc = 0x447EE0u;
        goto label_447ee0;
    }
    ctx->pc = 0x447ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x447EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x447ED8u;
            // 0x447edc: 0xac657538  sw          $a1, 0x7538($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 30008), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x447EE0u;
label_447ee0:
    // 0x447ee0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x447ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_447ee4:
    // 0x447ee4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x447ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_447ee8:
    // 0x447ee8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x447ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_447eec:
    // 0x447eec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x447eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_447ef0:
    // 0x447ef0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x447ef0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_447ef4:
    // 0x447ef4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x447ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_447ef8:
    // 0x447ef8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x447ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_447efc:
    // 0x447efc: 0x8cc50db0  lw          $a1, 0xDB0($a2)
    ctx->pc = 0x447efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3504)));
label_447f00:
    // 0x447f00: 0x8cd10d98  lw          $s1, 0xD98($a2)
    ctx->pc = 0x447f00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3480)));
label_447f04:
    // 0x447f04: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x447f04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
label_447f08:
    // 0x447f08: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_447f0c:
    if (ctx->pc == 0x447F0Cu) {
        ctx->pc = 0x447F0Cu;
            // 0x447f0c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x447F10u;
        goto label_447f10;
    }
    ctx->pc = 0x447F08u;
    {
        const bool branch_taken_0x447f08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x447F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x447F08u;
            // 0x447f0c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447f08) {
            ctx->pc = 0x447F1Cu;
            goto label_447f1c;
        }
    }
    ctx->pc = 0x447F10u;
label_447f10:
    // 0x447f10: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x447f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_447f14:
    // 0x447f14: 0x54a3005e  bnel        $a1, $v1, . + 4 + (0x5E << 2)
label_447f18:
    if (ctx->pc == 0x447F18u) {
        ctx->pc = 0x447F18u;
            // 0x447f18: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x447F1Cu;
        goto label_447f1c;
    }
    ctx->pc = 0x447F14u;
    {
        const bool branch_taken_0x447f14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x447f14) {
            ctx->pc = 0x447F18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x447F14u;
            // 0x447f18: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x448090u;
            goto label_448090;
        }
    }
    ctx->pc = 0x447F1Cu;
label_447f1c:
    // 0x447f1c: 0x8e63006c  lw          $v1, 0x6C($s3)
    ctx->pc = 0x447f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_447f20:
    // 0x447f20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x447f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_447f24:
    // 0x447f24: 0x2248004  sllv        $s0, $a0, $s1
    ctx->pc = 0x447f24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
label_447f28:
    // 0x447f28: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x447f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_447f2c:
    // 0x447f2c: 0x14600057  bnez        $v1, . + 4 + (0x57 << 2)
label_447f30:
    if (ctx->pc == 0x447F30u) {
        ctx->pc = 0x447F34u;
        goto label_447f34;
    }
    ctx->pc = 0x447F2Cu;
    {
        const bool branch_taken_0x447f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x447f2c) {
            ctx->pc = 0x44808Cu;
            goto label_44808c;
        }
    }
    ctx->pc = 0x447F34u;
label_447f34:
    // 0x447f34: 0x8e430da0  lw          $v1, 0xDA0($s2)
    ctx->pc = 0x447f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_447f38:
    // 0x447f38: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x447f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_447f3c:
    // 0x447f3c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_447f40:
    if (ctx->pc == 0x447F40u) {
        ctx->pc = 0x447F40u;
            // 0x447f40: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x447F44u;
        goto label_447f44;
    }
    ctx->pc = 0x447F3Cu;
    {
        const bool branch_taken_0x447f3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x447f3c) {
            ctx->pc = 0x447F40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x447F3Cu;
            // 0x447f40: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x447F50u;
            goto label_447f50;
        }
    }
    ctx->pc = 0x447F44u;
label_447f44:
    // 0x447f44: 0x10000051  b           . + 4 + (0x51 << 2)
label_447f48:
    if (ctx->pc == 0x447F48u) {
        ctx->pc = 0x447F4Cu;
        goto label_447f4c;
    }
    ctx->pc = 0x447F44u;
    {
        const bool branch_taken_0x447f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x447f44) {
            ctx->pc = 0x44808Cu;
            goto label_44808c;
        }
    }
    ctx->pc = 0x447F4Cu;
label_447f4c:
    // 0x447f4c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x447f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_447f50:
    // 0x447f50: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
label_447f54:
    if (ctx->pc == 0x447F54u) {
        ctx->pc = 0x447F54u;
            // 0x447f54: 0xae40118c  sw          $zero, 0x118C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4492), GPR_U32(ctx, 0));
        ctx->pc = 0x447F58u;
        goto label_447f58;
    }
    ctx->pc = 0x447F50u;
    {
        const bool branch_taken_0x447f50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x447f50) {
            ctx->pc = 0x447F54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x447F50u;
            // 0x447f54: 0xae40118c  sw          $zero, 0x118C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4492), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x447F64u;
            goto label_447f64;
        }
    }
    ctx->pc = 0x447F58u;
label_447f58:
    // 0x447f58: 0xc0b6764  jal         func_2D9D90
label_447f5c:
    if (ctx->pc == 0x447F5Cu) {
        ctx->pc = 0x447F5Cu;
            // 0x447f5c: 0x8e440d74  lw          $a0, 0xD74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
        ctx->pc = 0x447F60u;
        goto label_447f60;
    }
    ctx->pc = 0x447F58u;
    SET_GPR_U32(ctx, 31, 0x447F60u);
    ctx->pc = 0x447F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447F58u;
            // 0x447f5c: 0x8e440d74  lw          $a0, 0xD74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D90u;
    if (runtime->hasFunction(0x2D9D90u)) {
        auto targetFn = runtime->lookupFunction(0x2D9D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447F60u; }
        if (ctx->pc != 0x447F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9D90_0x2d9d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447F60u; }
        if (ctx->pc != 0x447F60u) { return; }
    }
    ctx->pc = 0x447F60u;
label_447f60:
    // 0x447f60: 0xae40118c  sw          $zero, 0x118C($s2)
    ctx->pc = 0x447f60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4492), GPR_U32(ctx, 0));
label_447f64:
    // 0x447f64: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x447f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_447f68:
    // 0x447f68: 0x8e66006c  lw          $a2, 0x6C($s3)
    ctx->pc = 0x447f68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_447f6c:
    // 0x447f6c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x447f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_447f70:
    // 0x447f70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x447f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_447f74:
    // 0x447f74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x447f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_447f78:
    // 0x447f78: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x447f78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
label_447f7c:
    // 0x447f7c: 0xae66006c  sw          $a2, 0x6C($s3)
    ctx->pc = 0x447f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 6));
label_447f80:
    // 0x447f80: 0xac430090  sw          $v1, 0x90($v0)
    ctx->pc = 0x447f80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 3));
label_447f84:
    // 0x447f84: 0x8e420d60  lw          $v0, 0xD60($s2)
    ctx->pc = 0x447f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_447f88:
    // 0x447f88: 0xa040001c  sb          $zero, 0x1C($v0)
    ctx->pc = 0x447f88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
label_447f8c:
    // 0x447f8c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x447f8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_447f90:
    // 0x447f90: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x447f90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_447f94:
    // 0x447f94: 0x320f809  jalr        $t9
label_447f98:
    if (ctx->pc == 0x447F98u) {
        ctx->pc = 0x447F98u;
            // 0x447f98: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x447F9Cu;
        goto label_447f9c;
    }
    ctx->pc = 0x447F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x447F9Cu);
        ctx->pc = 0x447F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x447F94u;
            // 0x447f98: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x447F9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x447F9Cu; }
            if (ctx->pc != 0x447F9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x447F9Cu;
label_447f9c:
    // 0x447f9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x447f9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_447fa0:
    // 0x447fa0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x447fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_447fa4:
    // 0x447fa4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x447fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_447fa8:
    // 0x447fa8: 0x24a5d760  addiu       $a1, $a1, -0x28A0
    ctx->pc = 0x447fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956896));
label_447fac:
    // 0x447fac: 0xc0767f0  jal         func_1D9FC0
label_447fb0:
    if (ctx->pc == 0x447FB0u) {
        ctx->pc = 0x447FB0u;
            // 0x447fb0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x447FB4u;
        goto label_447fb4;
    }
    ctx->pc = 0x447FACu;
    SET_GPR_U32(ctx, 31, 0x447FB4u);
    ctx->pc = 0x447FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447FACu;
            // 0x447fb0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447FB4u; }
        if (ctx->pc != 0x447FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447FB4u; }
        if (ctx->pc != 0x447FB4u) { return; }
    }
    ctx->pc = 0x447FB4u;
label_447fb4:
    // 0x447fb4: 0x8e500d74  lw          $s0, 0xD74($s2)
    ctx->pc = 0x447fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_447fb8:
    // 0x447fb8: 0x3c02ffdb  lui         $v0, 0xFFDB
    ctx->pc = 0x447fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65499 << 16));
label_447fbc:
    // 0x447fbc: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x447fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_447fc0:
    // 0x447fc0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x447fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_447fc4:
    // 0x447fc4: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x447fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_447fc8:
    // 0x447fc8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x447fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_447fcc:
    // 0x447fcc: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x447fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_447fd0:
    // 0x447fd0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x447fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_447fd4:
    // 0x447fd4: 0xc0a545c  jal         func_295170
label_447fd8:
    if (ctx->pc == 0x447FD8u) {
        ctx->pc = 0x447FD8u;
            // 0x447fd8: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x447FDCu;
        goto label_447fdc;
    }
    ctx->pc = 0x447FD4u;
    SET_GPR_U32(ctx, 31, 0x447FDCu);
    ctx->pc = 0x447FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447FD4u;
            // 0x447fd8: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447FDCu; }
        if (ctx->pc != 0x447FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447FDCu; }
        if (ctx->pc != 0x447FDCu) { return; }
    }
    ctx->pc = 0x447FDCu;
label_447fdc:
    // 0x447fdc: 0xac51002c  sw          $s1, 0x2C($v0)
    ctx->pc = 0x447fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 17));
label_447fe0:
    // 0x447fe0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x447fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_447fe4:
    // 0x447fe4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x447fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_447fe8:
    // 0x447fe8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x447fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_447fec:
    // 0x447fec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x447fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_447ff0:
    // 0x447ff0: 0xc08bf20  jal         func_22FC80
label_447ff4:
    if (ctx->pc == 0x447FF4u) {
        ctx->pc = 0x447FF4u;
            // 0x447ff4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x447FF8u;
        goto label_447ff8;
    }
    ctx->pc = 0x447FF0u;
    SET_GPR_U32(ctx, 31, 0x447FF8u);
    ctx->pc = 0x447FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447FF0u;
            // 0x447ff4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447FF8u; }
        if (ctx->pc != 0x447FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447FF8u; }
        if (ctx->pc != 0x447FF8u) { return; }
    }
    ctx->pc = 0x447FF8u;
label_447ff8:
    // 0x447ff8: 0x3c023f0e  lui         $v0, 0x3F0E
    ctx->pc = 0x447ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16142 << 16));
label_447ffc:
    // 0x447ffc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x447ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_448000:
    // 0x448000: 0x344238e4  ori         $v0, $v0, 0x38E4
    ctx->pc = 0x448000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14564);
label_448004:
    // 0x448004: 0x264602c0  addiu       $a2, $s2, 0x2C0
    ctx->pc = 0x448004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
label_448008:
    // 0x448008: 0xae420de4  sw          $v0, 0xDE4($s2)
    ctx->pc = 0x448008u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3556), GPR_U32(ctx, 2));
label_44800c:
    // 0x44800c: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x44800cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_448010:
    // 0x448010: 0xc04cc90  jal         func_133240
label_448014:
    if (ctx->pc == 0x448014u) {
        ctx->pc = 0x448014u;
            // 0x448014: 0x2445000c  addiu       $a1, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x448018u;
        goto label_448018;
    }
    ctx->pc = 0x448010u;
    SET_GPR_U32(ctx, 31, 0x448018u);
    ctx->pc = 0x448014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448010u;
            // 0x448014: 0x2445000c  addiu       $a1, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448018u; }
        if (ctx->pc != 0x448018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448018u; }
        if (ctx->pc != 0x448018u) { return; }
    }
    ctx->pc = 0x448018u;
label_448018:
    // 0x448018: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x448018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_44801c:
    // 0x44801c: 0xc04cc44  jal         func_133110
label_448020:
    if (ctx->pc == 0x448020u) {
        ctx->pc = 0x448020u;
            // 0x448020: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x448024u;
        goto label_448024;
    }
    ctx->pc = 0x44801Cu;
    SET_GPR_U32(ctx, 31, 0x448024u);
    ctx->pc = 0x448020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44801Cu;
            // 0x448020: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448024u; }
        if (ctx->pc != 0x448024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448024u; }
        if (ctx->pc != 0x448024u) { return; }
    }
    ctx->pc = 0x448024u;
label_448024:
    // 0x448024: 0x26440560  addiu       $a0, $s2, 0x560
    ctx->pc = 0x448024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_448028:
    // 0x448028: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x448028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_44802c:
    // 0x44802c: 0xc075378  jal         func_1D4DE0
label_448030:
    if (ctx->pc == 0x448030u) {
        ctx->pc = 0x448030u;
            // 0x448030: 0x26460830  addiu       $a2, $s2, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2096));
        ctx->pc = 0x448034u;
        goto label_448034;
    }
    ctx->pc = 0x44802Cu;
    SET_GPR_U32(ctx, 31, 0x448034u);
    ctx->pc = 0x448030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44802Cu;
            // 0x448030: 0x26460830  addiu       $a2, $s2, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448034u; }
        if (ctx->pc != 0x448034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448034u; }
        if (ctx->pc != 0x448034u) { return; }
    }
    ctx->pc = 0x448034u;
label_448034:
    // 0x448034: 0xc6410880  lwc1        $f1, 0x880($s2)
    ctx->pc = 0x448034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_448038:
    // 0x448038: 0x2644087c  addiu       $a0, $s2, 0x87C
    ctx->pc = 0x448038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2172));
label_44803c:
    // 0x44803c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x44803cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_448040:
    // 0x448040: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x448040u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_448044:
    // 0x448044: 0xc0c753c  jal         func_31D4F0
label_448048:
    if (ctx->pc == 0x448048u) {
        ctx->pc = 0x448048u;
            // 0x448048: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x44804Cu;
        goto label_44804c;
    }
    ctx->pc = 0x448044u;
    SET_GPR_U32(ctx, 31, 0x44804Cu);
    ctx->pc = 0x448048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448044u;
            // 0x448048: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44804Cu; }
        if (ctx->pc != 0x44804Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44804Cu; }
        if (ctx->pc != 0x44804Cu) { return; }
    }
    ctx->pc = 0x44804Cu;
label_44804c:
    // 0x44804c: 0xc64c0930  lwc1        $f12, 0x930($s2)
    ctx->pc = 0x44804cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_448050:
    // 0x448050: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x448050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_448054:
    // 0x448054: 0xc64d0880  lwc1        $f13, 0x880($s2)
    ctx->pc = 0x448054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_448058:
    // 0x448058: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x448058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_44805c:
    // 0x44805c: 0xc0c753c  jal         func_31D4F0
label_448060:
    if (ctx->pc == 0x448060u) {
        ctx->pc = 0x448060u;
            // 0x448060: 0x2644092c  addiu       $a0, $s2, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2348));
        ctx->pc = 0x448064u;
        goto label_448064;
    }
    ctx->pc = 0x44805Cu;
    SET_GPR_U32(ctx, 31, 0x448064u);
    ctx->pc = 0x448060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44805Cu;
            // 0x448060: 0x2644092c  addiu       $a0, $s2, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448064u; }
        if (ctx->pc != 0x448064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448064u; }
        if (ctx->pc != 0x448064u) { return; }
    }
    ctx->pc = 0x448064u;
label_448064:
    // 0x448064: 0x26430890  addiu       $v1, $s2, 0x890
    ctx->pc = 0x448064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
label_448068:
    // 0x448068: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x448068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_44806c:
    // 0x44806c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x44806cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_448070:
    // 0x448070: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x448070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_448074:
    // 0x448074: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x448074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_448078:
    // 0x448078: 0xc0c6250  jal         func_318940
label_44807c:
    if (ctx->pc == 0x44807Cu) {
        ctx->pc = 0x44807Cu;
            // 0x44807c: 0x26460560  addiu       $a2, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->pc = 0x448080u;
        goto label_448080;
    }
    ctx->pc = 0x448078u;
    SET_GPR_U32(ctx, 31, 0x448080u);
    ctx->pc = 0x44807Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448078u;
            // 0x44807c: 0x26460560  addiu       $a2, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448080u; }
        if (ctx->pc != 0x448080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448080u; }
        if (ctx->pc != 0x448080u) { return; }
    }
    ctx->pc = 0x448080u;
label_448080:
    // 0x448080: 0x8e430d70  lw          $v1, 0xD70($s2)
    ctx->pc = 0x448080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
label_448084:
    // 0x448084: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x448084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_448088:
    // 0x448088: 0xa06400dd  sb          $a0, 0xDD($v1)
    ctx->pc = 0x448088u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 221), (uint8_t)GPR_U32(ctx, 4));
label_44808c:
    // 0x44808c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x44808cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_448090:
    // 0x448090: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x448090u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_448094:
    // 0x448094: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x448094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_448098:
    // 0x448098: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x448098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44809c:
    // 0x44809c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44809cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4480a0:
    // 0x4480a0: 0x3e00008  jr          $ra
label_4480a4:
    if (ctx->pc == 0x4480A4u) {
        ctx->pc = 0x4480A4u;
            // 0x4480a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4480A8u;
        goto label_4480a8;
    }
    ctx->pc = 0x4480A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4480A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4480A0u;
            // 0x4480a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4480A8u;
label_4480a8:
    // 0x4480a8: 0x0  nop
    ctx->pc = 0x4480a8u;
    // NOP
label_4480ac:
    // 0x4480ac: 0x0  nop
    ctx->pc = 0x4480acu;
    // NOP
label_4480b0:
    // 0x4480b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4480b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4480b4:
    // 0x4480b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4480b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4480b8:
    // 0x4480b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4480b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4480bc:
    // 0x4480bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4480bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4480c0:
    // 0x4480c0: 0xc1123d4  jal         func_448F50
label_4480c4:
    if (ctx->pc == 0x4480C4u) {
        ctx->pc = 0x4480C4u;
            // 0x4480c4: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x4480C8u;
        goto label_4480c8;
    }
    ctx->pc = 0x4480C0u;
    SET_GPR_U32(ctx, 31, 0x4480C8u);
    ctx->pc = 0x4480C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4480C0u;
            // 0x4480c4: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x448F50u;
    if (runtime->hasFunction(0x448F50u)) {
        auto targetFn = runtime->lookupFunction(0x448F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4480C8u; }
        if (ctx->pc != 0x4480C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00448F50_0x448f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4480C8u; }
        if (ctx->pc != 0x4480C8u) { return; }
    }
    ctx->pc = 0x4480C8u;
label_4480c8:
    // 0x4480c8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4480c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4480cc:
    // 0x4480cc: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_4480d0:
    if (ctx->pc == 0x4480D0u) {
        ctx->pc = 0x4480D0u;
            // 0x4480d0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4480D4u;
        goto label_4480d4;
    }
    ctx->pc = 0x4480CCu;
    {
        const bool branch_taken_0x4480cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4480cc) {
            ctx->pc = 0x4480D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4480CCu;
            // 0x4480d0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4480F4u;
            goto label_4480f4;
        }
    }
    ctx->pc = 0x4480D4u;
label_4480d4:
    // 0x4480d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4480d8:
    if (ctx->pc == 0x4480D8u) {
        ctx->pc = 0x4480D8u;
            // 0x4480d8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4480DCu;
        goto label_4480dc;
    }
    ctx->pc = 0x4480D4u;
    {
        const bool branch_taken_0x4480d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4480d4) {
            ctx->pc = 0x4480D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4480D4u;
            // 0x4480d8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4480F0u;
            goto label_4480f0;
        }
    }
    ctx->pc = 0x4480DCu;
label_4480dc:
    // 0x4480dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4480dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4480e0:
    // 0x4480e0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4480e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4480e4:
    // 0x4480e4: 0x320f809  jalr        $t9
label_4480e8:
    if (ctx->pc == 0x4480E8u) {
        ctx->pc = 0x4480E8u;
            // 0x4480e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4480ECu;
        goto label_4480ec;
    }
    ctx->pc = 0x4480E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4480ECu);
        ctx->pc = 0x4480E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4480E4u;
            // 0x4480e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4480ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4480ECu; }
            if (ctx->pc != 0x4480ECu) { return; }
        }
        }
    }
    ctx->pc = 0x4480ECu;
label_4480ec:
    // 0x4480ec: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4480ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4480f0:
    // 0x4480f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4480f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4480f4:
    // 0x4480f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4480f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4480f8:
    // 0x4480f8: 0x3e00008  jr          $ra
label_4480fc:
    if (ctx->pc == 0x4480FCu) {
        ctx->pc = 0x4480FCu;
            // 0x4480fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x448100u;
        goto label_448100;
    }
    ctx->pc = 0x4480F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4480FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4480F8u;
            // 0x4480fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x448100u;
label_448100:
    // 0x448100: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x448100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_448104:
    // 0x448104: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x448104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_448108:
    // 0x448108: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x448108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_44810c:
    // 0x44810c: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x44810cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_448110:
    // 0x448110: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x448110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_448114:
    // 0x448114: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x448114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_448118:
    // 0x448118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x448118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44811c:
    // 0x44811c: 0x3c09447a  lui         $t1, 0x447A
    ctx->pc = 0x44811cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17530 << 16));
label_448120:
    // 0x448120: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x448120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_448124:
    // 0x448124: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x448124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_448128:
    // 0x448128: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x448128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44812c:
    // 0x44812c: 0x3448f000  ori         $t0, $v0, 0xF000
    ctx->pc = 0x44812cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_448130:
    // 0x448130: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x448130u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_448134:
    // 0x448134: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x448134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_448138:
    // 0x448138: 0x44892800  mtc1        $t1, $f5
    ctx->pc = 0x448138u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_44813c:
    // 0x44813c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x44813cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_448140:
    // 0x448140: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x448140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_448144:
    // 0x448144: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x448144u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_448148:
    // 0x448148: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x448148u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44814c:
    // 0x44814c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x44814cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_448150:
    // 0x448150: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x448150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_448154:
    // 0x448154: 0x44882000  mtc1        $t0, $f4
    ctx->pc = 0x448154u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_448158:
    // 0x448158: 0x0  nop
    ctx->pc = 0x448158u;
    // NOP
label_44815c:
    // 0x44815c: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x44815cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
label_448160:
    // 0x448160: 0xe4800064  swc1        $f0, 0x64($a0)
    ctx->pc = 0x448160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
label_448164:
    // 0x448164: 0xc4830034  lwc1        $f3, 0x34($a0)
    ctx->pc = 0x448164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_448168:
    // 0x448168: 0xc4c2d620  lwc1        $f2, -0x29E0($a2)
    ctx->pc = 0x448168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294956576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44816c:
    // 0x44816c: 0xc461d624  lwc1        $f1, -0x29DC($v1)
    ctx->pc = 0x44816cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_448170:
    // 0x448170: 0x460330c0  add.s       $f3, $f6, $f3
    ctx->pc = 0x448170u;
    ctx->f[3] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
label_448174:
    // 0x448174: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x448174u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_448178:
    // 0x448178: 0x460418c3  div.s       $f3, $f3, $f4
    ctx->pc = 0x448178u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[4];
label_44817c:
    // 0x44817c: 0xe4830068  swc1        $f3, 0x68($a0)
    ctx->pc = 0x44817cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
label_448180:
    // 0x448180: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x448180u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_448184:
    // 0x448184: 0x8cf0e3e0  lw          $s0, -0x1C20($a3)
    ctx->pc = 0x448184u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960096)));
label_448188:
    // 0x448188: 0xc440d628  lwc1        $f0, -0x29D8($v0)
    ctx->pc = 0x448188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44818c:
    // 0x44818c: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x44818cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_448190:
    // 0x448190: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x448190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_448194:
    // 0x448194: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x448194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_448198:
    // 0x448198: 0xc483002c  lwc1        $f3, 0x2C($a0)
    ctx->pc = 0x448198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_44819c:
    // 0x44819c: 0xc4820028  lwc1        $f2, 0x28($a0)
    ctx->pc = 0x44819cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4481a0:
    // 0x4481a0: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x4481a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4481a4:
    // 0x4481a4: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x4481a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4481a8:
    // 0x4481a8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4481a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4481ac:
    // 0x4481ac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4481acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4481b0:
    // 0x4481b0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4481b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4481b4:
    // 0x4481b4: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4481b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4481b8:
    // 0x4481b8: 0xc0a3830  jal         func_28E0C0
label_4481bc:
    if (ctx->pc == 0x4481BCu) {
        ctx->pc = 0x4481BCu;
            // 0x4481bc: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x4481C0u;
        goto label_4481c0;
    }
    ctx->pc = 0x4481B8u;
    SET_GPR_U32(ctx, 31, 0x4481C0u);
    ctx->pc = 0x4481BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4481B8u;
            // 0x4481bc: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4481C0u; }
        if (ctx->pc != 0x4481C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4481C0u; }
        if (ctx->pc != 0x4481C0u) { return; }
    }
    ctx->pc = 0x4481C0u;
label_4481c0:
    // 0x4481c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4481c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4481c4:
    // 0x4481c4: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x4481c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_4481c8:
    // 0x4481c8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4481c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4481cc:
    // 0x4481cc: 0xc0a7a88  jal         func_29EA20
label_4481d0:
    if (ctx->pc == 0x4481D0u) {
        ctx->pc = 0x4481D0u;
            // 0x4481d0: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x4481D4u;
        goto label_4481d4;
    }
    ctx->pc = 0x4481CCu;
    SET_GPR_U32(ctx, 31, 0x4481D4u);
    ctx->pc = 0x4481D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4481CCu;
            // 0x4481d0: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4481D4u; }
        if (ctx->pc != 0x4481D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4481D4u; }
        if (ctx->pc != 0x4481D4u) { return; }
    }
    ctx->pc = 0x4481D4u;
label_4481d4:
    // 0x4481d4: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x4481d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_4481d8:
    // 0x4481d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4481d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4481dc:
    // 0x4481dc: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4481e0:
    if (ctx->pc == 0x4481E0u) {
        ctx->pc = 0x4481E0u;
            // 0x4481e0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4481E4u;
        goto label_4481e4;
    }
    ctx->pc = 0x4481DCu;
    {
        const bool branch_taken_0x4481dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4481E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4481DCu;
            // 0x4481e0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4481dc) {
            ctx->pc = 0x448218u;
            goto label_448218;
        }
    }
    ctx->pc = 0x4481E4u;
label_4481e4:
    // 0x4481e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4481e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4481e8:
    // 0x4481e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4481e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4481ec:
    // 0x4481ec: 0x8c437538  lw          $v1, 0x7538($v0)
    ctx->pc = 0x4481ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30008)));
label_4481f0:
    // 0x4481f0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4481f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4481f4:
    // 0x4481f4: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x4481f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_4481f8:
    // 0x4481f8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4481f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_4481fc:
    // 0x4481fc: 0xc08afe0  jal         func_22BF80
label_448200:
    if (ctx->pc == 0x448200u) {
        ctx->pc = 0x448200u;
            // 0x448200: 0x34470020  ori         $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->pc = 0x448204u;
        goto label_448204;
    }
    ctx->pc = 0x4481FCu;
    SET_GPR_U32(ctx, 31, 0x448204u);
    ctx->pc = 0x448200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4481FCu;
            // 0x448200: 0x34470020  ori         $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448204u; }
        if (ctx->pc != 0x448204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448204u; }
        if (ctx->pc != 0x448204u) { return; }
    }
    ctx->pc = 0x448204u;
label_448204:
    // 0x448204: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x448204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_448208:
    // 0x448208: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x448208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_44820c:
    // 0x44820c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x44820cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_448210:
    // 0x448210: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x448210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
label_448214:
    // 0x448214: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x448214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_448218:
    // 0x448218: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x448218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_44821c:
    // 0x44821c: 0xc08c798  jal         func_231E60
label_448220:
    if (ctx->pc == 0x448220u) {
        ctx->pc = 0x448220u;
            // 0x448220: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x448224u;
        goto label_448224;
    }
    ctx->pc = 0x44821Cu;
    SET_GPR_U32(ctx, 31, 0x448224u);
    ctx->pc = 0x448220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44821Cu;
            // 0x448220: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448224u; }
        if (ctx->pc != 0x448224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448224u; }
        if (ctx->pc != 0x448224u) { return; }
    }
    ctx->pc = 0x448224u;
label_448224:
    // 0x448224: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x448224u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_448228:
    // 0x448228: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x448228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44822c:
    // 0x44822c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x44822cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_448230:
    // 0x448230: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x448230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_448234:
    // 0x448234: 0x8c42077c  lw          $v0, 0x77C($v0)
    ctx->pc = 0x448234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
label_448238:
    // 0x448238: 0xc11241c  jal         func_449070
label_44823c:
    if (ctx->pc == 0x44823Cu) {
        ctx->pc = 0x44823Cu;
            // 0x44823c: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x448240u;
        goto label_448240;
    }
    ctx->pc = 0x448238u;
    SET_GPR_U32(ctx, 31, 0x448240u);
    ctx->pc = 0x44823Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x448238u;
            // 0x44823c: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x449070u;
    if (runtime->hasFunction(0x449070u)) {
        auto targetFn = runtime->lookupFunction(0x449070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448240u; }
        if (ctx->pc != 0x448240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00449070_0x449070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x448240u; }
        if (ctx->pc != 0x448240u) { return; }
    }
    ctx->pc = 0x448240u;
label_448240:
    // 0x448240: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x448240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_448244:
    // 0x448244: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x448244u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_448248:
    // 0x448248: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x448248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44824c:
    // 0x44824c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44824cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_448250:
    // 0x448250: 0x3e00008  jr          $ra
label_448254:
    if (ctx->pc == 0x448254u) {
        ctx->pc = 0x448254u;
            // 0x448254: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x448258u;
        goto label_448258;
    }
    ctx->pc = 0x448250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x448254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x448250u;
            // 0x448254: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x448258u;
label_448258:
    // 0x448258: 0x0  nop
    ctx->pc = 0x448258u;
    // NOP
label_44825c:
    // 0x44825c: 0x0  nop
    ctx->pc = 0x44825cu;
    // NOP
}
