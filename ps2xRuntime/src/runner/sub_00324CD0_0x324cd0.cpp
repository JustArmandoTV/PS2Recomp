#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00324CD0
// Address: 0x324cd0 - 0x325d30
void sub_00324CD0_0x324cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324CD0_0x324cd0");
#endif

    switch (ctx->pc) {
        case 0x324d28u: goto label_324d28;
        case 0x324d30u: goto label_324d30;
        case 0x324d58u: goto label_324d58;
        case 0x324d80u: goto label_324d80;
        case 0x324da8u: goto label_324da8;
        case 0x324ddcu: goto label_324ddc;
        case 0x324df4u: goto label_324df4;
        case 0x324e04u: goto label_324e04;
        case 0x324e18u: goto label_324e18;
        case 0x324e34u: goto label_324e34;
        case 0x324e44u: goto label_324e44;
        case 0x324e60u: goto label_324e60;
        case 0x324e70u: goto label_324e70;
        case 0x324e94u: goto label_324e94;
        case 0x324ea4u: goto label_324ea4;
        case 0x324ebcu: goto label_324ebc;
        case 0x324ed4u: goto label_324ed4;
        case 0x324eecu: goto label_324eec;
        case 0x324efcu: goto label_324efc;
        case 0x324f10u: goto label_324f10;
        case 0x324f34u: goto label_324f34;
        case 0x324f58u: goto label_324f58;
        case 0x324f68u: goto label_324f68;
        case 0x324f7cu: goto label_324f7c;
        case 0x324f98u: goto label_324f98;
        case 0x324fa8u: goto label_324fa8;
        case 0x324fbcu: goto label_324fbc;
        case 0x324fd8u: goto label_324fd8;
        case 0x324fe8u: goto label_324fe8;
        case 0x324ffcu: goto label_324ffc;
        case 0x325018u: goto label_325018;
        case 0x325028u: goto label_325028;
        case 0x32503cu: goto label_32503c;
        case 0x325060u: goto label_325060;
        case 0x325084u: goto label_325084;
        case 0x325094u: goto label_325094;
        case 0x3250a8u: goto label_3250a8;
        case 0x3250c4u: goto label_3250c4;
        case 0x3250d4u: goto label_3250d4;
        case 0x3250e8u: goto label_3250e8;
        case 0x325104u: goto label_325104;
        case 0x325114u: goto label_325114;
        case 0x325128u: goto label_325128;
        case 0x325144u: goto label_325144;
        case 0x325154u: goto label_325154;
        case 0x325168u: goto label_325168;
        case 0x32518cu: goto label_32518c;
        case 0x3251bcu: goto label_3251bc;
        case 0x325204u: goto label_325204;
        case 0x325214u: goto label_325214;
        case 0x325228u: goto label_325228;
        case 0x325244u: goto label_325244;
        case 0x325254u: goto label_325254;
        case 0x325274u: goto label_325274;
        case 0x325294u: goto label_325294;
        case 0x3252b4u: goto label_3252b4;
        case 0x3252c4u: goto label_3252c4;
        case 0x3252d8u: goto label_3252d8;
        case 0x3252f4u: goto label_3252f4;
        case 0x325304u: goto label_325304;
        case 0x325318u: goto label_325318;
        case 0x32533cu: goto label_32533c;
        case 0x32534cu: goto label_32534c;
        case 0x325360u: goto label_325360;
        case 0x32537cu: goto label_32537c;
        case 0x32538cu: goto label_32538c;
        case 0x3253a0u: goto label_3253a0;
        case 0x3253bcu: goto label_3253bc;
        case 0x3253ccu: goto label_3253cc;
        case 0x3253e0u: goto label_3253e0;
        case 0x3253fcu: goto label_3253fc;
        case 0x32540cu: goto label_32540c;
        case 0x325420u: goto label_325420;
        case 0x32543cu: goto label_32543c;
        case 0x325454u: goto label_325454;
        case 0x325474u: goto label_325474;
        case 0x325484u: goto label_325484;
        case 0x325498u: goto label_325498;
        case 0x3254b4u: goto label_3254b4;
        case 0x3254c4u: goto label_3254c4;
        case 0x3254e4u: goto label_3254e4;
        case 0x325504u: goto label_325504;
        case 0x325524u: goto label_325524;
        case 0x325534u: goto label_325534;
        case 0x325548u: goto label_325548;
        case 0x325564u: goto label_325564;
        case 0x325574u: goto label_325574;
        case 0x325588u: goto label_325588;
        case 0x3255acu: goto label_3255ac;
        case 0x3255bcu: goto label_3255bc;
        case 0x3255d0u: goto label_3255d0;
        case 0x3255ecu: goto label_3255ec;
        case 0x3255fcu: goto label_3255fc;
        case 0x32561cu: goto label_32561c;
        case 0x32563cu: goto label_32563c;
        case 0x32565cu: goto label_32565c;
        case 0x32566cu: goto label_32566c;
        case 0x325680u: goto label_325680;
        case 0x32569cu: goto label_32569c;
        case 0x3256acu: goto label_3256ac;
        case 0x3256c0u: goto label_3256c0;
        case 0x3256dcu: goto label_3256dc;
        case 0x3256f4u: goto label_3256f4;
        case 0x325748u: goto label_325748;
        case 0x325758u: goto label_325758;
        case 0x325778u: goto label_325778;
        case 0x325794u: goto label_325794;
        case 0x3257b4u: goto label_3257b4;
        case 0x3257c4u: goto label_3257c4;
        case 0x3257d8u: goto label_3257d8;
        case 0x3257f4u: goto label_3257f4;
        case 0x325804u: goto label_325804;
        case 0x325818u: goto label_325818;
        case 0x325834u: goto label_325834;
        case 0x325844u: goto label_325844;
        case 0x325858u: goto label_325858;
        case 0x325878u: goto label_325878;
        case 0x325888u: goto label_325888;
        case 0x32589cu: goto label_32589c;
        case 0x3258b8u: goto label_3258b8;
        case 0x3258c8u: goto label_3258c8;
        case 0x3258dcu: goto label_3258dc;
        case 0x3258f8u: goto label_3258f8;
        case 0x325908u: goto label_325908;
        case 0x32591cu: goto label_32591c;
        case 0x325938u: goto label_325938;
        case 0x325948u: goto label_325948;
        case 0x32595cu: goto label_32595c;
        case 0x325980u: goto label_325980;
        case 0x325990u: goto label_325990;
        case 0x3259a4u: goto label_3259a4;
        case 0x3259c0u: goto label_3259c0;
        case 0x3259d0u: goto label_3259d0;
        case 0x3259e4u: goto label_3259e4;
        case 0x325a00u: goto label_325a00;
        case 0x325a10u: goto label_325a10;
        case 0x325a24u: goto label_325a24;
        case 0x325a40u: goto label_325a40;
        case 0x325a50u: goto label_325a50;
        case 0x325a70u: goto label_325a70;
        case 0x325a8cu: goto label_325a8c;
        case 0x325ab0u: goto label_325ab0;
        case 0x325ac0u: goto label_325ac0;
        case 0x325ad4u: goto label_325ad4;
        case 0x325af0u: goto label_325af0;
        case 0x325b00u: goto label_325b00;
        case 0x325b20u: goto label_325b20;
        case 0x325b3cu: goto label_325b3c;
        case 0x325b5cu: goto label_325b5c;
        case 0x325b6cu: goto label_325b6c;
        case 0x325b80u: goto label_325b80;
        case 0x325b9cu: goto label_325b9c;
        case 0x325bacu: goto label_325bac;
        case 0x325bc0u: goto label_325bc0;
        case 0x325be0u: goto label_325be0;
        case 0x325bf0u: goto label_325bf0;
        case 0x325c04u: goto label_325c04;
        case 0x325c20u: goto label_325c20;
        case 0x325c30u: goto label_325c30;
        case 0x325c50u: goto label_325c50;
        case 0x325c6cu: goto label_325c6c;
        case 0x325c8cu: goto label_325c8c;
        case 0x325c9cu: goto label_325c9c;
        case 0x325cb0u: goto label_325cb0;
        case 0x325cccu: goto label_325ccc;
        case 0x325cdcu: goto label_325cdc;
        case 0x325cf0u: goto label_325cf0;
        default: break;
    }

    ctx->pc = 0x324cd0u;

    // 0x324cd0: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x324cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
    // 0x324cd4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x324cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x324cd8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x324cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x324cdc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x324cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x324ce0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x324ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x324ce4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x324ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x324ce8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x324ce8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324cec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x324cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x324cf0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x324cf0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324cf4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x324cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x324cf8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x324cf8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324cfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x324cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x324d00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x324d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x324d04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x324d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x324d08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x324d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x324d0c: 0x8c430ec8  lw          $v1, 0xEC8($v0)
    ctx->pc = 0x324d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x324d10: 0x24900234  addiu       $s0, $a0, 0x234
    ctx->pc = 0x324d10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 564));
    // 0x324d14: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x324d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x324d18: 0x8c710008  lw          $s1, 0x8($v1)
    ctx->pc = 0x324d18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x324d1c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x324d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x324d20: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x324d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x324d24: 0x27a30210  addiu       $v1, $sp, 0x210
    ctx->pc = 0x324d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_324d28:
    // 0x324d28: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x324D28u;
    {
        const bool branch_taken_0x324d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x324D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324D28u;
            // 0x324d2c: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324d28) {
            ctx->pc = 0x324D4Cu;
            goto label_324d4c;
        }
    }
    ctx->pc = 0x324D30u;
label_324d30:
    // 0x324d30: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x324d30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x324d34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x324d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x324d38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x324d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x324d3c: 0x0  nop
    ctx->pc = 0x324d3cu;
    // NOP
    // 0x324d40: 0x0  nop
    ctx->pc = 0x324d40u;
    // NOP
    // 0x324d44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x324D44u;
    {
        const bool branch_taken_0x324d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324d44) {
            ctx->pc = 0x324D30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_324d30;
        }
    }
    ctx->pc = 0x324D4Cu;
label_324d4c:
    // 0x324d4c: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x324d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x324d50: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x324D50u;
    {
        const bool branch_taken_0x324d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x324D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324D50u;
            // 0x324d54: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324d50) {
            ctx->pc = 0x324D74u;
            goto label_324d74;
        }
    }
    ctx->pc = 0x324D58u;
label_324d58:
    // 0x324d58: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x324d58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x324d5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x324d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x324d60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x324d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x324d64: 0x0  nop
    ctx->pc = 0x324d64u;
    // NOP
    // 0x324d68: 0x0  nop
    ctx->pc = 0x324d68u;
    // NOP
    // 0x324d6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x324D6Cu;
    {
        const bool branch_taken_0x324d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324d6c) {
            ctx->pc = 0x324D58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_324d58;
        }
    }
    ctx->pc = 0x324D74u;
label_324d74:
    // 0x324d74: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x324d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x324d78: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x324D78u;
    {
        const bool branch_taken_0x324d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x324D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324D78u;
            // 0x324d7c: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324d78) {
            ctx->pc = 0x324D9Cu;
            goto label_324d9c;
        }
    }
    ctx->pc = 0x324D80u;
label_324d80:
    // 0x324d80: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x324d80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x324d84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x324d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x324d88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x324d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x324d8c: 0x0  nop
    ctx->pc = 0x324d8cu;
    // NOP
    // 0x324d90: 0x0  nop
    ctx->pc = 0x324d90u;
    // NOP
    // 0x324d94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x324D94u;
    {
        const bool branch_taken_0x324d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324d94) {
            ctx->pc = 0x324D80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_324d80;
        }
    }
    ctx->pc = 0x324D9Cu;
label_324d9c:
    // 0x324d9c: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x324d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x324da0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x324DA0u;
    {
        const bool branch_taken_0x324da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x324DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324DA0u;
            // 0x324da4: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324da0) {
            ctx->pc = 0x324DC4u;
            goto label_324dc4;
        }
    }
    ctx->pc = 0x324DA8u;
label_324da8:
    // 0x324da8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x324da8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x324dac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x324dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x324db0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x324db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x324db4: 0x0  nop
    ctx->pc = 0x324db4u;
    // NOP
    // 0x324db8: 0x0  nop
    ctx->pc = 0x324db8u;
    // NOP
    // 0x324dbc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x324DBCu;
    {
        const bool branch_taken_0x324dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324dbc) {
            ctx->pc = 0x324DA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_324da8;
        }
    }
    ctx->pc = 0x324DC4u;
label_324dc4:
    // 0x324dc4: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x324dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x324dc8: 0x26a70001  addiu       $a3, $s5, 0x1
    ctx->pc = 0x324dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x324dcc: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x324dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x324dd0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x324dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x324dd4: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x324DD4u;
    SET_GPR_U32(ctx, 31, 0x324DDCu);
    ctx->pc = 0x324DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324DD4u;
            // 0x324dd8: 0x24c6cae0  addiu       $a2, $a2, -0x3520 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324DDCu; }
        if (ctx->pc != 0x324DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324DDCu; }
        if (ctx->pc != 0x324DDCu) { return; }
    }
    ctx->pc = 0x324DDCu;
label_324ddc:
    // 0x324ddc: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x324ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x324de0: 0x26a70001  addiu       $a3, $s5, 0x1
    ctx->pc = 0x324de0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x324de4: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x324de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x324de8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x324de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x324dec: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x324DECu;
    SET_GPR_U32(ctx, 31, 0x324DF4u);
    ctx->pc = 0x324DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324DECu;
            // 0x324df0: 0x24c6caf0  addiu       $a2, $a2, -0x3510 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324DF4u; }
        if (ctx->pc != 0x324DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324DF4u; }
        if (ctx->pc != 0x324DF4u) { return; }
    }
    ctx->pc = 0x324DF4u;
label_324df4:
    // 0x324df4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x324df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x324df8: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x324df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x324dfc: 0xc123944  jal         func_48E510
    ctx->pc = 0x324DFCu;
    SET_GPR_U32(ctx, 31, 0x324E04u);
    ctx->pc = 0x324E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324DFCu;
            // 0x324e00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324E04u; }
        if (ctx->pc != 0x324E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324E04u; }
        if (ctx->pc != 0x324E04u) { return; }
    }
    ctx->pc = 0x324E04u;
label_324e04:
    // 0x324e04: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x324e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x324e08: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x324e08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324e0c: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x324e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x324e10: 0xc123944  jal         func_48E510
    ctx->pc = 0x324E10u;
    SET_GPR_U32(ctx, 31, 0x324E18u);
    ctx->pc = 0x324E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324E10u;
            // 0x324e14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324E18u; }
        if (ctx->pc != 0x324E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324E18u; }
        if (ctx->pc != 0x324E18u) { return; }
    }
    ctx->pc = 0x324E18u;
label_324e18:
    // 0x324e18: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x324e18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x324e1c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x324e1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324e20: 0x26a70001  addiu       $a3, $s5, 0x1
    ctx->pc = 0x324e20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x324e24: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x324e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x324e28: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x324e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x324e2c: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x324E2Cu;
    SET_GPR_U32(ctx, 31, 0x324E34u);
    ctx->pc = 0x324E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324E2Cu;
            // 0x324e30: 0x24c6caf8  addiu       $a2, $a2, -0x3508 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324E34u; }
        if (ctx->pc != 0x324E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324E34u; }
        if (ctx->pc != 0x324E34u) { return; }
    }
    ctx->pc = 0x324E34u;
label_324e34:
    // 0x324e34: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x324e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x324e38: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x324e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x324e3c: 0xc123944  jal         func_48E510
    ctx->pc = 0x324E3Cu;
    SET_GPR_U32(ctx, 31, 0x324E44u);
    ctx->pc = 0x324E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324E3Cu;
            // 0x324e40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324E44u; }
        if (ctx->pc != 0x324E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324E44u; }
        if (ctx->pc != 0x324E44u) { return; }
    }
    ctx->pc = 0x324E44u;
label_324e44:
    // 0x324e44: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x324e44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x324e48: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x324e48u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324e4c: 0x26a70001  addiu       $a3, $s5, 0x1
    ctx->pc = 0x324e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x324e50: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x324e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x324e54: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x324e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x324e58: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x324E58u;
    SET_GPR_U32(ctx, 31, 0x324E60u);
    ctx->pc = 0x324E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324E58u;
            // 0x324e5c: 0x24c6cb08  addiu       $a2, $a2, -0x34F8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324E60u; }
        if (ctx->pc != 0x324E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324E60u; }
        if (ctx->pc != 0x324E60u) { return; }
    }
    ctx->pc = 0x324E60u;
label_324e60:
    // 0x324e60: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x324e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x324e64: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x324e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x324e68: 0xc123944  jal         func_48E510
    ctx->pc = 0x324E68u;
    SET_GPR_U32(ctx, 31, 0x324E70u);
    ctx->pc = 0x324E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324E68u;
            // 0x324e6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324E70u; }
        if (ctx->pc != 0x324E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324E70u; }
        if (ctx->pc != 0x324E70u) { return; }
    }
    ctx->pc = 0x324E70u;
label_324e70:
    // 0x324e70: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x324e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x324e74: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x324e74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x324e78: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x324e78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x324e7c: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x324e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x324e80: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x324e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x324e84: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x324e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x324e88: 0x24c6cb18  addiu       $a2, $a2, -0x34E8
    ctx->pc = 0x324e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953752));
    // 0x324e8c: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x324E8Cu;
    SET_GPR_U32(ctx, 31, 0x324E94u);
    ctx->pc = 0x324E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324E8Cu;
            // 0x324e90: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324E94u; }
        if (ctx->pc != 0x324E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324E94u; }
        if (ctx->pc != 0x324E94u) { return; }
    }
    ctx->pc = 0x324E94u;
label_324e94:
    // 0x324e94: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x324e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x324e98: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x324e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x324e9c: 0xc123944  jal         func_48E510
    ctx->pc = 0x324E9Cu;
    SET_GPR_U32(ctx, 31, 0x324EA4u);
    ctx->pc = 0x324EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324E9Cu;
            // 0x324ea0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324EA4u; }
        if (ctx->pc != 0x324EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324EA4u; }
        if (ctx->pc != 0x324EA4u) { return; }
    }
    ctx->pc = 0x324EA4u;
label_324ea4:
    // 0x324ea4: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x324ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x324ea8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x324ea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324eac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x324eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324eb0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x324eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324eb4: 0xc123654  jal         func_48D950
    ctx->pc = 0x324EB4u;
    SET_GPR_U32(ctx, 31, 0x324EBCu);
    ctx->pc = 0x324EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324EB4u;
            // 0x324eb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324EBCu; }
        if (ctx->pc != 0x324EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324EBCu; }
        if (ctx->pc != 0x324EBCu) { return; }
    }
    ctx->pc = 0x324EBCu;
label_324ebc:
    // 0x324ebc: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x324ebcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x324ec0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x324ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324ec4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x324ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324ec8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x324ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x324ecc: 0xc123654  jal         func_48D950
    ctx->pc = 0x324ECCu;
    SET_GPR_U32(ctx, 31, 0x324ED4u);
    ctx->pc = 0x324ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324ECCu;
            // 0x324ed0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324ED4u; }
        if (ctx->pc != 0x324ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324ED4u; }
        if (ctx->pc != 0x324ED4u) { return; }
    }
    ctx->pc = 0x324ED4u;
label_324ed4:
    // 0x324ed4: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x324ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x324ed8: 0x26a70009  addiu       $a3, $s5, 0x9
    ctx->pc = 0x324ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x324edc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x324edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x324ee0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x324ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x324ee4: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x324EE4u;
    SET_GPR_U32(ctx, 31, 0x324EECu);
    ctx->pc = 0x324EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324EE4u;
            // 0x324ee8: 0x24c6cb28  addiu       $a2, $a2, -0x34D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324EECu; }
        if (ctx->pc != 0x324EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324EECu; }
        if (ctx->pc != 0x324EECu) { return; }
    }
    ctx->pc = 0x324EECu;
label_324eec:
    // 0x324eec: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x324eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x324ef0: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x324ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x324ef4: 0xc123944  jal         func_48E510
    ctx->pc = 0x324EF4u;
    SET_GPR_U32(ctx, 31, 0x324EFCu);
    ctx->pc = 0x324EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324EF4u;
            // 0x324ef8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324EFCu; }
        if (ctx->pc != 0x324EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324EFCu; }
        if (ctx->pc != 0x324EFCu) { return; }
    }
    ctx->pc = 0x324EFCu;
label_324efc:
    // 0x324efc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x324efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x324f00: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x324f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x324f04: 0x24a5cb38  addiu       $a1, $a1, -0x34C8
    ctx->pc = 0x324f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953784));
    // 0x324f08: 0xc123944  jal         func_48E510
    ctx->pc = 0x324F08u;
    SET_GPR_U32(ctx, 31, 0x324F10u);
    ctx->pc = 0x324F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324F08u;
            // 0x324f0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324F10u; }
        if (ctx->pc != 0x324F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324F10u; }
        if (ctx->pc != 0x324F10u) { return; }
    }
    ctx->pc = 0x324F10u;
label_324f10:
    // 0x324f10: 0x12c00097  beqz        $s6, . + 4 + (0x97 << 2)
    ctx->pc = 0x324F10u;
    {
        const bool branch_taken_0x324f10 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x324F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x324F10u;
            // 0x324f14: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324f10) {
            ctx->pc = 0x325170u;
            goto label_325170;
        }
    }
    ctx->pc = 0x324F18u;
    // 0x324f18: 0x16e0004b  bnez        $s7, . + 4 + (0x4B << 2)
    ctx->pc = 0x324F18u;
    {
        const bool branch_taken_0x324f18 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x324f18) {
            ctx->pc = 0x325048u;
            goto label_325048;
        }
    }
    ctx->pc = 0x324F20u;
    // 0x324f20: 0x16a00093  bnez        $s5, . + 4 + (0x93 << 2)
    ctx->pc = 0x324F20u;
    {
        const bool branch_taken_0x324f20 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x324f20) {
            ctx->pc = 0x325170u;
            goto label_325170;
        }
    }
    ctx->pc = 0x324F28u;
    // 0x324f28: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x324f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x324f2c: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x324F2Cu;
    SET_GPR_U32(ctx, 31, 0x324F34u);
    ctx->pc = 0x324F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324F2Cu;
            // 0x324f30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324F34u; }
        if (ctx->pc != 0x324F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324F34u; }
        if (ctx->pc != 0x324F34u) { return; }
    }
    ctx->pc = 0x324F34u;
label_324f34:
    // 0x324f34: 0x1440008e  bnez        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x324F34u;
    {
        const bool branch_taken_0x324f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324f34) {
            ctx->pc = 0x325170u;
            goto label_325170;
        }
    }
    ctx->pc = 0x324F3Cu;
    // 0x324f3c: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x324f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x324f40: 0x26a70009  addiu       $a3, $s5, 0x9
    ctx->pc = 0x324f40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x324f44: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x324f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x324f48: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x324f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x324f4c: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x324f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x324f50: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x324F50u;
    SET_GPR_U32(ctx, 31, 0x324F58u);
    ctx->pc = 0x324F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324F50u;
            // 0x324f54: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324F58u; }
        if (ctx->pc != 0x324F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324F58u; }
        if (ctx->pc != 0x324F58u) { return; }
    }
    ctx->pc = 0x324F58u;
label_324f58:
    // 0x324f58: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x324f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x324f5c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x324f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x324f60: 0xc123944  jal         func_48E510
    ctx->pc = 0x324F60u;
    SET_GPR_U32(ctx, 31, 0x324F68u);
    ctx->pc = 0x324F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324F60u;
            // 0x324f64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324F68u; }
        if (ctx->pc != 0x324F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324F68u; }
        if (ctx->pc != 0x324F68u) { return; }
    }
    ctx->pc = 0x324F68u;
label_324f68:
    // 0x324f68: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x324f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x324f6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x324f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324f70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x324f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324f74: 0xc123654  jal         func_48D950
    ctx->pc = 0x324F74u;
    SET_GPR_U32(ctx, 31, 0x324F7Cu);
    ctx->pc = 0x324F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324F74u;
            // 0x324f78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324F7Cu; }
        if (ctx->pc != 0x324F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324F7Cu; }
        if (ctx->pc != 0x324F7Cu) { return; }
    }
    ctx->pc = 0x324F7Cu;
label_324f7c:
    // 0x324f7c: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x324f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x324f80: 0x26a70009  addiu       $a3, $s5, 0x9
    ctx->pc = 0x324f80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x324f84: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x324f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x324f88: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x324f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x324f8c: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x324f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x324f90: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x324F90u;
    SET_GPR_U32(ctx, 31, 0x324F98u);
    ctx->pc = 0x324F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324F90u;
            // 0x324f94: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324F98u; }
        if (ctx->pc != 0x324F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324F98u; }
        if (ctx->pc != 0x324F98u) { return; }
    }
    ctx->pc = 0x324F98u;
label_324f98:
    // 0x324f98: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x324f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x324f9c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x324f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x324fa0: 0xc123944  jal         func_48E510
    ctx->pc = 0x324FA0u;
    SET_GPR_U32(ctx, 31, 0x324FA8u);
    ctx->pc = 0x324FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324FA0u;
            // 0x324fa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324FA8u; }
        if (ctx->pc != 0x324FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324FA8u; }
        if (ctx->pc != 0x324FA8u) { return; }
    }
    ctx->pc = 0x324FA8u;
label_324fa8:
    // 0x324fa8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x324fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x324fac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x324facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324fb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x324fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324fb4: 0xc123654  jal         func_48D950
    ctx->pc = 0x324FB4u;
    SET_GPR_U32(ctx, 31, 0x324FBCu);
    ctx->pc = 0x324FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324FB4u;
            // 0x324fb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324FBCu; }
        if (ctx->pc != 0x324FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324FBCu; }
        if (ctx->pc != 0x324FBCu) { return; }
    }
    ctx->pc = 0x324FBCu;
label_324fbc:
    // 0x324fbc: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x324fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x324fc0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x324fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x324fc4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x324fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x324fc8: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x324fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x324fcc: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x324fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x324fd0: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x324FD0u;
    SET_GPR_U32(ctx, 31, 0x324FD8u);
    ctx->pc = 0x324FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324FD0u;
            // 0x324fd4: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324FD8u; }
        if (ctx->pc != 0x324FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324FD8u; }
        if (ctx->pc != 0x324FD8u) { return; }
    }
    ctx->pc = 0x324FD8u;
label_324fd8:
    // 0x324fd8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x324fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x324fdc: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x324fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x324fe0: 0xc123944  jal         func_48E510
    ctx->pc = 0x324FE0u;
    SET_GPR_U32(ctx, 31, 0x324FE8u);
    ctx->pc = 0x324FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324FE0u;
            // 0x324fe4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324FE8u; }
        if (ctx->pc != 0x324FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324FE8u; }
        if (ctx->pc != 0x324FE8u) { return; }
    }
    ctx->pc = 0x324FE8u;
label_324fe8:
    // 0x324fe8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x324fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x324fec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x324fecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324ff0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x324ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324ff4: 0xc123654  jal         func_48D950
    ctx->pc = 0x324FF4u;
    SET_GPR_U32(ctx, 31, 0x324FFCu);
    ctx->pc = 0x324FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324FF4u;
            // 0x324ff8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324FFCu; }
        if (ctx->pc != 0x324FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x324FFCu; }
        if (ctx->pc != 0x324FFCu) { return; }
    }
    ctx->pc = 0x324FFCu;
label_324ffc:
    // 0x324ffc: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x324ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x325000: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x325000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325004: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x325004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x325008: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x325008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x32500c: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x32500cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x325010: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x325010u;
    SET_GPR_U32(ctx, 31, 0x325018u);
    ctx->pc = 0x325014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325010u;
            // 0x325014: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325018u; }
        if (ctx->pc != 0x325018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325018u; }
        if (ctx->pc != 0x325018u) { return; }
    }
    ctx->pc = 0x325018u;
label_325018:
    // 0x325018: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32501c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x32501cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325020: 0xc123944  jal         func_48E510
    ctx->pc = 0x325020u;
    SET_GPR_U32(ctx, 31, 0x325028u);
    ctx->pc = 0x325024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325020u;
            // 0x325024: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325028u; }
        if (ctx->pc != 0x325028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325028u; }
        if (ctx->pc != 0x325028u) { return; }
    }
    ctx->pc = 0x325028u;
label_325028:
    // 0x325028: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x32502c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32502cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325030: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x325030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325034: 0xc123654  jal         func_48D950
    ctx->pc = 0x325034u;
    SET_GPR_U32(ctx, 31, 0x32503Cu);
    ctx->pc = 0x325038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325034u;
            // 0x325038: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32503Cu; }
        if (ctx->pc != 0x32503Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32503Cu; }
        if (ctx->pc != 0x32503Cu) { return; }
    }
    ctx->pc = 0x32503Cu;
label_32503c:
    // 0x32503c: 0x1000032c  b           . + 4 + (0x32C << 2)
    ctx->pc = 0x32503Cu;
    {
        const bool branch_taken_0x32503c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32503c) {
            ctx->pc = 0x325CF0u;
            goto label_325cf0;
        }
    }
    ctx->pc = 0x325044u;
    // 0x325044: 0x0  nop
    ctx->pc = 0x325044u;
    // NOP
label_325048:
    // 0x325048: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x325048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32504c: 0x16a20048  bne         $s5, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x32504Cu;
    {
        const bool branch_taken_0x32504c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x32504c) {
            ctx->pc = 0x325170u;
            goto label_325170;
        }
    }
    ctx->pc = 0x325054u;
    // 0x325054: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x325054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x325058: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x325058u;
    SET_GPR_U32(ctx, 31, 0x325060u);
    ctx->pc = 0x32505Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325058u;
            // 0x32505c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325060u; }
        if (ctx->pc != 0x325060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325060u; }
        if (ctx->pc != 0x325060u) { return; }
    }
    ctx->pc = 0x325060u;
label_325060:
    // 0x325060: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x325060u;
    {
        const bool branch_taken_0x325060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325060) {
            ctx->pc = 0x325170u;
            goto label_325170;
        }
    }
    ctx->pc = 0x325068u;
    // 0x325068: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325068u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x32506c: 0x26a70009  addiu       $a3, $s5, 0x9
    ctx->pc = 0x32506cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x325070: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x325070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325074: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x325074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x325078: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x325078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x32507c: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x32507Cu;
    SET_GPR_U32(ctx, 31, 0x325084u);
    ctx->pc = 0x325080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32507Cu;
            // 0x325080: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325084u; }
        if (ctx->pc != 0x325084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325084u; }
        if (ctx->pc != 0x325084u) { return; }
    }
    ctx->pc = 0x325084u;
label_325084:
    // 0x325084: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325088: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x325088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x32508c: 0xc123944  jal         func_48E510
    ctx->pc = 0x32508Cu;
    SET_GPR_U32(ctx, 31, 0x325094u);
    ctx->pc = 0x325090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32508Cu;
            // 0x325090: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325094u; }
        if (ctx->pc != 0x325094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325094u; }
        if (ctx->pc != 0x325094u) { return; }
    }
    ctx->pc = 0x325094u;
label_325094:
    // 0x325094: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325098: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x325098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32509c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32509cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3250a0: 0xc123654  jal         func_48D950
    ctx->pc = 0x3250A0u;
    SET_GPR_U32(ctx, 31, 0x3250A8u);
    ctx->pc = 0x3250A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3250A0u;
            // 0x3250a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3250A8u; }
        if (ctx->pc != 0x3250A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3250A8u; }
        if (ctx->pc != 0x3250A8u) { return; }
    }
    ctx->pc = 0x3250A8u;
label_3250a8:
    // 0x3250a8: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x3250a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x3250ac: 0x26a70009  addiu       $a3, $s5, 0x9
    ctx->pc = 0x3250acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x3250b0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3250b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3250b4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3250b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3250b8: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x3250b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x3250bc: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x3250BCu;
    SET_GPR_U32(ctx, 31, 0x3250C4u);
    ctx->pc = 0x3250C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3250BCu;
            // 0x3250c0: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3250C4u; }
        if (ctx->pc != 0x3250C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3250C4u; }
        if (ctx->pc != 0x3250C4u) { return; }
    }
    ctx->pc = 0x3250C4u;
label_3250c4:
    // 0x3250c4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3250c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3250c8: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x3250c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3250cc: 0xc123944  jal         func_48E510
    ctx->pc = 0x3250CCu;
    SET_GPR_U32(ctx, 31, 0x3250D4u);
    ctx->pc = 0x3250D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3250CCu;
            // 0x3250d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3250D4u; }
        if (ctx->pc != 0x3250D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3250D4u; }
        if (ctx->pc != 0x3250D4u) { return; }
    }
    ctx->pc = 0x3250D4u;
label_3250d4:
    // 0x3250d4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3250d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3250d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3250d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3250dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3250dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3250e0: 0xc123654  jal         func_48D950
    ctx->pc = 0x3250E0u;
    SET_GPR_U32(ctx, 31, 0x3250E8u);
    ctx->pc = 0x3250E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3250E0u;
            // 0x3250e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3250E8u; }
        if (ctx->pc != 0x3250E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3250E8u; }
        if (ctx->pc != 0x3250E8u) { return; }
    }
    ctx->pc = 0x3250E8u;
label_3250e8:
    // 0x3250e8: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x3250e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x3250ec: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3250ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3250f0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3250f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3250f4: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x3250f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x3250f8: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x3250f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3250fc: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x3250FCu;
    SET_GPR_U32(ctx, 31, 0x325104u);
    ctx->pc = 0x325100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3250FCu;
            // 0x325100: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325104u; }
        if (ctx->pc != 0x325104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325104u; }
        if (ctx->pc != 0x325104u) { return; }
    }
    ctx->pc = 0x325104u;
label_325104:
    // 0x325104: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325108: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x325108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x32510c: 0xc123944  jal         func_48E510
    ctx->pc = 0x32510Cu;
    SET_GPR_U32(ctx, 31, 0x325114u);
    ctx->pc = 0x325110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32510Cu;
            // 0x325110: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325114u; }
        if (ctx->pc != 0x325114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325114u; }
        if (ctx->pc != 0x325114u) { return; }
    }
    ctx->pc = 0x325114u;
label_325114:
    // 0x325114: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325118: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x325118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32511c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32511cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325120: 0xc123654  jal         func_48D950
    ctx->pc = 0x325120u;
    SET_GPR_U32(ctx, 31, 0x325128u);
    ctx->pc = 0x325124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325120u;
            // 0x325124: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325128u; }
        if (ctx->pc != 0x325128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325128u; }
        if (ctx->pc != 0x325128u) { return; }
    }
    ctx->pc = 0x325128u;
label_325128:
    // 0x325128: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325128u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x32512c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x32512cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325130: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x325130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x325134: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x325134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x325138: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x325138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x32513c: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x32513Cu;
    SET_GPR_U32(ctx, 31, 0x325144u);
    ctx->pc = 0x325140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32513Cu;
            // 0x325140: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325144u; }
        if (ctx->pc != 0x325144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325144u; }
        if (ctx->pc != 0x325144u) { return; }
    }
    ctx->pc = 0x325144u;
label_325144:
    // 0x325144: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325148: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x325148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x32514c: 0xc123944  jal         func_48E510
    ctx->pc = 0x32514Cu;
    SET_GPR_U32(ctx, 31, 0x325154u);
    ctx->pc = 0x325150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32514Cu;
            // 0x325150: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325154u; }
        if (ctx->pc != 0x325154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325154u; }
        if (ctx->pc != 0x325154u) { return; }
    }
    ctx->pc = 0x325154u;
label_325154:
    // 0x325154: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325158: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32515c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32515cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325160: 0xc123654  jal         func_48D950
    ctx->pc = 0x325160u;
    SET_GPR_U32(ctx, 31, 0x325168u);
    ctx->pc = 0x325164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325160u;
            // 0x325164: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325168u; }
        if (ctx->pc != 0x325168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325168u; }
        if (ctx->pc != 0x325168u) { return; }
    }
    ctx->pc = 0x325168u;
label_325168:
    // 0x325168: 0x100002e1  b           . + 4 + (0x2E1 << 2)
    ctx->pc = 0x325168u;
    {
        const bool branch_taken_0x325168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325168) {
            ctx->pc = 0x325CF0u;
            goto label_325cf0;
        }
    }
    ctx->pc = 0x325170u;
label_325170:
    // 0x325170: 0x16e00155  bnez        $s7, . + 4 + (0x155 << 2)
    ctx->pc = 0x325170u;
    {
        const bool branch_taken_0x325170 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x325170) {
            ctx->pc = 0x3256C8u;
            goto label_3256c8;
        }
    }
    ctx->pc = 0x325178u;
    // 0x325178: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x325178u;
    {
        const bool branch_taken_0x325178 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x325178) {
            ctx->pc = 0x325198u;
            goto label_325198;
        }
    }
    ctx->pc = 0x325180u;
    // 0x325180: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x325180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x325184: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x325184u;
    SET_GPR_U32(ctx, 31, 0x32518Cu);
    ctx->pc = 0x325188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325184u;
            // 0x325188: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32518Cu; }
        if (ctx->pc != 0x32518Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32518Cu; }
        if (ctx->pc != 0x32518Cu) { return; }
    }
    ctx->pc = 0x32518Cu;
label_32518c:
    // 0x32518c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x32518Cu;
    {
        const bool branch_taken_0x32518c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32518Cu;
            // 0x325190: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32518c) {
            ctx->pc = 0x3251C0u;
            goto label_3251c0;
        }
    }
    ctx->pc = 0x325194u;
    // 0x325194: 0x0  nop
    ctx->pc = 0x325194u;
    // NOP
label_325198:
    // 0x325198: 0x2aa10004  slti        $at, $s5, 0x4
    ctx->pc = 0x325198u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x32519c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x32519Cu;
    {
        const bool branch_taken_0x32519c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32519c) {
            ctx->pc = 0x3251B0u;
            goto label_3251b0;
        }
    }
    ctx->pc = 0x3251A4u;
    // 0x3251a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3251A4u;
    {
        const bool branch_taken_0x3251a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3251A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3251A4u;
            // 0x3251a8: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3251a4) {
            ctx->pc = 0x3251C0u;
            goto label_3251c0;
        }
    }
    ctx->pc = 0x3251ACu;
    // 0x3251ac: 0x0  nop
    ctx->pc = 0x3251acu;
    // NOP
label_3251b0:
    // 0x3251b0: 0x26a50001  addiu       $a1, $s5, 0x1
    ctx->pc = 0x3251b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3251b4: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x3251B4u;
    SET_GPR_U32(ctx, 31, 0x3251BCu);
    ctx->pc = 0x3251B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3251B4u;
            // 0x3251b8: 0x26240024  addiu       $a0, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3251BCu; }
        if (ctx->pc != 0x3251BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3251BCu; }
        if (ctx->pc != 0x3251BCu) { return; }
    }
    ctx->pc = 0x3251BCu;
label_3251bc:
    // 0x3251bc: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x3251bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3251c0:
    // 0x3251c0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3251c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3251c4: 0x12a20098  beq         $s5, $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x3251C4u;
    {
        const bool branch_taken_0x3251c4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x3251c4) {
            ctx->pc = 0x325428u;
            goto label_325428;
        }
    }
    ctx->pc = 0x3251CCu;
    // 0x3251cc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3251ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3251d0: 0x12a20053  beq         $s5, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x3251D0u;
    {
        const bool branch_taken_0x3251d0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x3251d0) {
            ctx->pc = 0x325320u;
            goto label_325320;
        }
    }
    ctx->pc = 0x3251D8u;
    // 0x3251d8: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x3251D8u;
    {
        const bool branch_taken_0x3251d8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x3251d8) {
            ctx->pc = 0x3251E8u;
            goto label_3251e8;
        }
    }
    ctx->pc = 0x3251E0u;
    // 0x3251e0: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x3251E0u;
    {
        const bool branch_taken_0x3251e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3251e0) {
            ctx->pc = 0x325590u;
            goto label_325590;
        }
    }
    ctx->pc = 0x3251E8u;
label_3251e8:
    // 0x3251e8: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x3251e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x3251ec: 0x26a70009  addiu       $a3, $s5, 0x9
    ctx->pc = 0x3251ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x3251f0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3251f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3251f4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3251f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3251f8: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x3251f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x3251fc: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x3251FCu;
    SET_GPR_U32(ctx, 31, 0x325204u);
    ctx->pc = 0x325200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3251FCu;
            // 0x325200: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325204u; }
        if (ctx->pc != 0x325204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325204u; }
        if (ctx->pc != 0x325204u) { return; }
    }
    ctx->pc = 0x325204u;
label_325204:
    // 0x325204: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325208: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x325208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x32520c: 0xc123944  jal         func_48E510
    ctx->pc = 0x32520Cu;
    SET_GPR_U32(ctx, 31, 0x325214u);
    ctx->pc = 0x325210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32520Cu;
            // 0x325210: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325214u; }
        if (ctx->pc != 0x325214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325214u; }
        if (ctx->pc != 0x325214u) { return; }
    }
    ctx->pc = 0x325214u;
label_325214:
    // 0x325214: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325218: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x325218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32521c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32521cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325220: 0xc123654  jal         func_48D950
    ctx->pc = 0x325220u;
    SET_GPR_U32(ctx, 31, 0x325228u);
    ctx->pc = 0x325224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325220u;
            // 0x325224: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325228u; }
        if (ctx->pc != 0x325228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325228u; }
        if (ctx->pc != 0x325228u) { return; }
    }
    ctx->pc = 0x325228u;
label_325228:
    // 0x325228: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325228u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x32522c: 0x26a70009  addiu       $a3, $s5, 0x9
    ctx->pc = 0x32522cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x325230: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x325230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325234: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x325234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x325238: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x325238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x32523c: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x32523Cu;
    SET_GPR_U32(ctx, 31, 0x325244u);
    ctx->pc = 0x325240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32523Cu;
            // 0x325240: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325244u; }
        if (ctx->pc != 0x325244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325244u; }
        if (ctx->pc != 0x325244u) { return; }
    }
    ctx->pc = 0x325244u;
label_325244:
    // 0x325244: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325248: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x325248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x32524c: 0xc123944  jal         func_48E510
    ctx->pc = 0x32524Cu;
    SET_GPR_U32(ctx, 31, 0x325254u);
    ctx->pc = 0x325250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32524Cu;
            // 0x325250: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325254u; }
        if (ctx->pc != 0x325254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325254u; }
        if (ctx->pc != 0x325254u) { return; }
    }
    ctx->pc = 0x325254u;
label_325254:
    // 0x325254: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x325254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x325258: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x325258u;
    {
        const bool branch_taken_0x325258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x325258) {
            ctx->pc = 0x325280u;
            goto label_325280;
        }
    }
    ctx->pc = 0x325260u;
    // 0x325260: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325264: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x325264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325268: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32526c: 0xc123654  jal         func_48D950
    ctx->pc = 0x32526Cu;
    SET_GPR_U32(ctx, 31, 0x325274u);
    ctx->pc = 0x325270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32526Cu;
            // 0x325270: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325274u; }
        if (ctx->pc != 0x325274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325274u; }
        if (ctx->pc != 0x325274u) { return; }
    }
    ctx->pc = 0x325274u;
label_325274:
    // 0x325274: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x325274u;
    {
        const bool branch_taken_0x325274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325274) {
            ctx->pc = 0x325298u;
            goto label_325298;
        }
    }
    ctx->pc = 0x32527Cu;
    // 0x32527c: 0x0  nop
    ctx->pc = 0x32527cu;
    // NOP
label_325280:
    // 0x325280: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325284: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x325284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325288: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32528c: 0xc123654  jal         func_48D950
    ctx->pc = 0x32528Cu;
    SET_GPR_U32(ctx, 31, 0x325294u);
    ctx->pc = 0x325290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32528Cu;
            // 0x325290: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325294u; }
        if (ctx->pc != 0x325294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325294u; }
        if (ctx->pc != 0x325294u) { return; }
    }
    ctx->pc = 0x325294u;
label_325294:
    // 0x325294: 0x0  nop
    ctx->pc = 0x325294u;
    // NOP
label_325298:
    // 0x325298: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325298u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x32529c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x32529cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3252a0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3252a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3252a4: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x3252a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x3252a8: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x3252a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3252ac: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x3252ACu;
    SET_GPR_U32(ctx, 31, 0x3252B4u);
    ctx->pc = 0x3252B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3252ACu;
            // 0x3252b0: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3252B4u; }
        if (ctx->pc != 0x3252B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3252B4u; }
        if (ctx->pc != 0x3252B4u) { return; }
    }
    ctx->pc = 0x3252B4u;
label_3252b4:
    // 0x3252b4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3252b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3252b8: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x3252b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3252bc: 0xc123944  jal         func_48E510
    ctx->pc = 0x3252BCu;
    SET_GPR_U32(ctx, 31, 0x3252C4u);
    ctx->pc = 0x3252C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3252BCu;
            // 0x3252c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3252C4u; }
        if (ctx->pc != 0x3252C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3252C4u; }
        if (ctx->pc != 0x3252C4u) { return; }
    }
    ctx->pc = 0x3252C4u;
label_3252c4:
    // 0x3252c4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3252c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3252c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3252c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3252cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3252ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3252d0: 0xc123654  jal         func_48D950
    ctx->pc = 0x3252D0u;
    SET_GPR_U32(ctx, 31, 0x3252D8u);
    ctx->pc = 0x3252D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3252D0u;
            // 0x3252d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3252D8u; }
        if (ctx->pc != 0x3252D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3252D8u; }
        if (ctx->pc != 0x3252D8u) { return; }
    }
    ctx->pc = 0x3252D8u;
label_3252d8:
    // 0x3252d8: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x3252d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x3252dc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3252dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3252e0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3252e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3252e4: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x3252e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x3252e8: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x3252e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3252ec: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x3252ECu;
    SET_GPR_U32(ctx, 31, 0x3252F4u);
    ctx->pc = 0x3252F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3252ECu;
            // 0x3252f0: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3252F4u; }
        if (ctx->pc != 0x3252F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3252F4u; }
        if (ctx->pc != 0x3252F4u) { return; }
    }
    ctx->pc = 0x3252F4u;
label_3252f4:
    // 0x3252f4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3252f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3252f8: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x3252f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3252fc: 0xc123944  jal         func_48E510
    ctx->pc = 0x3252FCu;
    SET_GPR_U32(ctx, 31, 0x325304u);
    ctx->pc = 0x325300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3252FCu;
            // 0x325300: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325304u; }
        if (ctx->pc != 0x325304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325304u; }
        if (ctx->pc != 0x325304u) { return; }
    }
    ctx->pc = 0x325304u;
label_325304:
    // 0x325304: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325308: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32530c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32530cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325310: 0xc123654  jal         func_48D950
    ctx->pc = 0x325310u;
    SET_GPR_U32(ctx, 31, 0x325318u);
    ctx->pc = 0x325314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325310u;
            // 0x325314: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325318u; }
        if (ctx->pc != 0x325318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325318u; }
        if (ctx->pc != 0x325318u) { return; }
    }
    ctx->pc = 0x325318u;
label_325318:
    // 0x325318: 0x10000275  b           . + 4 + (0x275 << 2)
    ctx->pc = 0x325318u;
    {
        const bool branch_taken_0x325318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325318) {
            ctx->pc = 0x325CF0u;
            goto label_325cf0;
        }
    }
    ctx->pc = 0x325320u;
label_325320:
    // 0x325320: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325320u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x325324: 0x26a70009  addiu       $a3, $s5, 0x9
    ctx->pc = 0x325324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x325328: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x325328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x32532c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x32532cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x325330: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x325330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x325334: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x325334u;
    SET_GPR_U32(ctx, 31, 0x32533Cu);
    ctx->pc = 0x325338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325334u;
            // 0x325338: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32533Cu; }
        if (ctx->pc != 0x32533Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32533Cu; }
        if (ctx->pc != 0x32533Cu) { return; }
    }
    ctx->pc = 0x32533Cu;
label_32533c:
    // 0x32533c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32533cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325340: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x325340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325344: 0xc123944  jal         func_48E510
    ctx->pc = 0x325344u;
    SET_GPR_U32(ctx, 31, 0x32534Cu);
    ctx->pc = 0x325348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325344u;
            // 0x325348: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32534Cu; }
        if (ctx->pc != 0x32534Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32534Cu; }
        if (ctx->pc != 0x32534Cu) { return; }
    }
    ctx->pc = 0x32534Cu;
label_32534c:
    // 0x32534c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x32534cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325350: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x325350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325354: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325358: 0xc123654  jal         func_48D950
    ctx->pc = 0x325358u;
    SET_GPR_U32(ctx, 31, 0x325360u);
    ctx->pc = 0x32535Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325358u;
            // 0x32535c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325360u; }
        if (ctx->pc != 0x325360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325360u; }
        if (ctx->pc != 0x325360u) { return; }
    }
    ctx->pc = 0x325360u;
label_325360:
    // 0x325360: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325360u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x325364: 0x26a70009  addiu       $a3, $s5, 0x9
    ctx->pc = 0x325364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x325368: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x325368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x32536c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x32536cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x325370: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x325370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x325374: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x325374u;
    SET_GPR_U32(ctx, 31, 0x32537Cu);
    ctx->pc = 0x325378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325374u;
            // 0x325378: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32537Cu; }
        if (ctx->pc != 0x32537Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32537Cu; }
        if (ctx->pc != 0x32537Cu) { return; }
    }
    ctx->pc = 0x32537Cu;
label_32537c:
    // 0x32537c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32537cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325380: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x325380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325384: 0xc123944  jal         func_48E510
    ctx->pc = 0x325384u;
    SET_GPR_U32(ctx, 31, 0x32538Cu);
    ctx->pc = 0x325388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325384u;
            // 0x325388: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32538Cu; }
        if (ctx->pc != 0x32538Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32538Cu; }
        if (ctx->pc != 0x32538Cu) { return; }
    }
    ctx->pc = 0x32538Cu;
label_32538c:
    // 0x32538c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x32538cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325390: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x325390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325394: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325398: 0xc123654  jal         func_48D950
    ctx->pc = 0x325398u;
    SET_GPR_U32(ctx, 31, 0x3253A0u);
    ctx->pc = 0x32539Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325398u;
            // 0x32539c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3253A0u; }
        if (ctx->pc != 0x3253A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3253A0u; }
        if (ctx->pc != 0x3253A0u) { return; }
    }
    ctx->pc = 0x3253A0u;
label_3253a0:
    // 0x3253a0: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x3253a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x3253a4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3253a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3253a8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3253a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3253ac: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x3253acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x3253b0: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x3253b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3253b4: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x3253B4u;
    SET_GPR_U32(ctx, 31, 0x3253BCu);
    ctx->pc = 0x3253B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3253B4u;
            // 0x3253b8: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3253BCu; }
        if (ctx->pc != 0x3253BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3253BCu; }
        if (ctx->pc != 0x3253BCu) { return; }
    }
    ctx->pc = 0x3253BCu;
label_3253bc:
    // 0x3253bc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3253bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3253c0: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x3253c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3253c4: 0xc123944  jal         func_48E510
    ctx->pc = 0x3253C4u;
    SET_GPR_U32(ctx, 31, 0x3253CCu);
    ctx->pc = 0x3253C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3253C4u;
            // 0x3253c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3253CCu; }
        if (ctx->pc != 0x3253CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3253CCu; }
        if (ctx->pc != 0x3253CCu) { return; }
    }
    ctx->pc = 0x3253CCu;
label_3253cc:
    // 0x3253cc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3253ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3253d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3253d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3253d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3253d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3253d8: 0xc123654  jal         func_48D950
    ctx->pc = 0x3253D8u;
    SET_GPR_U32(ctx, 31, 0x3253E0u);
    ctx->pc = 0x3253DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3253D8u;
            // 0x3253dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3253E0u; }
        if (ctx->pc != 0x3253E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3253E0u; }
        if (ctx->pc != 0x3253E0u) { return; }
    }
    ctx->pc = 0x3253E0u;
label_3253e0:
    // 0x3253e0: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x3253e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x3253e4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3253e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3253e8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3253e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3253ec: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x3253ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x3253f0: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x3253f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3253f4: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x3253F4u;
    SET_GPR_U32(ctx, 31, 0x3253FCu);
    ctx->pc = 0x3253F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3253F4u;
            // 0x3253f8: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3253FCu; }
        if (ctx->pc != 0x3253FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3253FCu; }
        if (ctx->pc != 0x3253FCu) { return; }
    }
    ctx->pc = 0x3253FCu;
label_3253fc:
    // 0x3253fc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3253fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325400: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x325400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325404: 0xc123944  jal         func_48E510
    ctx->pc = 0x325404u;
    SET_GPR_U32(ctx, 31, 0x32540Cu);
    ctx->pc = 0x325408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325404u;
            // 0x325408: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32540Cu; }
        if (ctx->pc != 0x32540Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32540Cu; }
        if (ctx->pc != 0x32540Cu) { return; }
    }
    ctx->pc = 0x32540Cu;
label_32540c:
    // 0x32540c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x32540cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325410: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325414: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x325414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325418: 0xc123654  jal         func_48D950
    ctx->pc = 0x325418u;
    SET_GPR_U32(ctx, 31, 0x325420u);
    ctx->pc = 0x32541Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325418u;
            // 0x32541c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325420u; }
        if (ctx->pc != 0x325420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325420u; }
        if (ctx->pc != 0x325420u) { return; }
    }
    ctx->pc = 0x325420u;
label_325420:
    // 0x325420: 0x10000233  b           . + 4 + (0x233 << 2)
    ctx->pc = 0x325420u;
    {
        const bool branch_taken_0x325420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325420) {
            ctx->pc = 0x325CF0u;
            goto label_325cf0;
        }
    }
    ctx->pc = 0x325428u;
label_325428:
    // 0x325428: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x325428u;
    {
        const bool branch_taken_0x325428 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x325428) {
            ctx->pc = 0x325448u;
            goto label_325448;
        }
    }
    ctx->pc = 0x325430u;
    // 0x325430: 0x26a50001  addiu       $a1, $s5, 0x1
    ctx->pc = 0x325430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x325434: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x325434u;
    SET_GPR_U32(ctx, 31, 0x32543Cu);
    ctx->pc = 0x325438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325434u;
            // 0x325438: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32543Cu; }
        if (ctx->pc != 0x32543Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32543Cu; }
        if (ctx->pc != 0x32543Cu) { return; }
    }
    ctx->pc = 0x32543Cu;
label_32543c:
    // 0x32543c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x32543Cu;
    {
        const bool branch_taken_0x32543c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32543Cu;
            // 0x325440: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32543c) {
            ctx->pc = 0x325458u;
            goto label_325458;
        }
    }
    ctx->pc = 0x325444u;
    // 0x325444: 0x0  nop
    ctx->pc = 0x325444u;
    // NOP
label_325448:
    // 0x325448: 0x26a50001  addiu       $a1, $s5, 0x1
    ctx->pc = 0x325448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x32544c: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x32544Cu;
    SET_GPR_U32(ctx, 31, 0x325454u);
    ctx->pc = 0x325450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32544Cu;
            // 0x325450: 0x26240024  addiu       $a0, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325454u; }
        if (ctx->pc != 0x325454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325454u; }
        if (ctx->pc != 0x325454u) { return; }
    }
    ctx->pc = 0x325454u;
label_325454:
    // 0x325454: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x325454u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_325458:
    // 0x325458: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325458u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x32545c: 0x26a70009  addiu       $a3, $s5, 0x9
    ctx->pc = 0x32545cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x325460: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x325460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325464: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x325464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x325468: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x325468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x32546c: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x32546Cu;
    SET_GPR_U32(ctx, 31, 0x325474u);
    ctx->pc = 0x325470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32546Cu;
            // 0x325470: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325474u; }
        if (ctx->pc != 0x325474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325474u; }
        if (ctx->pc != 0x325474u) { return; }
    }
    ctx->pc = 0x325474u;
label_325474:
    // 0x325474: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325478: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x325478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x32547c: 0xc123944  jal         func_48E510
    ctx->pc = 0x32547Cu;
    SET_GPR_U32(ctx, 31, 0x325484u);
    ctx->pc = 0x325480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32547Cu;
            // 0x325480: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325484u; }
        if (ctx->pc != 0x325484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325484u; }
        if (ctx->pc != 0x325484u) { return; }
    }
    ctx->pc = 0x325484u;
label_325484:
    // 0x325484: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325488: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32548c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x32548cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325490: 0xc123654  jal         func_48D950
    ctx->pc = 0x325490u;
    SET_GPR_U32(ctx, 31, 0x325498u);
    ctx->pc = 0x325494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325490u;
            // 0x325494: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325498u; }
        if (ctx->pc != 0x325498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325498u; }
        if (ctx->pc != 0x325498u) { return; }
    }
    ctx->pc = 0x325498u;
label_325498:
    // 0x325498: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325498u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x32549c: 0x26a70009  addiu       $a3, $s5, 0x9
    ctx->pc = 0x32549cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x3254a0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3254a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3254a4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3254a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3254a8: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x3254a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x3254ac: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x3254ACu;
    SET_GPR_U32(ctx, 31, 0x3254B4u);
    ctx->pc = 0x3254B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3254ACu;
            // 0x3254b0: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3254B4u; }
        if (ctx->pc != 0x3254B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3254B4u; }
        if (ctx->pc != 0x3254B4u) { return; }
    }
    ctx->pc = 0x3254B4u;
label_3254b4:
    // 0x3254b4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3254b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3254b8: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x3254b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3254bc: 0xc123944  jal         func_48E510
    ctx->pc = 0x3254BCu;
    SET_GPR_U32(ctx, 31, 0x3254C4u);
    ctx->pc = 0x3254C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3254BCu;
            // 0x3254c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3254C4u; }
        if (ctx->pc != 0x3254C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3254C4u; }
        if (ctx->pc != 0x3254C4u) { return; }
    }
    ctx->pc = 0x3254C4u;
label_3254c4:
    // 0x3254c4: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x3254c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x3254c8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3254C8u;
    {
        const bool branch_taken_0x3254c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3254c8) {
            ctx->pc = 0x3254F0u;
            goto label_3254f0;
        }
    }
    ctx->pc = 0x3254D0u;
    // 0x3254d0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3254d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3254d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3254d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3254d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3254d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3254dc: 0xc123654  jal         func_48D950
    ctx->pc = 0x3254DCu;
    SET_GPR_U32(ctx, 31, 0x3254E4u);
    ctx->pc = 0x3254E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3254DCu;
            // 0x3254e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3254E4u; }
        if (ctx->pc != 0x3254E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3254E4u; }
        if (ctx->pc != 0x3254E4u) { return; }
    }
    ctx->pc = 0x3254E4u;
label_3254e4:
    // 0x3254e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3254E4u;
    {
        const bool branch_taken_0x3254e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3254e4) {
            ctx->pc = 0x325508u;
            goto label_325508;
        }
    }
    ctx->pc = 0x3254ECu;
    // 0x3254ec: 0x0  nop
    ctx->pc = 0x3254ecu;
    // NOP
label_3254f0:
    // 0x3254f0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3254f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3254f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3254f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3254f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3254f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3254fc: 0xc123654  jal         func_48D950
    ctx->pc = 0x3254FCu;
    SET_GPR_U32(ctx, 31, 0x325504u);
    ctx->pc = 0x325500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3254FCu;
            // 0x325500: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325504u; }
        if (ctx->pc != 0x325504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325504u; }
        if (ctx->pc != 0x325504u) { return; }
    }
    ctx->pc = 0x325504u;
label_325504:
    // 0x325504: 0x0  nop
    ctx->pc = 0x325504u;
    // NOP
label_325508:
    // 0x325508: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325508u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x32550c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x32550cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325510: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x325510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x325514: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x325514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x325518: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x325518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x32551c: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x32551Cu;
    SET_GPR_U32(ctx, 31, 0x325524u);
    ctx->pc = 0x325520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32551Cu;
            // 0x325520: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325524u; }
        if (ctx->pc != 0x325524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325524u; }
        if (ctx->pc != 0x325524u) { return; }
    }
    ctx->pc = 0x325524u;
label_325524:
    // 0x325524: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325528: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x325528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x32552c: 0xc123944  jal         func_48E510
    ctx->pc = 0x32552Cu;
    SET_GPR_U32(ctx, 31, 0x325534u);
    ctx->pc = 0x325530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32552Cu;
            // 0x325530: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325534u; }
        if (ctx->pc != 0x325534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325534u; }
        if (ctx->pc != 0x325534u) { return; }
    }
    ctx->pc = 0x325534u;
label_325534:
    // 0x325534: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325538: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x325538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32553c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32553cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325540: 0xc123654  jal         func_48D950
    ctx->pc = 0x325540u;
    SET_GPR_U32(ctx, 31, 0x325548u);
    ctx->pc = 0x325544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325540u;
            // 0x325544: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325548u; }
        if (ctx->pc != 0x325548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325548u; }
        if (ctx->pc != 0x325548u) { return; }
    }
    ctx->pc = 0x325548u;
label_325548:
    // 0x325548: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325548u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x32554c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x32554cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325550: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x325550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x325554: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x325554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x325558: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x325558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x32555c: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x32555Cu;
    SET_GPR_U32(ctx, 31, 0x325564u);
    ctx->pc = 0x325560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32555Cu;
            // 0x325560: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325564u; }
        if (ctx->pc != 0x325564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325564u; }
        if (ctx->pc != 0x325564u) { return; }
    }
    ctx->pc = 0x325564u;
label_325564:
    // 0x325564: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325568: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x325568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x32556c: 0xc123944  jal         func_48E510
    ctx->pc = 0x32556Cu;
    SET_GPR_U32(ctx, 31, 0x325574u);
    ctx->pc = 0x325570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32556Cu;
            // 0x325570: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325574u; }
        if (ctx->pc != 0x325574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325574u; }
        if (ctx->pc != 0x325574u) { return; }
    }
    ctx->pc = 0x325574u;
label_325574:
    // 0x325574: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325578: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32557c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32557cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325580: 0xc123654  jal         func_48D950
    ctx->pc = 0x325580u;
    SET_GPR_U32(ctx, 31, 0x325588u);
    ctx->pc = 0x325584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325580u;
            // 0x325584: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325588u; }
        if (ctx->pc != 0x325588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325588u; }
        if (ctx->pc != 0x325588u) { return; }
    }
    ctx->pc = 0x325588u;
label_325588:
    // 0x325588: 0x100001d9  b           . + 4 + (0x1D9 << 2)
    ctx->pc = 0x325588u;
    {
        const bool branch_taken_0x325588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325588) {
            ctx->pc = 0x325CF0u;
            goto label_325cf0;
        }
    }
    ctx->pc = 0x325590u;
label_325590:
    // 0x325590: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325590u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x325594: 0x26a70009  addiu       $a3, $s5, 0x9
    ctx->pc = 0x325594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x325598: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x325598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x32559c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x32559cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3255a0: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x3255a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x3255a4: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x3255A4u;
    SET_GPR_U32(ctx, 31, 0x3255ACu);
    ctx->pc = 0x3255A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3255A4u;
            // 0x3255a8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3255ACu; }
        if (ctx->pc != 0x3255ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3255ACu; }
        if (ctx->pc != 0x3255ACu) { return; }
    }
    ctx->pc = 0x3255ACu;
label_3255ac:
    // 0x3255ac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3255acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3255b0: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x3255b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3255b4: 0xc123944  jal         func_48E510
    ctx->pc = 0x3255B4u;
    SET_GPR_U32(ctx, 31, 0x3255BCu);
    ctx->pc = 0x3255B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3255B4u;
            // 0x3255b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3255BCu; }
        if (ctx->pc != 0x3255BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3255BCu; }
        if (ctx->pc != 0x3255BCu) { return; }
    }
    ctx->pc = 0x3255BCu;
label_3255bc:
    // 0x3255bc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3255bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3255c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3255c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3255c4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3255c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3255c8: 0xc123654  jal         func_48D950
    ctx->pc = 0x3255C8u;
    SET_GPR_U32(ctx, 31, 0x3255D0u);
    ctx->pc = 0x3255CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3255C8u;
            // 0x3255cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3255D0u; }
        if (ctx->pc != 0x3255D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3255D0u; }
        if (ctx->pc != 0x3255D0u) { return; }
    }
    ctx->pc = 0x3255D0u;
label_3255d0:
    // 0x3255d0: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x3255d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x3255d4: 0x26a70009  addiu       $a3, $s5, 0x9
    ctx->pc = 0x3255d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x3255d8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3255d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3255dc: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3255dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3255e0: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x3255e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x3255e4: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x3255E4u;
    SET_GPR_U32(ctx, 31, 0x3255ECu);
    ctx->pc = 0x3255E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3255E4u;
            // 0x3255e8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3255ECu; }
        if (ctx->pc != 0x3255ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3255ECu; }
        if (ctx->pc != 0x3255ECu) { return; }
    }
    ctx->pc = 0x3255ECu;
label_3255ec:
    // 0x3255ec: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3255ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3255f0: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x3255f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3255f4: 0xc123944  jal         func_48E510
    ctx->pc = 0x3255F4u;
    SET_GPR_U32(ctx, 31, 0x3255FCu);
    ctx->pc = 0x3255F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3255F4u;
            // 0x3255f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3255FCu; }
        if (ctx->pc != 0x3255FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3255FCu; }
        if (ctx->pc != 0x3255FCu) { return; }
    }
    ctx->pc = 0x3255FCu;
label_3255fc:
    // 0x3255fc: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x3255fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x325600: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x325600u;
    {
        const bool branch_taken_0x325600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x325600) {
            ctx->pc = 0x325628u;
            goto label_325628;
        }
    }
    ctx->pc = 0x325608u;
    // 0x325608: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x32560c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32560cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325610: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325614: 0xc123654  jal         func_48D950
    ctx->pc = 0x325614u;
    SET_GPR_U32(ctx, 31, 0x32561Cu);
    ctx->pc = 0x325618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325614u;
            // 0x325618: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32561Cu; }
        if (ctx->pc != 0x32561Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32561Cu; }
        if (ctx->pc != 0x32561Cu) { return; }
    }
    ctx->pc = 0x32561Cu;
label_32561c:
    // 0x32561c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32561Cu;
    {
        const bool branch_taken_0x32561c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32561c) {
            ctx->pc = 0x325640u;
            goto label_325640;
        }
    }
    ctx->pc = 0x325624u;
    // 0x325624: 0x0  nop
    ctx->pc = 0x325624u;
    // NOP
label_325628:
    // 0x325628: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x32562c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x32562cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325630: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325634: 0xc123654  jal         func_48D950
    ctx->pc = 0x325634u;
    SET_GPR_U32(ctx, 31, 0x32563Cu);
    ctx->pc = 0x325638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325634u;
            // 0x325638: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32563Cu; }
        if (ctx->pc != 0x32563Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32563Cu; }
        if (ctx->pc != 0x32563Cu) { return; }
    }
    ctx->pc = 0x32563Cu;
label_32563c:
    // 0x32563c: 0x0  nop
    ctx->pc = 0x32563cu;
    // NOP
label_325640:
    // 0x325640: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325640u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x325644: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x325644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325648: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x325648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x32564c: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x32564cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x325650: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x325650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x325654: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x325654u;
    SET_GPR_U32(ctx, 31, 0x32565Cu);
    ctx->pc = 0x325658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325654u;
            // 0x325658: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32565Cu; }
        if (ctx->pc != 0x32565Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32565Cu; }
        if (ctx->pc != 0x32565Cu) { return; }
    }
    ctx->pc = 0x32565Cu;
label_32565c:
    // 0x32565c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32565cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325660: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x325660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325664: 0xc123944  jal         func_48E510
    ctx->pc = 0x325664u;
    SET_GPR_U32(ctx, 31, 0x32566Cu);
    ctx->pc = 0x325668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325664u;
            // 0x325668: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32566Cu; }
        if (ctx->pc != 0x32566Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32566Cu; }
        if (ctx->pc != 0x32566Cu) { return; }
    }
    ctx->pc = 0x32566Cu;
label_32566c:
    // 0x32566c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x32566cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325670: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x325670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325674: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325678: 0xc123654  jal         func_48D950
    ctx->pc = 0x325678u;
    SET_GPR_U32(ctx, 31, 0x325680u);
    ctx->pc = 0x32567Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325678u;
            // 0x32567c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325680u; }
        if (ctx->pc != 0x325680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325680u; }
        if (ctx->pc != 0x325680u) { return; }
    }
    ctx->pc = 0x325680u;
label_325680:
    // 0x325680: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325680u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x325684: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x325684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325688: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x325688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x32568c: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x32568cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x325690: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x325690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x325694: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x325694u;
    SET_GPR_U32(ctx, 31, 0x32569Cu);
    ctx->pc = 0x325698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325694u;
            // 0x325698: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32569Cu; }
        if (ctx->pc != 0x32569Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32569Cu; }
        if (ctx->pc != 0x32569Cu) { return; }
    }
    ctx->pc = 0x32569Cu;
label_32569c:
    // 0x32569c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32569cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3256a0: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x3256a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3256a4: 0xc123944  jal         func_48E510
    ctx->pc = 0x3256A4u;
    SET_GPR_U32(ctx, 31, 0x3256ACu);
    ctx->pc = 0x3256A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3256A4u;
            // 0x3256a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3256ACu; }
        if (ctx->pc != 0x3256ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3256ACu; }
        if (ctx->pc != 0x3256ACu) { return; }
    }
    ctx->pc = 0x3256ACu;
label_3256ac:
    // 0x3256ac: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3256acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3256b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3256b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3256b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3256b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3256b8: 0xc123654  jal         func_48D950
    ctx->pc = 0x3256B8u;
    SET_GPR_U32(ctx, 31, 0x3256C0u);
    ctx->pc = 0x3256BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3256B8u;
            // 0x3256bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3256C0u; }
        if (ctx->pc != 0x3256C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3256C0u; }
        if (ctx->pc != 0x3256C0u) { return; }
    }
    ctx->pc = 0x3256C0u;
label_3256c0:
    // 0x3256c0: 0x1000018b  b           . + 4 + (0x18B << 2)
    ctx->pc = 0x3256C0u;
    {
        const bool branch_taken_0x3256c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3256c0) {
            ctx->pc = 0x325CF0u;
            goto label_325cf0;
        }
    }
    ctx->pc = 0x3256C8u;
label_3256c8:
    // 0x3256c8: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x3256C8u;
    {
        const bool branch_taken_0x3256c8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x3256c8) {
            ctx->pc = 0x3256E8u;
            goto label_3256e8;
        }
    }
    ctx->pc = 0x3256D0u;
    // 0x3256d0: 0x26a50008  addiu       $a1, $s5, 0x8
    ctx->pc = 0x3256d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x3256d4: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x3256D4u;
    SET_GPR_U32(ctx, 31, 0x3256DCu);
    ctx->pc = 0x3256D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3256D4u;
            // 0x3256d8: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3256DCu; }
        if (ctx->pc != 0x3256DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3256DCu; }
        if (ctx->pc != 0x3256DCu) { return; }
    }
    ctx->pc = 0x3256DCu;
label_3256dc:
    // 0x3256dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3256DCu;
    {
        const bool branch_taken_0x3256dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3256E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3256DCu;
            // 0x3256e0: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3256dc) {
            ctx->pc = 0x3256F8u;
            goto label_3256f8;
        }
    }
    ctx->pc = 0x3256E4u;
    // 0x3256e4: 0x0  nop
    ctx->pc = 0x3256e4u;
    // NOP
label_3256e8:
    // 0x3256e8: 0x26a50008  addiu       $a1, $s5, 0x8
    ctx->pc = 0x3256e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x3256ec: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x3256ECu;
    SET_GPR_U32(ctx, 31, 0x3256F4u);
    ctx->pc = 0x3256F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3256ECu;
            // 0x3256f0: 0x26240024  addiu       $a0, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3256F4u; }
        if (ctx->pc != 0x3256F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3256F4u; }
        if (ctx->pc != 0x3256F4u) { return; }
    }
    ctx->pc = 0x3256F4u;
label_3256f4:
    // 0x3256f4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x3256f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3256f8:
    // 0x3256f8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3256f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3256fc: 0x12a800e6  beq         $s5, $t0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x3256FCu;
    {
        const bool branch_taken_0x3256fc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 8));
        if (branch_taken_0x3256fc) {
            ctx->pc = 0x325A98u;
            goto label_325a98;
        }
    }
    ctx->pc = 0x325704u;
    // 0x325704: 0x12a00098  beqz        $s5, . + 4 + (0x98 << 2)
    ctx->pc = 0x325704u;
    {
        const bool branch_taken_0x325704 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x325704) {
            ctx->pc = 0x325968u;
            goto label_325968;
        }
    }
    ctx->pc = 0x32570Cu;
    // 0x32570c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x32570cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x325710: 0x12a20053  beq         $s5, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x325710u;
    {
        const bool branch_taken_0x325710 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x325710) {
            ctx->pc = 0x325860u;
            goto label_325860;
        }
    }
    ctx->pc = 0x325718u;
    // 0x325718: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x325718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32571c: 0x12a20004  beq         $s5, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32571Cu;
    {
        const bool branch_taken_0x32571c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x32571c) {
            ctx->pc = 0x325730u;
            goto label_325730;
        }
    }
    ctx->pc = 0x325724u;
    // 0x325724: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x325724u;
    {
        const bool branch_taken_0x325724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325724) {
            ctx->pc = 0x325BC8u;
            goto label_325bc8;
        }
    }
    ctx->pc = 0x32572Cu;
    // 0x32572c: 0x0  nop
    ctx->pc = 0x32572cu;
    // NOP
label_325730:
    // 0x325730: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325730u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x325734: 0x26a70009  addiu       $a3, $s5, 0x9
    ctx->pc = 0x325734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x325738: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x325738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x32573c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x32573cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x325740: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x325740u;
    SET_GPR_U32(ctx, 31, 0x325748u);
    ctx->pc = 0x325744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325740u;
            // 0x325744: 0x24c6cb48  addiu       $a2, $a2, -0x34B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325748u; }
        if (ctx->pc != 0x325748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325748u; }
        if (ctx->pc != 0x325748u) { return; }
    }
    ctx->pc = 0x325748u;
label_325748:
    // 0x325748: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32574c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x32574cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325750: 0xc123944  jal         func_48E510
    ctx->pc = 0x325750u;
    SET_GPR_U32(ctx, 31, 0x325758u);
    ctx->pc = 0x325754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325750u;
            // 0x325754: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325758u; }
        if (ctx->pc != 0x325758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325758u; }
        if (ctx->pc != 0x325758u) { return; }
    }
    ctx->pc = 0x325758u;
label_325758:
    // 0x325758: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x325758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x32575c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x32575Cu;
    {
        const bool branch_taken_0x32575c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32575c) {
            ctx->pc = 0x325780u;
            goto label_325780;
        }
    }
    ctx->pc = 0x325764u;
    // 0x325764: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325768: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x325768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32576c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32576cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325770: 0xc123654  jal         func_48D950
    ctx->pc = 0x325770u;
    SET_GPR_U32(ctx, 31, 0x325778u);
    ctx->pc = 0x325774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325770u;
            // 0x325774: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325778u; }
        if (ctx->pc != 0x325778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325778u; }
        if (ctx->pc != 0x325778u) { return; }
    }
    ctx->pc = 0x325778u;
label_325778:
    // 0x325778: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x325778u;
    {
        const bool branch_taken_0x325778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325778) {
            ctx->pc = 0x325798u;
            goto label_325798;
        }
    }
    ctx->pc = 0x325780u;
label_325780:
    // 0x325780: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325784: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x325784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325788: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32578c: 0xc123654  jal         func_48D950
    ctx->pc = 0x32578Cu;
    SET_GPR_U32(ctx, 31, 0x325794u);
    ctx->pc = 0x325790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32578Cu;
            // 0x325790: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325794u; }
        if (ctx->pc != 0x325794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325794u; }
        if (ctx->pc != 0x325794u) { return; }
    }
    ctx->pc = 0x325794u;
label_325794:
    // 0x325794: 0x0  nop
    ctx->pc = 0x325794u;
    // NOP
label_325798:
    // 0x325798: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325798u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x32579c: 0x26a70009  addiu       $a3, $s5, 0x9
    ctx->pc = 0x32579cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x3257a0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3257a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3257a4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3257a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3257a8: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x3257a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x3257ac: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x3257ACu;
    SET_GPR_U32(ctx, 31, 0x3257B4u);
    ctx->pc = 0x3257B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3257ACu;
            // 0x3257b0: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3257B4u; }
        if (ctx->pc != 0x3257B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3257B4u; }
        if (ctx->pc != 0x3257B4u) { return; }
    }
    ctx->pc = 0x3257B4u;
label_3257b4:
    // 0x3257b4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3257b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3257b8: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x3257b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3257bc: 0xc123944  jal         func_48E510
    ctx->pc = 0x3257BCu;
    SET_GPR_U32(ctx, 31, 0x3257C4u);
    ctx->pc = 0x3257C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3257BCu;
            // 0x3257c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3257C4u; }
        if (ctx->pc != 0x3257C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3257C4u; }
        if (ctx->pc != 0x3257C4u) { return; }
    }
    ctx->pc = 0x3257C4u;
label_3257c4:
    // 0x3257c4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3257c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3257c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3257c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3257cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3257ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3257d0: 0xc123654  jal         func_48D950
    ctx->pc = 0x3257D0u;
    SET_GPR_U32(ctx, 31, 0x3257D8u);
    ctx->pc = 0x3257D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3257D0u;
            // 0x3257d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3257D8u; }
        if (ctx->pc != 0x3257D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3257D8u; }
        if (ctx->pc != 0x3257D8u) { return; }
    }
    ctx->pc = 0x3257D8u;
label_3257d8:
    // 0x3257d8: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x3257d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x3257dc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3257dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3257e0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3257e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3257e4: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x3257e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x3257e8: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x3257e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3257ec: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x3257ECu;
    SET_GPR_U32(ctx, 31, 0x3257F4u);
    ctx->pc = 0x3257F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3257ECu;
            // 0x3257f0: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3257F4u; }
        if (ctx->pc != 0x3257F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3257F4u; }
        if (ctx->pc != 0x3257F4u) { return; }
    }
    ctx->pc = 0x3257F4u;
label_3257f4:
    // 0x3257f4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3257f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3257f8: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x3257f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3257fc: 0xc123944  jal         func_48E510
    ctx->pc = 0x3257FCu;
    SET_GPR_U32(ctx, 31, 0x325804u);
    ctx->pc = 0x325800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3257FCu;
            // 0x325800: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325804u; }
        if (ctx->pc != 0x325804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325804u; }
        if (ctx->pc != 0x325804u) { return; }
    }
    ctx->pc = 0x325804u;
label_325804:
    // 0x325804: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325808: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x325808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32580c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32580cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325810: 0xc123654  jal         func_48D950
    ctx->pc = 0x325810u;
    SET_GPR_U32(ctx, 31, 0x325818u);
    ctx->pc = 0x325814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325810u;
            // 0x325814: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325818u; }
        if (ctx->pc != 0x325818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325818u; }
        if (ctx->pc != 0x325818u) { return; }
    }
    ctx->pc = 0x325818u;
label_325818:
    // 0x325818: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325818u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x32581c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x32581cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325820: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x325820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x325824: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x325824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x325828: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x325828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x32582c: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x32582Cu;
    SET_GPR_U32(ctx, 31, 0x325834u);
    ctx->pc = 0x325830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32582Cu;
            // 0x325830: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325834u; }
        if (ctx->pc != 0x325834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325834u; }
        if (ctx->pc != 0x325834u) { return; }
    }
    ctx->pc = 0x325834u;
label_325834:
    // 0x325834: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325838: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x325838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x32583c: 0xc123944  jal         func_48E510
    ctx->pc = 0x32583Cu;
    SET_GPR_U32(ctx, 31, 0x325844u);
    ctx->pc = 0x325840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32583Cu;
            // 0x325840: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325844u; }
        if (ctx->pc != 0x325844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325844u; }
        if (ctx->pc != 0x325844u) { return; }
    }
    ctx->pc = 0x325844u;
label_325844:
    // 0x325844: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325848: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32584c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32584cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325850: 0xc123654  jal         func_48D950
    ctx->pc = 0x325850u;
    SET_GPR_U32(ctx, 31, 0x325858u);
    ctx->pc = 0x325854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325850u;
            // 0x325854: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325858u; }
        if (ctx->pc != 0x325858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325858u; }
        if (ctx->pc != 0x325858u) { return; }
    }
    ctx->pc = 0x325858u;
label_325858:
    // 0x325858: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x325858u;
    {
        const bool branch_taken_0x325858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325858) {
            ctx->pc = 0x325CF0u;
            goto label_325cf0;
        }
    }
    ctx->pc = 0x325860u;
label_325860:
    // 0x325860: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325860u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x325864: 0x26a70009  addiu       $a3, $s5, 0x9
    ctx->pc = 0x325864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x325868: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x325868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x32586c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x32586cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x325870: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x325870u;
    SET_GPR_U32(ctx, 31, 0x325878u);
    ctx->pc = 0x325874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325870u;
            // 0x325874: 0x24c6cb48  addiu       $a2, $a2, -0x34B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325878u; }
        if (ctx->pc != 0x325878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325878u; }
        if (ctx->pc != 0x325878u) { return; }
    }
    ctx->pc = 0x325878u;
label_325878:
    // 0x325878: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32587c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x32587cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325880: 0xc123944  jal         func_48E510
    ctx->pc = 0x325880u;
    SET_GPR_U32(ctx, 31, 0x325888u);
    ctx->pc = 0x325884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325880u;
            // 0x325884: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325888u; }
        if (ctx->pc != 0x325888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325888u; }
        if (ctx->pc != 0x325888u) { return; }
    }
    ctx->pc = 0x325888u;
label_325888:
    // 0x325888: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x32588c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x32588cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325890: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325894: 0xc123654  jal         func_48D950
    ctx->pc = 0x325894u;
    SET_GPR_U32(ctx, 31, 0x32589Cu);
    ctx->pc = 0x325898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325894u;
            // 0x325898: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32589Cu; }
        if (ctx->pc != 0x32589Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32589Cu; }
        if (ctx->pc != 0x32589Cu) { return; }
    }
    ctx->pc = 0x32589Cu;
label_32589c:
    // 0x32589c: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x32589cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x3258a0: 0x26a70009  addiu       $a3, $s5, 0x9
    ctx->pc = 0x3258a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x3258a4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3258a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3258a8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3258a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3258ac: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x3258acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x3258b0: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x3258B0u;
    SET_GPR_U32(ctx, 31, 0x3258B8u);
    ctx->pc = 0x3258B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3258B0u;
            // 0x3258b4: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3258B8u; }
        if (ctx->pc != 0x3258B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3258B8u; }
        if (ctx->pc != 0x3258B8u) { return; }
    }
    ctx->pc = 0x3258B8u;
label_3258b8:
    // 0x3258b8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3258b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3258bc: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x3258bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3258c0: 0xc123944  jal         func_48E510
    ctx->pc = 0x3258C0u;
    SET_GPR_U32(ctx, 31, 0x3258C8u);
    ctx->pc = 0x3258C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3258C0u;
            // 0x3258c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3258C8u; }
        if (ctx->pc != 0x3258C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3258C8u; }
        if (ctx->pc != 0x3258C8u) { return; }
    }
    ctx->pc = 0x3258C8u;
label_3258c8:
    // 0x3258c8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3258c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3258cc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3258ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3258d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3258d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3258d4: 0xc123654  jal         func_48D950
    ctx->pc = 0x3258D4u;
    SET_GPR_U32(ctx, 31, 0x3258DCu);
    ctx->pc = 0x3258D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3258D4u;
            // 0x3258d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3258DCu; }
        if (ctx->pc != 0x3258DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3258DCu; }
        if (ctx->pc != 0x3258DCu) { return; }
    }
    ctx->pc = 0x3258DCu;
label_3258dc:
    // 0x3258dc: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x3258dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x3258e0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3258e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3258e4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3258e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3258e8: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x3258e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x3258ec: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x3258ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3258f0: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x3258F0u;
    SET_GPR_U32(ctx, 31, 0x3258F8u);
    ctx->pc = 0x3258F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3258F0u;
            // 0x3258f4: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3258F8u; }
        if (ctx->pc != 0x3258F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3258F8u; }
        if (ctx->pc != 0x3258F8u) { return; }
    }
    ctx->pc = 0x3258F8u;
label_3258f8:
    // 0x3258f8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3258f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3258fc: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x3258fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325900: 0xc123944  jal         func_48E510
    ctx->pc = 0x325900u;
    SET_GPR_U32(ctx, 31, 0x325908u);
    ctx->pc = 0x325904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325900u;
            // 0x325904: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325908u; }
        if (ctx->pc != 0x325908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325908u; }
        if (ctx->pc != 0x325908u) { return; }
    }
    ctx->pc = 0x325908u;
label_325908:
    // 0x325908: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x32590c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32590cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325910: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325914: 0xc123654  jal         func_48D950
    ctx->pc = 0x325914u;
    SET_GPR_U32(ctx, 31, 0x32591Cu);
    ctx->pc = 0x325918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325914u;
            // 0x325918: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32591Cu; }
        if (ctx->pc != 0x32591Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32591Cu; }
        if (ctx->pc != 0x32591Cu) { return; }
    }
    ctx->pc = 0x32591Cu;
label_32591c:
    // 0x32591c: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x32591cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x325920: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x325920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325924: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x325924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x325928: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x325928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x32592c: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x32592cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x325930: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x325930u;
    SET_GPR_U32(ctx, 31, 0x325938u);
    ctx->pc = 0x325934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325930u;
            // 0x325934: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325938u; }
        if (ctx->pc != 0x325938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325938u; }
        if (ctx->pc != 0x325938u) { return; }
    }
    ctx->pc = 0x325938u;
label_325938:
    // 0x325938: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32593c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x32593cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325940: 0xc123944  jal         func_48E510
    ctx->pc = 0x325940u;
    SET_GPR_U32(ctx, 31, 0x325948u);
    ctx->pc = 0x325944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325940u;
            // 0x325944: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325948u; }
        if (ctx->pc != 0x325948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325948u; }
        if (ctx->pc != 0x325948u) { return; }
    }
    ctx->pc = 0x325948u;
label_325948:
    // 0x325948: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x32594c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32594cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325950: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x325950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325954: 0xc123654  jal         func_48D950
    ctx->pc = 0x325954u;
    SET_GPR_U32(ctx, 31, 0x32595Cu);
    ctx->pc = 0x325958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325954u;
            // 0x325958: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32595Cu; }
        if (ctx->pc != 0x32595Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32595Cu; }
        if (ctx->pc != 0x32595Cu) { return; }
    }
    ctx->pc = 0x32595Cu;
label_32595c:
    // 0x32595c: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x32595Cu;
    {
        const bool branch_taken_0x32595c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32595c) {
            ctx->pc = 0x325CF0u;
            goto label_325cf0;
        }
    }
    ctx->pc = 0x325964u;
    // 0x325964: 0x0  nop
    ctx->pc = 0x325964u;
    // NOP
label_325968:
    // 0x325968: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325968u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x32596c: 0x26a70009  addiu       $a3, $s5, 0x9
    ctx->pc = 0x32596cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x325970: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x325970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325974: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x325974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x325978: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x325978u;
    SET_GPR_U32(ctx, 31, 0x325980u);
    ctx->pc = 0x32597Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325978u;
            // 0x32597c: 0x24c6cb48  addiu       $a2, $a2, -0x34B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325980u; }
        if (ctx->pc != 0x325980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325980u; }
        if (ctx->pc != 0x325980u) { return; }
    }
    ctx->pc = 0x325980u;
label_325980:
    // 0x325980: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325984: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x325984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325988: 0xc123944  jal         func_48E510
    ctx->pc = 0x325988u;
    SET_GPR_U32(ctx, 31, 0x325990u);
    ctx->pc = 0x32598Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325988u;
            // 0x32598c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325990u; }
        if (ctx->pc != 0x325990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325990u; }
        if (ctx->pc != 0x325990u) { return; }
    }
    ctx->pc = 0x325990u;
label_325990:
    // 0x325990: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325994: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x325994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325998: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32599c: 0xc123654  jal         func_48D950
    ctx->pc = 0x32599Cu;
    SET_GPR_U32(ctx, 31, 0x3259A4u);
    ctx->pc = 0x3259A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32599Cu;
            // 0x3259a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3259A4u; }
        if (ctx->pc != 0x3259A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3259A4u; }
        if (ctx->pc != 0x3259A4u) { return; }
    }
    ctx->pc = 0x3259A4u;
label_3259a4:
    // 0x3259a4: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x3259a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x3259a8: 0x26a70009  addiu       $a3, $s5, 0x9
    ctx->pc = 0x3259a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x3259ac: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3259acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3259b0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3259b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3259b4: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x3259b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x3259b8: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x3259B8u;
    SET_GPR_U32(ctx, 31, 0x3259C0u);
    ctx->pc = 0x3259BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3259B8u;
            // 0x3259bc: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3259C0u; }
        if (ctx->pc != 0x3259C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3259C0u; }
        if (ctx->pc != 0x3259C0u) { return; }
    }
    ctx->pc = 0x3259C0u;
label_3259c0:
    // 0x3259c0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3259c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3259c4: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x3259c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3259c8: 0xc123944  jal         func_48E510
    ctx->pc = 0x3259C8u;
    SET_GPR_U32(ctx, 31, 0x3259D0u);
    ctx->pc = 0x3259CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3259C8u;
            // 0x3259cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3259D0u; }
        if (ctx->pc != 0x3259D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3259D0u; }
        if (ctx->pc != 0x3259D0u) { return; }
    }
    ctx->pc = 0x3259D0u;
label_3259d0:
    // 0x3259d0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3259d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3259d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3259d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3259d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3259d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3259dc: 0xc123654  jal         func_48D950
    ctx->pc = 0x3259DCu;
    SET_GPR_U32(ctx, 31, 0x3259E4u);
    ctx->pc = 0x3259E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3259DCu;
            // 0x3259e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3259E4u; }
        if (ctx->pc != 0x3259E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3259E4u; }
        if (ctx->pc != 0x3259E4u) { return; }
    }
    ctx->pc = 0x3259E4u;
label_3259e4:
    // 0x3259e4: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x3259e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x3259e8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3259e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3259ec: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3259ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3259f0: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x3259f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x3259f4: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x3259f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3259f8: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x3259F8u;
    SET_GPR_U32(ctx, 31, 0x325A00u);
    ctx->pc = 0x3259FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3259F8u;
            // 0x3259fc: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325A00u; }
        if (ctx->pc != 0x325A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325A00u; }
        if (ctx->pc != 0x325A00u) { return; }
    }
    ctx->pc = 0x325A00u;
label_325a00:
    // 0x325a00: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325a04: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x325a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325a08: 0xc123944  jal         func_48E510
    ctx->pc = 0x325A08u;
    SET_GPR_U32(ctx, 31, 0x325A10u);
    ctx->pc = 0x325A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325A08u;
            // 0x325a0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325A10u; }
        if (ctx->pc != 0x325A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325A10u; }
        if (ctx->pc != 0x325A10u) { return; }
    }
    ctx->pc = 0x325A10u;
label_325a10:
    // 0x325a10: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325a14: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x325a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a1c: 0xc123654  jal         func_48D950
    ctx->pc = 0x325A1Cu;
    SET_GPR_U32(ctx, 31, 0x325A24u);
    ctx->pc = 0x325A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325A1Cu;
            // 0x325a20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325A24u; }
        if (ctx->pc != 0x325A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325A24u; }
        if (ctx->pc != 0x325A24u) { return; }
    }
    ctx->pc = 0x325A24u;
label_325a24:
    // 0x325a24: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325a24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x325a28: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x325a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325a2c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x325a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x325a30: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x325a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x325a34: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x325a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x325a38: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x325A38u;
    SET_GPR_U32(ctx, 31, 0x325A40u);
    ctx->pc = 0x325A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325A38u;
            // 0x325a3c: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325A40u; }
        if (ctx->pc != 0x325A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325A40u; }
        if (ctx->pc != 0x325A40u) { return; }
    }
    ctx->pc = 0x325A40u;
label_325a40:
    // 0x325a40: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325a44: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x325a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325a48: 0xc123944  jal         func_48E510
    ctx->pc = 0x325A48u;
    SET_GPR_U32(ctx, 31, 0x325A50u);
    ctx->pc = 0x325A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325A48u;
            // 0x325a4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325A50u; }
        if (ctx->pc != 0x325A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325A50u; }
        if (ctx->pc != 0x325A50u) { return; }
    }
    ctx->pc = 0x325A50u;
label_325a50:
    // 0x325a50: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x325a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x325a54: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x325A54u;
    {
        const bool branch_taken_0x325a54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x325a54) {
            ctx->pc = 0x325A78u;
            goto label_325a78;
        }
    }
    ctx->pc = 0x325A5Cu;
    // 0x325a5c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325a60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a64: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x325a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a68: 0xc123654  jal         func_48D950
    ctx->pc = 0x325A68u;
    SET_GPR_U32(ctx, 31, 0x325A70u);
    ctx->pc = 0x325A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325A68u;
            // 0x325a6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325A70u; }
        if (ctx->pc != 0x325A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325A70u; }
        if (ctx->pc != 0x325A70u) { return; }
    }
    ctx->pc = 0x325A70u;
label_325a70:
    // 0x325a70: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x325A70u;
    {
        const bool branch_taken_0x325a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325a70) {
            ctx->pc = 0x325CF0u;
            goto label_325cf0;
        }
    }
    ctx->pc = 0x325A78u;
label_325a78:
    // 0x325a78: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325a7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a80: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x325a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325a84: 0xc123654  jal         func_48D950
    ctx->pc = 0x325A84u;
    SET_GPR_U32(ctx, 31, 0x325A8Cu);
    ctx->pc = 0x325A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325A84u;
            // 0x325a88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325A8Cu; }
        if (ctx->pc != 0x325A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325A8Cu; }
        if (ctx->pc != 0x325A8Cu) { return; }
    }
    ctx->pc = 0x325A8Cu;
label_325a8c:
    // 0x325a8c: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x325A8Cu;
    {
        const bool branch_taken_0x325a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325a8c) {
            ctx->pc = 0x325CF0u;
            goto label_325cf0;
        }
    }
    ctx->pc = 0x325A94u;
    // 0x325a94: 0x0  nop
    ctx->pc = 0x325a94u;
    // NOP
label_325a98:
    // 0x325a98: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325a98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x325a9c: 0x26a70009  addiu       $a3, $s5, 0x9
    ctx->pc = 0x325a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x325aa0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x325aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325aa4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x325aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x325aa8: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x325AA8u;
    SET_GPR_U32(ctx, 31, 0x325AB0u);
    ctx->pc = 0x325AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325AA8u;
            // 0x325aac: 0x24c6cb48  addiu       $a2, $a2, -0x34B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325AB0u; }
        if (ctx->pc != 0x325AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325AB0u; }
        if (ctx->pc != 0x325AB0u) { return; }
    }
    ctx->pc = 0x325AB0u;
label_325ab0:
    // 0x325ab0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325ab4: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x325ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325ab8: 0xc123944  jal         func_48E510
    ctx->pc = 0x325AB8u;
    SET_GPR_U32(ctx, 31, 0x325AC0u);
    ctx->pc = 0x325ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325AB8u;
            // 0x325abc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325AC0u; }
        if (ctx->pc != 0x325AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325AC0u; }
        if (ctx->pc != 0x325AC0u) { return; }
    }
    ctx->pc = 0x325AC0u;
label_325ac0:
    // 0x325ac0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325ac4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x325ac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325ac8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325acc: 0xc123654  jal         func_48D950
    ctx->pc = 0x325ACCu;
    SET_GPR_U32(ctx, 31, 0x325AD4u);
    ctx->pc = 0x325AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325ACCu;
            // 0x325ad0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325AD4u; }
        if (ctx->pc != 0x325AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325AD4u; }
        if (ctx->pc != 0x325AD4u) { return; }
    }
    ctx->pc = 0x325AD4u;
label_325ad4:
    // 0x325ad4: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x325ad8: 0x26a70009  addiu       $a3, $s5, 0x9
    ctx->pc = 0x325ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x325adc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x325adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325ae0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x325ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x325ae4: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x325ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x325ae8: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x325AE8u;
    SET_GPR_U32(ctx, 31, 0x325AF0u);
    ctx->pc = 0x325AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325AE8u;
            // 0x325aec: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325AF0u; }
        if (ctx->pc != 0x325AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325AF0u; }
        if (ctx->pc != 0x325AF0u) { return; }
    }
    ctx->pc = 0x325AF0u;
label_325af0:
    // 0x325af0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325af4: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x325af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325af8: 0xc123944  jal         func_48E510
    ctx->pc = 0x325AF8u;
    SET_GPR_U32(ctx, 31, 0x325B00u);
    ctx->pc = 0x325AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325AF8u;
            // 0x325afc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325B00u; }
        if (ctx->pc != 0x325B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325B00u; }
        if (ctx->pc != 0x325B00u) { return; }
    }
    ctx->pc = 0x325B00u;
label_325b00:
    // 0x325b00: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x325b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x325b04: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x325B04u;
    {
        const bool branch_taken_0x325b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x325b04) {
            ctx->pc = 0x325B28u;
            goto label_325b28;
        }
    }
    ctx->pc = 0x325B0Cu;
    // 0x325b0c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325b10: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x325b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325b14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325b18: 0xc123654  jal         func_48D950
    ctx->pc = 0x325B18u;
    SET_GPR_U32(ctx, 31, 0x325B20u);
    ctx->pc = 0x325B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325B18u;
            // 0x325b1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325B20u; }
        if (ctx->pc != 0x325B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325B20u; }
        if (ctx->pc != 0x325B20u) { return; }
    }
    ctx->pc = 0x325B20u;
label_325b20:
    // 0x325b20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x325B20u;
    {
        const bool branch_taken_0x325b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325b20) {
            ctx->pc = 0x325B40u;
            goto label_325b40;
        }
    }
    ctx->pc = 0x325B28u;
label_325b28:
    // 0x325b28: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325b2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325b30: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x325b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325b34: 0xc123654  jal         func_48D950
    ctx->pc = 0x325B34u;
    SET_GPR_U32(ctx, 31, 0x325B3Cu);
    ctx->pc = 0x325B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325B34u;
            // 0x325b38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325B3Cu; }
        if (ctx->pc != 0x325B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325B3Cu; }
        if (ctx->pc != 0x325B3Cu) { return; }
    }
    ctx->pc = 0x325B3Cu;
label_325b3c:
    // 0x325b3c: 0x0  nop
    ctx->pc = 0x325b3cu;
    // NOP
label_325b40:
    // 0x325b40: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325b40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x325b44: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x325b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325b48: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x325b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x325b4c: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x325b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x325b50: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x325b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x325b54: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x325B54u;
    SET_GPR_U32(ctx, 31, 0x325B5Cu);
    ctx->pc = 0x325B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325B54u;
            // 0x325b58: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325B5Cu; }
        if (ctx->pc != 0x325B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325B5Cu; }
        if (ctx->pc != 0x325B5Cu) { return; }
    }
    ctx->pc = 0x325B5Cu;
label_325b5c:
    // 0x325b5c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325b60: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x325b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325b64: 0xc123944  jal         func_48E510
    ctx->pc = 0x325B64u;
    SET_GPR_U32(ctx, 31, 0x325B6Cu);
    ctx->pc = 0x325B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325B64u;
            // 0x325b68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325B6Cu; }
        if (ctx->pc != 0x325B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325B6Cu; }
        if (ctx->pc != 0x325B6Cu) { return; }
    }
    ctx->pc = 0x325B6Cu;
label_325b6c:
    // 0x325b6c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325b70: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x325b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325b74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325b78: 0xc123654  jal         func_48D950
    ctx->pc = 0x325B78u;
    SET_GPR_U32(ctx, 31, 0x325B80u);
    ctx->pc = 0x325B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325B78u;
            // 0x325b7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325B80u; }
        if (ctx->pc != 0x325B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325B80u; }
        if (ctx->pc != 0x325B80u) { return; }
    }
    ctx->pc = 0x325B80u;
label_325b80:
    // 0x325b80: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325b80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x325b84: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x325b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325b88: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x325b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x325b8c: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x325b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x325b90: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x325b90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x325b94: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x325B94u;
    SET_GPR_U32(ctx, 31, 0x325B9Cu);
    ctx->pc = 0x325B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325B94u;
            // 0x325b98: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325B9Cu; }
        if (ctx->pc != 0x325B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325B9Cu; }
        if (ctx->pc != 0x325B9Cu) { return; }
    }
    ctx->pc = 0x325B9Cu;
label_325b9c:
    // 0x325b9c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325ba0: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x325ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325ba4: 0xc123944  jal         func_48E510
    ctx->pc = 0x325BA4u;
    SET_GPR_U32(ctx, 31, 0x325BACu);
    ctx->pc = 0x325BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325BA4u;
            // 0x325ba8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325BACu; }
        if (ctx->pc != 0x325BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325BACu; }
        if (ctx->pc != 0x325BACu) { return; }
    }
    ctx->pc = 0x325BACu;
label_325bac:
    // 0x325bac: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325bb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325bb4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x325bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325bb8: 0xc123654  jal         func_48D950
    ctx->pc = 0x325BB8u;
    SET_GPR_U32(ctx, 31, 0x325BC0u);
    ctx->pc = 0x325BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325BB8u;
            // 0x325bbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325BC0u; }
        if (ctx->pc != 0x325BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325BC0u; }
        if (ctx->pc != 0x325BC0u) { return; }
    }
    ctx->pc = 0x325BC0u;
label_325bc0:
    // 0x325bc0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x325BC0u;
    {
        const bool branch_taken_0x325bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325bc0) {
            ctx->pc = 0x325CF0u;
            goto label_325cf0;
        }
    }
    ctx->pc = 0x325BC8u;
label_325bc8:
    // 0x325bc8: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x325bcc: 0x26a70009  addiu       $a3, $s5, 0x9
    ctx->pc = 0x325bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x325bd0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x325bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325bd4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x325bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x325bd8: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x325BD8u;
    SET_GPR_U32(ctx, 31, 0x325BE0u);
    ctx->pc = 0x325BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325BD8u;
            // 0x325bdc: 0x24c6cb48  addiu       $a2, $a2, -0x34B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325BE0u; }
        if (ctx->pc != 0x325BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325BE0u; }
        if (ctx->pc != 0x325BE0u) { return; }
    }
    ctx->pc = 0x325BE0u;
label_325be0:
    // 0x325be0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325be4: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x325be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325be8: 0xc123944  jal         func_48E510
    ctx->pc = 0x325BE8u;
    SET_GPR_U32(ctx, 31, 0x325BF0u);
    ctx->pc = 0x325BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325BE8u;
            // 0x325bec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325BF0u; }
        if (ctx->pc != 0x325BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325BF0u; }
        if (ctx->pc != 0x325BF0u) { return; }
    }
    ctx->pc = 0x325BF0u;
label_325bf0:
    // 0x325bf0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325bf4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325bf8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x325bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325bfc: 0xc123654  jal         func_48D950
    ctx->pc = 0x325BFCu;
    SET_GPR_U32(ctx, 31, 0x325C04u);
    ctx->pc = 0x325C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325BFCu;
            // 0x325c00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325C04u; }
        if (ctx->pc != 0x325C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325C04u; }
        if (ctx->pc != 0x325C04u) { return; }
    }
    ctx->pc = 0x325C04u;
label_325c04:
    // 0x325c04: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325c04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x325c08: 0x26a70009  addiu       $a3, $s5, 0x9
    ctx->pc = 0x325c08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
    // 0x325c0c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x325c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325c10: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x325c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x325c14: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x325c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x325c18: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x325C18u;
    SET_GPR_U32(ctx, 31, 0x325C20u);
    ctx->pc = 0x325C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325C18u;
            // 0x325c1c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325C20u; }
        if (ctx->pc != 0x325C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325C20u; }
        if (ctx->pc != 0x325C20u) { return; }
    }
    ctx->pc = 0x325C20u;
label_325c20:
    // 0x325c20: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325c24: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x325c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325c28: 0xc123944  jal         func_48E510
    ctx->pc = 0x325C28u;
    SET_GPR_U32(ctx, 31, 0x325C30u);
    ctx->pc = 0x325C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325C28u;
            // 0x325c2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325C30u; }
        if (ctx->pc != 0x325C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325C30u; }
        if (ctx->pc != 0x325C30u) { return; }
    }
    ctx->pc = 0x325C30u;
label_325c30:
    // 0x325c30: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x325c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x325c34: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x325C34u;
    {
        const bool branch_taken_0x325c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x325c34) {
            ctx->pc = 0x325C58u;
            goto label_325c58;
        }
    }
    ctx->pc = 0x325C3Cu;
    // 0x325c3c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325c40: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x325c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325c44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325c48: 0xc123654  jal         func_48D950
    ctx->pc = 0x325C48u;
    SET_GPR_U32(ctx, 31, 0x325C50u);
    ctx->pc = 0x325C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325C48u;
            // 0x325c4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325C50u; }
        if (ctx->pc != 0x325C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325C50u; }
        if (ctx->pc != 0x325C50u) { return; }
    }
    ctx->pc = 0x325C50u;
label_325c50:
    // 0x325c50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x325C50u;
    {
        const bool branch_taken_0x325c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325c50) {
            ctx->pc = 0x325C70u;
            goto label_325c70;
        }
    }
    ctx->pc = 0x325C58u;
label_325c58:
    // 0x325c58: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325c5c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x325c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325c60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325c64: 0xc123654  jal         func_48D950
    ctx->pc = 0x325C64u;
    SET_GPR_U32(ctx, 31, 0x325C6Cu);
    ctx->pc = 0x325C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325C64u;
            // 0x325c68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325C6Cu; }
        if (ctx->pc != 0x325C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325C6Cu; }
        if (ctx->pc != 0x325C6Cu) { return; }
    }
    ctx->pc = 0x325C6Cu;
label_325c6c:
    // 0x325c6c: 0x0  nop
    ctx->pc = 0x325c6cu;
    // NOP
label_325c70:
    // 0x325c70: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325c70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x325c74: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x325c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325c78: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x325c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x325c7c: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x325c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x325c80: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x325c80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x325c84: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x325C84u;
    SET_GPR_U32(ctx, 31, 0x325C8Cu);
    ctx->pc = 0x325C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325C84u;
            // 0x325c88: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325C8Cu; }
        if (ctx->pc != 0x325C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325C8Cu; }
        if (ctx->pc != 0x325C8Cu) { return; }
    }
    ctx->pc = 0x325C8Cu;
label_325c8c:
    // 0x325c8c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325c90: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x325c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325c94: 0xc123944  jal         func_48E510
    ctx->pc = 0x325C94u;
    SET_GPR_U32(ctx, 31, 0x325C9Cu);
    ctx->pc = 0x325C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325C94u;
            // 0x325c98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325C9Cu; }
        if (ctx->pc != 0x325C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325C9Cu; }
        if (ctx->pc != 0x325C9Cu) { return; }
    }
    ctx->pc = 0x325C9Cu;
label_325c9c:
    // 0x325c9c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325ca0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x325ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325ca4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325ca8: 0xc123654  jal         func_48D950
    ctx->pc = 0x325CA8u;
    SET_GPR_U32(ctx, 31, 0x325CB0u);
    ctx->pc = 0x325CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325CA8u;
            // 0x325cac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325CB0u; }
        if (ctx->pc != 0x325CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325CB0u; }
        if (ctx->pc != 0x325CB0u) { return; }
    }
    ctx->pc = 0x325CB0u;
label_325cb0:
    // 0x325cb0: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x325cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x325cb4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x325cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325cb8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x325cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x325cbc: 0x24c6cb48  addiu       $a2, $a2, -0x34B8
    ctx->pc = 0x325cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953800));
    // 0x325cc0: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x325cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x325cc4: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x325CC4u;
    SET_GPR_U32(ctx, 31, 0x325CCCu);
    ctx->pc = 0x325CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325CC4u;
            // 0x325cc8: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325CCCu; }
        if (ctx->pc != 0x325CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325CCCu; }
        if (ctx->pc != 0x325CCCu) { return; }
    }
    ctx->pc = 0x325CCCu;
label_325ccc:
    // 0x325ccc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x325cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x325cd0: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x325cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x325cd4: 0xc123944  jal         func_48E510
    ctx->pc = 0x325CD4u;
    SET_GPR_U32(ctx, 31, 0x325CDCu);
    ctx->pc = 0x325CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325CD4u;
            // 0x325cd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325CDCu; }
        if (ctx->pc != 0x325CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325CDCu; }
        if (ctx->pc != 0x325CDCu) { return; }
    }
    ctx->pc = 0x325CDCu;
label_325cdc:
    // 0x325cdc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x325cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x325ce0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325ce4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x325ce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325ce8: 0xc123654  jal         func_48D950
    ctx->pc = 0x325CE8u;
    SET_GPR_U32(ctx, 31, 0x325CF0u);
    ctx->pc = 0x325CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x325CE8u;
            // 0x325cec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325CF0u; }
        if (ctx->pc != 0x325CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x325CF0u; }
        if (ctx->pc != 0x325CF0u) { return; }
    }
    ctx->pc = 0x325CF0u;
label_325cf0:
    // 0x325cf0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x325cf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x325cf4: 0x2aa30008  slti        $v1, $s5, 0x8
    ctx->pc = 0x325cf4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x325cf8: 0x5460fc0b  bnel        $v1, $zero, . + 4 + (-0x3F5 << 2)
    ctx->pc = 0x325CF8u;
    {
        const bool branch_taken_0x325cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x325cf8) {
            ctx->pc = 0x325CFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x325CF8u;
            // 0x325cfc: 0x27a30210  addiu       $v1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
            ctx->pc = 0x324D28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_324d28;
        }
    }
    ctx->pc = 0x325D00u;
    // 0x325d00: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x325d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x325d04: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x325d04u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x325d08: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x325d08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x325d0c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x325d0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x325d10: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x325d10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x325d14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x325d14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x325d18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x325d18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x325d1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x325d1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325d20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x325d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325d24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x325d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325d28: 0x3e00008  jr          $ra
    ctx->pc = 0x325D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x325D28u;
            // 0x325d2c: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x325D30u;
}
