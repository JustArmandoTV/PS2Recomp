#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0045CC00
// Address: 0x45cc00 - 0x45d140
void sub_0045CC00_0x45cc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045CC00_0x45cc00");
#endif

    switch (ctx->pc) {
        case 0x45cc28u: goto label_45cc28;
        case 0x45cc84u: goto label_45cc84;
        case 0x45cc9cu: goto label_45cc9c;
        case 0x45ccb0u: goto label_45ccb0;
        case 0x45ccc8u: goto label_45ccc8;
        case 0x45ccd8u: goto label_45ccd8;
        case 0x45cce8u: goto label_45cce8;
        case 0x45cd28u: goto label_45cd28;
        case 0x45cd44u: goto label_45cd44;
        case 0x45cd60u: goto label_45cd60;
        case 0x45cd7cu: goto label_45cd7c;
        case 0x45cd98u: goto label_45cd98;
        case 0x45cdb4u: goto label_45cdb4;
        case 0x45cdc4u: goto label_45cdc4;
        case 0x45cdd4u: goto label_45cdd4;
        case 0x45ce00u: goto label_45ce00;
        case 0x45ce18u: goto label_45ce18;
        case 0x45ce28u: goto label_45ce28;
        case 0x45ce38u: goto label_45ce38;
        case 0x45ce40u: goto label_45ce40;
        case 0x45ce6cu: goto label_45ce6c;
        case 0x45ce84u: goto label_45ce84;
        case 0x45ce94u: goto label_45ce94;
        case 0x45cea4u: goto label_45cea4;
        case 0x45cf10u: goto label_45cf10;
        case 0x45cf28u: goto label_45cf28;
        case 0x45cf74u: goto label_45cf74;
        case 0x45cf88u: goto label_45cf88;
        case 0x45cf94u: goto label_45cf94;
        case 0x45cfa0u: goto label_45cfa0;
        case 0x45cfacu: goto label_45cfac;
        case 0x45cfb8u: goto label_45cfb8;
        case 0x45cfc8u: goto label_45cfc8;
        case 0x45cfdcu: goto label_45cfdc;
        case 0x45cfe8u: goto label_45cfe8;
        case 0x45cff4u: goto label_45cff4;
        case 0x45d000u: goto label_45d000;
        case 0x45d00cu: goto label_45d00c;
        case 0x45d018u: goto label_45d018;
        case 0x45d028u: goto label_45d028;
        case 0x45d034u: goto label_45d034;
        case 0x45d040u: goto label_45d040;
        case 0x45d080u: goto label_45d080;
        case 0x45d090u: goto label_45d090;
        case 0x45d0a0u: goto label_45d0a0;
        case 0x45d0b0u: goto label_45d0b0;
        case 0x45d0d0u: goto label_45d0d0;
        case 0x45d0f8u: goto label_45d0f8;
        case 0x45d104u: goto label_45d104;
        case 0x45d128u: goto label_45d128;
        default: break;
    }

    ctx->pc = 0x45cc00u;

    // 0x45cc00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x45cc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x45cc04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x45cc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x45cc08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45cc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x45cc0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45cc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x45cc10: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x45cc10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cc14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45cc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45cc18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45cc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45cc1c: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x45cc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x45cc20: 0xc0c9a58  jal         func_326960
    ctx->pc = 0x45CC20u;
    SET_GPR_U32(ctx, 31, 0x45CC28u);
    ctx->pc = 0x45CC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CC20u;
            // 0x45cc24: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CC28u; }
        if (ctx->pc != 0x45CC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CC28u; }
        if (ctx->pc != 0x45CC28u) { return; }
    }
    ctx->pc = 0x45CC28u;
label_45cc28:
    // 0x45cc28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45cc28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cc2c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x45cc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x45cc30: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x45cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x45cc34: 0x8c508a08  lw          $s0, -0x75F8($v0)
    ctx->pc = 0x45cc34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x45cc38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x45cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x45cc3c: 0x8c52a140  lw          $s2, -0x5EC0($v0)
    ctx->pc = 0x45cc3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943040)));
    // 0x45cc40: 0xa260006c  sb          $zero, 0x6C($s3)
    ctx->pc = 0x45cc40u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x45cc44: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x45cc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x45cc48: 0x5066001b  beql        $v1, $a2, . + 4 + (0x1B << 2)
    ctx->pc = 0x45CC48u;
    {
        const bool branch_taken_0x45cc48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x45cc48) {
            ctx->pc = 0x45CC4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45CC48u;
            // 0x45cc4c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45CCB8u;
            goto label_45ccb8;
        }
    }
    ctx->pc = 0x45CC50u;
    // 0x45cc50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45cc54: 0x50620013  beql        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x45CC54u;
    {
        const bool branch_taken_0x45cc54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45cc54) {
            ctx->pc = 0x45CC58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45CC54u;
            // 0x45cc58: 0xae660078  sw          $a2, 0x78($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45CCA4u;
            goto label_45cca4;
        }
    }
    ctx->pc = 0x45CC5Cu;
    // 0x45cc5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x45cc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45cc60: 0x5066000a  beql        $v1, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x45CC60u;
    {
        const bool branch_taken_0x45cc60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x45cc60) {
            ctx->pc = 0x45CC64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45CC60u;
            // 0x45cc64: 0xae620078  sw          $v0, 0x78($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45CC8Cu;
            goto label_45cc8c;
        }
    }
    ctx->pc = 0x45CC68u;
    // 0x45cc68: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x45CC68u;
    {
        const bool branch_taken_0x45cc68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cc68) {
            ctx->pc = 0x45CC6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45CC68u;
            // 0x45cc6c: 0xae660078  sw          $a2, 0x78($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45CC78u;
            goto label_45cc78;
        }
    }
    ctx->pc = 0x45CC70u;
    // 0x45cc70: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x45CC70u;
    {
        const bool branch_taken_0x45cc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45CC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45CC70u;
            // 0x45cc74: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45cc70) {
            ctx->pc = 0x45CCCCu;
            goto label_45cccc;
        }
    }
    ctx->pc = 0x45CC78u;
label_45cc78:
    // 0x45cc78: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x45cc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x45cc7c: 0xc1232d8  jal         func_48CB60
    ctx->pc = 0x45CC7Cu;
    SET_GPR_U32(ctx, 31, 0x45CC84u);
    ctx->pc = 0x45CC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CC7Cu;
            // 0x45cc80: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CC84u; }
        if (ctx->pc != 0x45CC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CC84u; }
        if (ctx->pc != 0x45CC84u) { return; }
    }
    ctx->pc = 0x45CC84u;
label_45cc84:
    // 0x45cc84: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x45CC84u;
    {
        const bool branch_taken_0x45cc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cc84) {
            ctx->pc = 0x45CCC8u;
            goto label_45ccc8;
        }
    }
    ctx->pc = 0x45CC8Cu;
label_45cc8c:
    // 0x45cc8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x45cc8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cc90: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x45cc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x45cc94: 0xc1232d8  jal         func_48CB60
    ctx->pc = 0x45CC94u;
    SET_GPR_U32(ctx, 31, 0x45CC9Cu);
    ctx->pc = 0x45CC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CC94u;
            // 0x45cc98: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CC9Cu; }
        if (ctx->pc != 0x45CC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CC9Cu; }
        if (ctx->pc != 0x45CC9Cu) { return; }
    }
    ctx->pc = 0x45CC9Cu;
label_45cc9c:
    // 0x45cc9c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x45CC9Cu;
    {
        const bool branch_taken_0x45cc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cc9c) {
            ctx->pc = 0x45CCC8u;
            goto label_45ccc8;
        }
    }
    ctx->pc = 0x45CCA4u;
label_45cca4:
    // 0x45cca4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x45cca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x45cca8: 0xc1232d8  jal         func_48CB60
    ctx->pc = 0x45CCA8u;
    SET_GPR_U32(ctx, 31, 0x45CCB0u);
    ctx->pc = 0x45CCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CCA8u;
            // 0x45ccac: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CCB0u; }
        if (ctx->pc != 0x45CCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CCB0u; }
        if (ctx->pc != 0x45CCB0u) { return; }
    }
    ctx->pc = 0x45CCB0u;
label_45ccb0:
    // 0x45ccb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x45CCB0u;
    {
        const bool branch_taken_0x45ccb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ccb0) {
            ctx->pc = 0x45CCC8u;
            goto label_45ccc8;
        }
    }
    ctx->pc = 0x45CCB8u;
label_45ccb8:
    // 0x45ccb8: 0xae660078  sw          $a2, 0x78($s3)
    ctx->pc = 0x45ccb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 6));
    // 0x45ccbc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x45ccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x45ccc0: 0xc1232d8  jal         func_48CB60
    ctx->pc = 0x45CCC0u;
    SET_GPR_U32(ctx, 31, 0x45CCC8u);
    ctx->pc = 0x45CCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CCC0u;
            // 0x45ccc4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CCC8u; }
        if (ctx->pc != 0x45CCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CCC8u; }
        if (ctx->pc != 0x45CCC8u) { return; }
    }
    ctx->pc = 0x45CCC8u;
label_45ccc8:
    // 0x45ccc8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x45ccc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_45cccc:
    // 0x45cccc: 0x8e660078  lw          $a2, 0x78($s3)
    ctx->pc = 0x45ccccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x45ccd0: 0xc1232d8  jal         func_48CB60
    ctx->pc = 0x45CCD0u;
    SET_GPR_U32(ctx, 31, 0x45CCD8u);
    ctx->pc = 0x45CCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CCD0u;
            // 0x45ccd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CCD8u; }
        if (ctx->pc != 0x45CCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CCD8u; }
        if (ctx->pc != 0x45CCD8u) { return; }
    }
    ctx->pc = 0x45CCD8u;
label_45ccd8:
    // 0x45ccd8: 0x8e620078  lw          $v0, 0x78($s3)
    ctx->pc = 0x45ccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x45ccdc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45ccdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cce0: 0xc117288  jal         func_45CA20
    ctx->pc = 0x45CCE0u;
    SET_GPR_U32(ctx, 31, 0x45CCE8u);
    ctx->pc = 0x45CCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CCE0u;
            // 0x45cce4: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x45CA20u;
    if (runtime->hasFunction(0x45CA20u)) {
        auto targetFn = runtime->lookupFunction(0x45CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CCE8u; }
        if (ctx->pc != 0x45CCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045CA20_0x45ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CCE8u; }
        if (ctx->pc != 0x45CCE8u) { return; }
    }
    ctx->pc = 0x45CCE8u;
label_45cce8:
    // 0x45cce8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x45cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x45ccec: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x45ccecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x45ccf0: 0x50200031  beql        $at, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x45CCF0u;
    {
        const bool branch_taken_0x45ccf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ccf0) {
            ctx->pc = 0x45CCF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45CCF0u;
            // 0x45ccf4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45CDB8u;
            goto label_45cdb8;
        }
    }
    ctx->pc = 0x45CCF8u;
    // 0x45ccf8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x45ccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x45ccfc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45ccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x45cd00: 0x2463e350  addiu       $v1, $v1, -0x1CB0
    ctx->pc = 0x45cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959952));
    // 0x45cd04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45cd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45cd08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45cd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45cd0c: 0x400008  jr          $v0
    ctx->pc = 0x45CD0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x45CD14u: goto label_45cd14;
            case 0x45CD30u: goto label_45cd30;
            case 0x45CD4Cu: goto label_45cd4c;
            case 0x45CD68u: goto label_45cd68;
            case 0x45CD84u: goto label_45cd84;
            case 0x45CDA0u: goto label_45cda0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x45CD14u;
label_45cd14:
    // 0x45cd14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x45cd14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45cd18: 0xae66007c  sw          $a2, 0x7C($s3)
    ctx->pc = 0x45cd18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 6));
    // 0x45cd1c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x45cd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x45cd20: 0xc1232d8  jal         func_48CB60
    ctx->pc = 0x45CD20u;
    SET_GPR_U32(ctx, 31, 0x45CD28u);
    ctx->pc = 0x45CD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CD20u;
            // 0x45cd24: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CD28u; }
        if (ctx->pc != 0x45CD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CD28u; }
        if (ctx->pc != 0x45CD28u) { return; }
    }
    ctx->pc = 0x45CD28u;
label_45cd28:
    // 0x45cd28: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x45CD28u;
    {
        const bool branch_taken_0x45cd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cd28) {
            ctx->pc = 0x45CDB4u;
            goto label_45cdb4;
        }
    }
    ctx->pc = 0x45CD30u;
label_45cd30:
    // 0x45cd30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x45cd30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45cd34: 0xae66007c  sw          $a2, 0x7C($s3)
    ctx->pc = 0x45cd34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 6));
    // 0x45cd38: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x45cd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x45cd3c: 0xc1232d8  jal         func_48CB60
    ctx->pc = 0x45CD3Cu;
    SET_GPR_U32(ctx, 31, 0x45CD44u);
    ctx->pc = 0x45CD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CD3Cu;
            // 0x45cd40: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CD44u; }
        if (ctx->pc != 0x45CD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CD44u; }
        if (ctx->pc != 0x45CD44u) { return; }
    }
    ctx->pc = 0x45CD44u;
label_45cd44:
    // 0x45cd44: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x45CD44u;
    {
        const bool branch_taken_0x45cd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cd44) {
            ctx->pc = 0x45CDB4u;
            goto label_45cdb4;
        }
    }
    ctx->pc = 0x45CD4Cu;
label_45cd4c:
    // 0x45cd4c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x45cd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x45cd50: 0xae66007c  sw          $a2, 0x7C($s3)
    ctx->pc = 0x45cd50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 6));
    // 0x45cd54: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x45cd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x45cd58: 0xc1232d8  jal         func_48CB60
    ctx->pc = 0x45CD58u;
    SET_GPR_U32(ctx, 31, 0x45CD60u);
    ctx->pc = 0x45CD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CD58u;
            // 0x45cd5c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CD60u; }
        if (ctx->pc != 0x45CD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CD60u; }
        if (ctx->pc != 0x45CD60u) { return; }
    }
    ctx->pc = 0x45CD60u;
label_45cd60:
    // 0x45cd60: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x45CD60u;
    {
        const bool branch_taken_0x45cd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cd60) {
            ctx->pc = 0x45CDB4u;
            goto label_45cdb4;
        }
    }
    ctx->pc = 0x45CD68u;
label_45cd68:
    // 0x45cd68: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x45cd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45cd6c: 0xae66007c  sw          $a2, 0x7C($s3)
    ctx->pc = 0x45cd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 6));
    // 0x45cd70: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x45cd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x45cd74: 0xc1232d8  jal         func_48CB60
    ctx->pc = 0x45CD74u;
    SET_GPR_U32(ctx, 31, 0x45CD7Cu);
    ctx->pc = 0x45CD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CD74u;
            // 0x45cd78: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CD7Cu; }
        if (ctx->pc != 0x45CD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CD7Cu; }
        if (ctx->pc != 0x45CD7Cu) { return; }
    }
    ctx->pc = 0x45CD7Cu;
label_45cd7c:
    // 0x45cd7c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x45CD7Cu;
    {
        const bool branch_taken_0x45cd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cd7c) {
            ctx->pc = 0x45CDB4u;
            goto label_45cdb4;
        }
    }
    ctx->pc = 0x45CD84u;
label_45cd84:
    // 0x45cd84: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x45cd84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x45cd88: 0xae66007c  sw          $a2, 0x7C($s3)
    ctx->pc = 0x45cd88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 6));
    // 0x45cd8c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x45cd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x45cd90: 0xc1232d8  jal         func_48CB60
    ctx->pc = 0x45CD90u;
    SET_GPR_U32(ctx, 31, 0x45CD98u);
    ctx->pc = 0x45CD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CD90u;
            // 0x45cd94: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CD98u; }
        if (ctx->pc != 0x45CD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CD98u; }
        if (ctx->pc != 0x45CD98u) { return; }
    }
    ctx->pc = 0x45CD98u;
label_45cd98:
    // 0x45cd98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x45CD98u;
    {
        const bool branch_taken_0x45cd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cd98) {
            ctx->pc = 0x45CDB4u;
            goto label_45cdb4;
        }
    }
    ctx->pc = 0x45CDA0u;
label_45cda0:
    // 0x45cda0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x45cda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x45cda4: 0xae66007c  sw          $a2, 0x7C($s3)
    ctx->pc = 0x45cda4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 6));
    // 0x45cda8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x45cda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x45cdac: 0xc1232d8  jal         func_48CB60
    ctx->pc = 0x45CDACu;
    SET_GPR_U32(ctx, 31, 0x45CDB4u);
    ctx->pc = 0x45CDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CDACu;
            // 0x45cdb0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CDB4u; }
        if (ctx->pc != 0x45CDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CDB4u; }
        if (ctx->pc != 0x45CDB4u) { return; }
    }
    ctx->pc = 0x45CDB4u;
label_45cdb4:
    // 0x45cdb4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x45cdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_45cdb8:
    // 0x45cdb8: 0x8e66007c  lw          $a2, 0x7C($s3)
    ctx->pc = 0x45cdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x45cdbc: 0xc1232d8  jal         func_48CB60
    ctx->pc = 0x45CDBCu;
    SET_GPR_U32(ctx, 31, 0x45CDC4u);
    ctx->pc = 0x45CDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CDBCu;
            // 0x45cdc0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CDC4u; }
        if (ctx->pc != 0x45CDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CDC4u; }
        if (ctx->pc != 0x45CDC4u) { return; }
    }
    ctx->pc = 0x45CDC4u;
label_45cdc4:
    // 0x45cdc4: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x45cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x45cdc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45cdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cdcc: 0xc1171fc  jal         func_45C7F0
    ctx->pc = 0x45CDCCu;
    SET_GPR_U32(ctx, 31, 0x45CDD4u);
    ctx->pc = 0x45CDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CDCCu;
            // 0x45cdd0: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x45C7F0u;
    if (runtime->hasFunction(0x45C7F0u)) {
        auto targetFn = runtime->lookupFunction(0x45C7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CDD4u; }
        if (ctx->pc != 0x45CDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045C7F0_0x45c7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CDD4u; }
        if (ctx->pc != 0x45CDD4u) { return; }
    }
    ctx->pc = 0x45CDD4u;
label_45cdd4:
    // 0x45cdd4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x45cdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x45cdd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x45cdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45cddc: 0x5046000a  beql        $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x45CDDCu;
    {
        const bool branch_taken_0x45cddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x45cddc) {
            ctx->pc = 0x45CDE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45CDDCu;
            // 0x45cde0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45CE08u;
            goto label_45ce08;
        }
    }
    ctx->pc = 0x45CDE4u;
    // 0x45cde4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x45CDE4u;
    {
        const bool branch_taken_0x45cde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cde4) {
            ctx->pc = 0x45CDE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45CDE4u;
            // 0x45cde8: 0xae660080  sw          $a2, 0x80($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45CDF4u;
            goto label_45cdf4;
        }
    }
    ctx->pc = 0x45CDECu;
    // 0x45cdec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x45CDECu;
    {
        const bool branch_taken_0x45cdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45CDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45CDECu;
            // 0x45cdf0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45cdec) {
            ctx->pc = 0x45CE1Cu;
            goto label_45ce1c;
        }
    }
    ctx->pc = 0x45CDF4u;
label_45cdf4:
    // 0x45cdf4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x45cdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x45cdf8: 0xc1232d8  jal         func_48CB60
    ctx->pc = 0x45CDF8u;
    SET_GPR_U32(ctx, 31, 0x45CE00u);
    ctx->pc = 0x45CDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CDF8u;
            // 0x45cdfc: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CE00u; }
        if (ctx->pc != 0x45CE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CE00u; }
        if (ctx->pc != 0x45CE00u) { return; }
    }
    ctx->pc = 0x45CE00u;
label_45ce00:
    // 0x45ce00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x45CE00u;
    {
        const bool branch_taken_0x45ce00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ce00) {
            ctx->pc = 0x45CE18u;
            goto label_45ce18;
        }
    }
    ctx->pc = 0x45CE08u;
label_45ce08:
    // 0x45ce08: 0xae660080  sw          $a2, 0x80($s3)
    ctx->pc = 0x45ce08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 6));
    // 0x45ce0c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x45ce0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x45ce10: 0xc1232d8  jal         func_48CB60
    ctx->pc = 0x45CE10u;
    SET_GPR_U32(ctx, 31, 0x45CE18u);
    ctx->pc = 0x45CE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CE10u;
            // 0x45ce14: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CE18u; }
        if (ctx->pc != 0x45CE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CE18u; }
        if (ctx->pc != 0x45CE18u) { return; }
    }
    ctx->pc = 0x45CE18u;
label_45ce18:
    // 0x45ce18: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x45ce18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_45ce1c:
    // 0x45ce1c: 0x8e660080  lw          $a2, 0x80($s3)
    ctx->pc = 0x45ce1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x45ce20: 0xc1232d8  jal         func_48CB60
    ctx->pc = 0x45CE20u;
    SET_GPR_U32(ctx, 31, 0x45CE28u);
    ctx->pc = 0x45CE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CE20u;
            // 0x45ce24: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CE28u; }
        if (ctx->pc != 0x45CE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CE28u; }
        if (ctx->pc != 0x45CE28u) { return; }
    }
    ctx->pc = 0x45CE28u;
label_45ce28:
    // 0x45ce28: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x45ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x45ce2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45ce2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ce30: 0xc11718c  jal         func_45C630
    ctx->pc = 0x45CE30u;
    SET_GPR_U32(ctx, 31, 0x45CE38u);
    ctx->pc = 0x45CE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CE30u;
            // 0x45ce34: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x45C630u;
    if (runtime->hasFunction(0x45C630u)) {
        auto targetFn = runtime->lookupFunction(0x45C630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CE38u; }
        if (ctx->pc != 0x45CE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045C630_0x45c630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CE38u; }
        if (ctx->pc != 0x45CE38u) { return; }
    }
    ctx->pc = 0x45CE38u;
label_45ce38:
    // 0x45ce38: 0xc073e80  jal         func_1CFA00
    ctx->pc = 0x45CE38u;
    SET_GPR_U32(ctx, 31, 0x45CE40u);
    ctx->pc = 0x45CE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CE38u;
            // 0x45ce3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA00u;
    if (runtime->hasFunction(0x1CFA00u)) {
        auto targetFn = runtime->lookupFunction(0x1CFA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CE40u; }
        if (ctx->pc != 0x45CE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CFA00_0x1cfa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CE40u; }
        if (ctx->pc != 0x45CE40u) { return; }
    }
    ctx->pc = 0x45CE40u;
label_45ce40:
    // 0x45ce40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x45ce40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x45ce44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x45ce44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45ce48: 0x5046000a  beql        $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x45CE48u;
    {
        const bool branch_taken_0x45ce48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x45ce48) {
            ctx->pc = 0x45CE4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45CE48u;
            // 0x45ce4c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45CE74u;
            goto label_45ce74;
        }
    }
    ctx->pc = 0x45CE50u;
    // 0x45ce50: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x45CE50u;
    {
        const bool branch_taken_0x45ce50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ce50) {
            ctx->pc = 0x45CE54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45CE50u;
            // 0x45ce54: 0xae660084  sw          $a2, 0x84($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45CE60u;
            goto label_45ce60;
        }
    }
    ctx->pc = 0x45CE58u;
    // 0x45ce58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x45CE58u;
    {
        const bool branch_taken_0x45ce58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45CE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45CE58u;
            // 0x45ce5c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ce58) {
            ctx->pc = 0x45CE88u;
            goto label_45ce88;
        }
    }
    ctx->pc = 0x45CE60u;
label_45ce60:
    // 0x45ce60: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x45ce60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x45ce64: 0xc1232d8  jal         func_48CB60
    ctx->pc = 0x45CE64u;
    SET_GPR_U32(ctx, 31, 0x45CE6Cu);
    ctx->pc = 0x45CE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CE64u;
            // 0x45ce68: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CE6Cu; }
        if (ctx->pc != 0x45CE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CE6Cu; }
        if (ctx->pc != 0x45CE6Cu) { return; }
    }
    ctx->pc = 0x45CE6Cu;
label_45ce6c:
    // 0x45ce6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x45CE6Cu;
    {
        const bool branch_taken_0x45ce6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ce6c) {
            ctx->pc = 0x45CE84u;
            goto label_45ce84;
        }
    }
    ctx->pc = 0x45CE74u;
label_45ce74:
    // 0x45ce74: 0xae660084  sw          $a2, 0x84($s3)
    ctx->pc = 0x45ce74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 6));
    // 0x45ce78: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x45ce78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x45ce7c: 0xc1232d8  jal         func_48CB60
    ctx->pc = 0x45CE7Cu;
    SET_GPR_U32(ctx, 31, 0x45CE84u);
    ctx->pc = 0x45CE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CE7Cu;
            // 0x45ce80: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CE84u; }
        if (ctx->pc != 0x45CE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CE84u; }
        if (ctx->pc != 0x45CE84u) { return; }
    }
    ctx->pc = 0x45CE84u;
label_45ce84:
    // 0x45ce84: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x45ce84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_45ce88:
    // 0x45ce88: 0x8e660084  lw          $a2, 0x84($s3)
    ctx->pc = 0x45ce88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x45ce8c: 0xc1232d8  jal         func_48CB60
    ctx->pc = 0x45CE8Cu;
    SET_GPR_U32(ctx, 31, 0x45CE94u);
    ctx->pc = 0x45CE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CE8Cu;
            // 0x45ce90: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CE94u; }
        if (ctx->pc != 0x45CE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CE94u; }
        if (ctx->pc != 0x45CE94u) { return; }
    }
    ctx->pc = 0x45CE94u;
label_45ce94:
    // 0x45ce94: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x45ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x45ce98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45ce98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ce9c: 0xc117118  jal         func_45C460
    ctx->pc = 0x45CE9Cu;
    SET_GPR_U32(ctx, 31, 0x45CEA4u);
    ctx->pc = 0x45CEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CE9Cu;
            // 0x45cea0: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x45C460u;
    if (runtime->hasFunction(0x45C460u)) {
        auto targetFn = runtime->lookupFunction(0x45C460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CEA4u; }
        if (ctx->pc != 0x45CEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045C460_0x45c460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CEA4u; }
        if (ctx->pc != 0x45CEA4u) { return; }
    }
    ctx->pc = 0x45CEA4u;
label_45cea4:
    // 0x45cea4: 0xa260006c  sb          $zero, 0x6C($s3)
    ctx->pc = 0x45cea4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x45cea8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x45cea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45ceac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45ceacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45ceb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45ceb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45ceb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45ceb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45ceb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45ceb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45cebc: 0x3e00008  jr          $ra
    ctx->pc = 0x45CEBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45CEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45CEBCu;
            // 0x45cec0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45CEC4u;
    // 0x45cec4: 0x0  nop
    ctx->pc = 0x45cec4u;
    // NOP
    // 0x45cec8: 0x0  nop
    ctx->pc = 0x45cec8u;
    // NOP
    // 0x45cecc: 0x0  nop
    ctx->pc = 0x45ceccu;
    // NOP
    // 0x45ced0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x45ced0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x45ced4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45ced4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x45ced8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45ced8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45cedc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45cedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45cee0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x45cee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cee4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x45CEE4u;
    {
        const bool branch_taken_0x45cee4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x45CEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45CEE4u;
            // 0x45cee8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45cee4) {
            ctx->pc = 0x45CF28u;
            goto label_45cf28;
        }
    }
    ctx->pc = 0x45CEECu;
    // 0x45ceec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x45ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x45cef0: 0x2442e480  addiu       $v0, $v0, -0x1B80
    ctx->pc = 0x45cef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960256));
    // 0x45cef4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x45CEF4u;
    {
        const bool branch_taken_0x45cef4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x45CEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45CEF4u;
            // 0x45cef8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45cef4) {
            ctx->pc = 0x45CF10u;
            goto label_45cf10;
        }
    }
    ctx->pc = 0x45CEFCu;
    // 0x45cefc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x45cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x45cf00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45cf00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45cf04: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x45cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x45cf08: 0xc057a68  jal         func_15E9A0
    ctx->pc = 0x45CF08u;
    SET_GPR_U32(ctx, 31, 0x45CF10u);
    ctx->pc = 0x45CF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CF08u;
            // 0x45cf0c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CF10u; }
        if (ctx->pc != 0x45CF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CF10u; }
        if (ctx->pc != 0x45CF10u) { return; }
    }
    ctx->pc = 0x45CF10u;
label_45cf10:
    // 0x45cf10: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x45cf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x45cf14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x45cf14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x45cf18: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45CF18u;
    {
        const bool branch_taken_0x45cf18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x45cf18) {
            ctx->pc = 0x45CF1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45CF18u;
            // 0x45cf1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45CF2Cu;
            goto label_45cf2c;
        }
    }
    ctx->pc = 0x45CF20u;
    // 0x45cf20: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x45CF20u;
    SET_GPR_U32(ctx, 31, 0x45CF28u);
    ctx->pc = 0x45CF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CF20u;
            // 0x45cf24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CF28u; }
        if (ctx->pc != 0x45CF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CF28u; }
        if (ctx->pc != 0x45CF28u) { return; }
    }
    ctx->pc = 0x45CF28u;
label_45cf28:
    // 0x45cf28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x45cf28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45cf2c:
    // 0x45cf2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45cf2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45cf30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45cf30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45cf34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45cf34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45cf38: 0x3e00008  jr          $ra
    ctx->pc = 0x45CF38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45CF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45CF38u;
            // 0x45cf3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45CF40u;
    // 0x45cf40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x45cf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x45cf44: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x45cf44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x45cf48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x45cf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x45cf4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45cf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45cf50: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x45cf50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x45cf54: 0x1065001a  beq         $v1, $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x45CF54u;
    {
        const bool branch_taken_0x45cf54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x45CF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45CF54u;
            // 0x45cf58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45cf54) {
            ctx->pc = 0x45CFC0u;
            goto label_45cfc0;
        }
    }
    ctx->pc = 0x45CF5Cu;
    // 0x45cf5c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x45CF5Cu;
    {
        const bool branch_taken_0x45cf5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cf5c) {
            ctx->pc = 0x45CF60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45CF5Cu;
            // 0x45cf60: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45CF6Cu;
            goto label_45cf6c;
        }
    }
    ctx->pc = 0x45CF64u;
    // 0x45cf64: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x45CF64u;
    {
        const bool branch_taken_0x45cf64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45CF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45CF64u;
            // 0x45cf68: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45cf64) {
            ctx->pc = 0x45D12Cu;
            goto label_45d12c;
        }
    }
    ctx->pc = 0x45CF6Cu;
label_45cf6c:
    // 0x45cf6c: 0xc0c917c  jal         func_3245F0
    ctx->pc = 0x45CF6Cu;
    SET_GPR_U32(ctx, 31, 0x45CF74u);
    ctx->pc = 0x3245F0u;
    if (runtime->hasFunction(0x3245F0u)) {
        auto targetFn = runtime->lookupFunction(0x3245F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CF74u; }
        if (ctx->pc != 0x45CF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003245F0_0x3245f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CF74u; }
        if (ctx->pc != 0x45CF74u) { return; }
    }
    ctx->pc = 0x45CF74u;
label_45cf74:
    // 0x45cf74: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x45CF74u;
    {
        const bool branch_taken_0x45cf74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cf74) {
            ctx->pc = 0x45D128u;
            goto label_45d128;
        }
    }
    ctx->pc = 0x45CF7Cu;
    // 0x45cf7c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x45cf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x45cf80: 0xc0c9190  jal         func_324640
    ctx->pc = 0x45CF80u;
    SET_GPR_U32(ctx, 31, 0x45CF88u);
    ctx->pc = 0x45CF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CF80u;
            // 0x45cf84: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CF88u; }
        if (ctx->pc != 0x45CF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CF88u; }
        if (ctx->pc != 0x45CF88u) { return; }
    }
    ctx->pc = 0x45CF88u;
label_45cf88:
    // 0x45cf88: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x45cf88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x45cf8c: 0xc0c9144  jal         func_324510
    ctx->pc = 0x45CF8Cu;
    SET_GPR_U32(ctx, 31, 0x45CF94u);
    ctx->pc = 0x45CF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CF8Cu;
            // 0x45cf90: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324510u;
    if (runtime->hasFunction(0x324510u)) {
        auto targetFn = runtime->lookupFunction(0x324510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CF94u; }
        if (ctx->pc != 0x45CF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324510_0x324510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CF94u; }
        if (ctx->pc != 0x45CF94u) { return; }
    }
    ctx->pc = 0x45CF94u;
label_45cf94:
    // 0x45cf94: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x45cf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x45cf98: 0xc0c9144  jal         func_324510
    ctx->pc = 0x45CF98u;
    SET_GPR_U32(ctx, 31, 0x45CFA0u);
    ctx->pc = 0x45CF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CF98u;
            // 0x45cf9c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324510u;
    if (runtime->hasFunction(0x324510u)) {
        auto targetFn = runtime->lookupFunction(0x324510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CFA0u; }
        if (ctx->pc != 0x45CFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324510_0x324510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CFA0u; }
        if (ctx->pc != 0x45CFA0u) { return; }
    }
    ctx->pc = 0x45CFA0u;
label_45cfa0:
    // 0x45cfa0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x45cfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x45cfa4: 0xc0c9144  jal         func_324510
    ctx->pc = 0x45CFA4u;
    SET_GPR_U32(ctx, 31, 0x45CFACu);
    ctx->pc = 0x45CFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CFA4u;
            // 0x45cfa8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324510u;
    if (runtime->hasFunction(0x324510u)) {
        auto targetFn = runtime->lookupFunction(0x324510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CFACu; }
        if (ctx->pc != 0x45CFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324510_0x324510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CFACu; }
        if (ctx->pc != 0x45CFACu) { return; }
    }
    ctx->pc = 0x45CFACu;
label_45cfac:
    // 0x45cfac: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x45cfacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x45cfb0: 0xc0c9144  jal         func_324510
    ctx->pc = 0x45CFB0u;
    SET_GPR_U32(ctx, 31, 0x45CFB8u);
    ctx->pc = 0x45CFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CFB0u;
            // 0x45cfb4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324510u;
    if (runtime->hasFunction(0x324510u)) {
        auto targetFn = runtime->lookupFunction(0x324510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CFB8u; }
        if (ctx->pc != 0x45CFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324510_0x324510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CFB8u; }
        if (ctx->pc != 0x45CFB8u) { return; }
    }
    ctx->pc = 0x45CFB8u;
label_45cfb8:
    // 0x45cfb8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x45CFB8u;
    {
        const bool branch_taken_0x45cfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cfb8) {
            ctx->pc = 0x45D128u;
            goto label_45d128;
        }
    }
    ctx->pc = 0x45CFC0u;
label_45cfc0:
    // 0x45cfc0: 0xc0c917c  jal         func_3245F0
    ctx->pc = 0x45CFC0u;
    SET_GPR_U32(ctx, 31, 0x45CFC8u);
    ctx->pc = 0x45CFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CFC0u;
            // 0x45cfc4: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3245F0u;
    if (runtime->hasFunction(0x3245F0u)) {
        auto targetFn = runtime->lookupFunction(0x3245F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CFC8u; }
        if (ctx->pc != 0x45CFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003245F0_0x3245f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CFC8u; }
        if (ctx->pc != 0x45CFC8u) { return; }
    }
    ctx->pc = 0x45CFC8u;
label_45cfc8:
    // 0x45cfc8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x45CFC8u;
    {
        const bool branch_taken_0x45cfc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cfc8) {
            ctx->pc = 0x45CFCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45CFC8u;
            // 0x45cfcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45D010u;
            goto label_45d010;
        }
    }
    ctx->pc = 0x45CFD0u;
    // 0x45cfd0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x45cfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x45cfd4: 0xc0c9190  jal         func_324640
    ctx->pc = 0x45CFD4u;
    SET_GPR_U32(ctx, 31, 0x45CFDCu);
    ctx->pc = 0x45CFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CFD4u;
            // 0x45cfd8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CFDCu; }
        if (ctx->pc != 0x45CFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CFDCu; }
        if (ctx->pc != 0x45CFDCu) { return; }
    }
    ctx->pc = 0x45CFDCu;
label_45cfdc:
    // 0x45cfdc: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x45cfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x45cfe0: 0xc0c9144  jal         func_324510
    ctx->pc = 0x45CFE0u;
    SET_GPR_U32(ctx, 31, 0x45CFE8u);
    ctx->pc = 0x45CFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CFE0u;
            // 0x45cfe4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324510u;
    if (runtime->hasFunction(0x324510u)) {
        auto targetFn = runtime->lookupFunction(0x324510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CFE8u; }
        if (ctx->pc != 0x45CFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324510_0x324510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CFE8u; }
        if (ctx->pc != 0x45CFE8u) { return; }
    }
    ctx->pc = 0x45CFE8u;
label_45cfe8:
    // 0x45cfe8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x45cfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x45cfec: 0xc0c9144  jal         func_324510
    ctx->pc = 0x45CFECu;
    SET_GPR_U32(ctx, 31, 0x45CFF4u);
    ctx->pc = 0x45CFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CFECu;
            // 0x45cff0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324510u;
    if (runtime->hasFunction(0x324510u)) {
        auto targetFn = runtime->lookupFunction(0x324510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CFF4u; }
        if (ctx->pc != 0x45CFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324510_0x324510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45CFF4u; }
        if (ctx->pc != 0x45CFF4u) { return; }
    }
    ctx->pc = 0x45CFF4u;
label_45cff4:
    // 0x45cff4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x45cff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x45cff8: 0xc0c9144  jal         func_324510
    ctx->pc = 0x45CFF8u;
    SET_GPR_U32(ctx, 31, 0x45D000u);
    ctx->pc = 0x45CFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45CFF8u;
            // 0x45cffc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324510u;
    if (runtime->hasFunction(0x324510u)) {
        auto targetFn = runtime->lookupFunction(0x324510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D000u; }
        if (ctx->pc != 0x45D000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324510_0x324510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D000u; }
        if (ctx->pc != 0x45D000u) { return; }
    }
    ctx->pc = 0x45D000u;
label_45d000:
    // 0x45d000: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x45d000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x45d004: 0xc0c9144  jal         func_324510
    ctx->pc = 0x45D004u;
    SET_GPR_U32(ctx, 31, 0x45D00Cu);
    ctx->pc = 0x45D008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D004u;
            // 0x45d008: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324510u;
    if (runtime->hasFunction(0x324510u)) {
        auto targetFn = runtime->lookupFunction(0x324510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D00Cu; }
        if (ctx->pc != 0x45D00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324510_0x324510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D00Cu; }
        if (ctx->pc != 0x45D00Cu) { return; }
    }
    ctx->pc = 0x45D00Cu;
label_45d00c:
    // 0x45d00c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45d00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45d010:
    // 0x45d010: 0xc117e18  jal         func_45F860
    ctx->pc = 0x45D010u;
    SET_GPR_U32(ctx, 31, 0x45D018u);
    ctx->pc = 0x45F860u;
    if (runtime->hasFunction(0x45F860u)) {
        auto targetFn = runtime->lookupFunction(0x45F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D018u; }
        if (ctx->pc != 0x45D018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045F860_0x45f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D018u; }
        if (ctx->pc != 0x45D018u) { return; }
    }
    ctx->pc = 0x45D018u;
label_45d018:
    // 0x45d018: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x45D018u;
    {
        const bool branch_taken_0x45d018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45d018) {
            ctx->pc = 0x45D01Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45D018u;
            // 0x45d01c: 0xc6010060  lwc1        $f1, 0x60($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x45D0B4u;
            goto label_45d0b4;
        }
    }
    ctx->pc = 0x45D020u;
    // 0x45d020: 0xc117d38  jal         func_45F4E0
    ctx->pc = 0x45D020u;
    SET_GPR_U32(ctx, 31, 0x45D028u);
    ctx->pc = 0x45D024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D020u;
            // 0x45d024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x45F4E0u;
    if (runtime->hasFunction(0x45F4E0u)) {
        auto targetFn = runtime->lookupFunction(0x45F4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D028u; }
        if (ctx->pc != 0x45D028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045F4E0_0x45f4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D028u; }
        if (ctx->pc != 0x45D028u) { return; }
    }
    ctx->pc = 0x45D028u;
label_45d028:
    // 0x45d028: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x45d028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x45d02c: 0xc0c9a58  jal         func_326960
    ctx->pc = 0x45D02Cu;
    SET_GPR_U32(ctx, 31, 0x45D034u);
    ctx->pc = 0x45D030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D02Cu;
            // 0x45d030: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D034u; }
        if (ctx->pc != 0x45D034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D034u; }
        if (ctx->pc != 0x45D034u) { return; }
    }
    ctx->pc = 0x45D034u;
label_45d034:
    // 0x45d034: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45d034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x45d038: 0xc123328  jal         func_48CCA0
    ctx->pc = 0x45D038u;
    SET_GPR_U32(ctx, 31, 0x45D040u);
    ctx->pc = 0x45D03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D038u;
            // 0x45d03c: 0x2405002b  addiu       $a1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D040u; }
        if (ctx->pc != 0x45D040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D040u; }
        if (ctx->pc != 0x45D040u) { return; }
    }
    ctx->pc = 0x45D040u;
label_45d040:
    // 0x45d040: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x45d040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x45d044: 0x50430018  beql        $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x45D044u;
    {
        const bool branch_taken_0x45d044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x45d044) {
            ctx->pc = 0x45D048u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45D044u;
            // 0x45d048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45D0A8u;
            goto label_45d0a8;
        }
    }
    ctx->pc = 0x45D04Cu;
    // 0x45d04c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x45d04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x45d050: 0x50430011  beql        $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x45D050u;
    {
        const bool branch_taken_0x45d050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x45d050) {
            ctx->pc = 0x45D054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45D050u;
            // 0x45d054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45D098u;
            goto label_45d098;
        }
    }
    ctx->pc = 0x45D058u;
    // 0x45d058: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x45d058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45d05c: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x45D05Cu;
    {
        const bool branch_taken_0x45d05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x45d05c) {
            ctx->pc = 0x45D060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45D05Cu;
            // 0x45d060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45D088u;
            goto label_45d088;
        }
    }
    ctx->pc = 0x45D064u;
    // 0x45d064: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x45d064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45d068: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x45D068u;
    {
        const bool branch_taken_0x45d068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x45d068) {
            ctx->pc = 0x45D06Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45D068u;
            // 0x45d06c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45D078u;
            goto label_45d078;
        }
    }
    ctx->pc = 0x45D070u;
    // 0x45d070: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x45D070u;
    {
        const bool branch_taken_0x45d070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d070) {
            ctx->pc = 0x45D0B0u;
            goto label_45d0b0;
        }
    }
    ctx->pc = 0x45D078u;
label_45d078:
    // 0x45d078: 0xc117a00  jal         func_45E800
    ctx->pc = 0x45D078u;
    SET_GPR_U32(ctx, 31, 0x45D080u);
    ctx->pc = 0x45E800u;
    if (runtime->hasFunction(0x45E800u)) {
        auto targetFn = runtime->lookupFunction(0x45E800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D080u; }
        if (ctx->pc != 0x45D080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045E800_0x45e800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D080u; }
        if (ctx->pc != 0x45D080u) { return; }
    }
    ctx->pc = 0x45D080u;
label_45d080:
    // 0x45d080: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x45D080u;
    {
        const bool branch_taken_0x45d080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d080) {
            ctx->pc = 0x45D0B0u;
            goto label_45d0b0;
        }
    }
    ctx->pc = 0x45D088u;
label_45d088:
    // 0x45d088: 0xc117800  jal         func_45E000
    ctx->pc = 0x45D088u;
    SET_GPR_U32(ctx, 31, 0x45D090u);
    ctx->pc = 0x45E000u;
    if (runtime->hasFunction(0x45E000u)) {
        auto targetFn = runtime->lookupFunction(0x45E000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D090u; }
        if (ctx->pc != 0x45D090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045E000_0x45e000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D090u; }
        if (ctx->pc != 0x45D090u) { return; }
    }
    ctx->pc = 0x45D090u;
label_45d090:
    // 0x45d090: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x45D090u;
    {
        const bool branch_taken_0x45d090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d090) {
            ctx->pc = 0x45D0B0u;
            goto label_45d0b0;
        }
    }
    ctx->pc = 0x45D098u;
label_45d098:
    // 0x45d098: 0xc11765c  jal         func_45D970
    ctx->pc = 0x45D098u;
    SET_GPR_U32(ctx, 31, 0x45D0A0u);
    ctx->pc = 0x45D970u;
    if (runtime->hasFunction(0x45D970u)) {
        auto targetFn = runtime->lookupFunction(0x45D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D0A0u; }
        if (ctx->pc != 0x45D0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045D970_0x45d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D0A0u; }
        if (ctx->pc != 0x45D0A0u) { return; }
    }
    ctx->pc = 0x45D0A0u;
label_45d0a0:
    // 0x45d0a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x45D0A0u;
    {
        const bool branch_taken_0x45d0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d0a0) {
            ctx->pc = 0x45D0B0u;
            goto label_45d0b0;
        }
    }
    ctx->pc = 0x45D0A8u;
label_45d0a8:
    // 0x45d0a8: 0xc117450  jal         func_45D140
    ctx->pc = 0x45D0A8u;
    SET_GPR_U32(ctx, 31, 0x45D0B0u);
    ctx->pc = 0x45D140u;
    if (runtime->hasFunction(0x45D140u)) {
        auto targetFn = runtime->lookupFunction(0x45D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D0B0u; }
        if (ctx->pc != 0x45D0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0045D140_0x45d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D0B0u; }
        if (ctx->pc != 0x45D0B0u) { return; }
    }
    ctx->pc = 0x45D0B0u;
label_45d0b0:
    // 0x45d0b0: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x45d0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45d0b4:
    // 0x45d0b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45d0b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x45d0b8: 0x0  nop
    ctx->pc = 0x45d0b8u;
    // NOP
    // 0x45d0bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x45d0bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x45d0c0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x45D0C0u;
    {
        const bool branch_taken_0x45d0c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x45d0c0) {
            ctx->pc = 0x45D0D8u;
            goto label_45d0d8;
        }
    }
    ctx->pc = 0x45D0C8u;
    // 0x45d0c8: 0xc0c85f8  jal         func_3217E0
    ctx->pc = 0x45D0C8u;
    SET_GPR_U32(ctx, 31, 0x45D0D0u);
    ctx->pc = 0x45D0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D0C8u;
            // 0x45d0cc: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3217E0u;
    if (runtime->hasFunction(0x3217E0u)) {
        auto targetFn = runtime->lookupFunction(0x3217E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D0D0u; }
        if (ctx->pc != 0x45D0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003217E0_0x3217e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D0D0u; }
        if (ctx->pc != 0x45D0D0u) { return; }
    }
    ctx->pc = 0x45D0D0u;
label_45d0d0:
    // 0x45d0d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x45D0D0u;
    {
        const bool branch_taken_0x45d0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45D0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45D0D0u;
            // 0x45d0d4: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45d0d0) {
            ctx->pc = 0x45D0F0u;
            goto label_45d0f0;
        }
    }
    ctx->pc = 0x45D0D8u;
label_45d0d8:
    // 0x45d0d8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x45d0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x45d0dc: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x45d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x45d0e0: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x45d0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45d0e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x45d0e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x45d0e8: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x45d0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x45d0ec: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x45d0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_45d0f0:
    // 0x45d0f0: 0xc0c9a58  jal         func_326960
    ctx->pc = 0x45D0F0u;
    SET_GPR_U32(ctx, 31, 0x45D0F8u);
    ctx->pc = 0x45D0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D0F0u;
            // 0x45d0f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D0F8u; }
        if (ctx->pc != 0x45D0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D0F8u; }
        if (ctx->pc != 0x45D0F8u) { return; }
    }
    ctx->pc = 0x45D0F8u;
label_45d0f8:
    // 0x45d0f8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45d0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x45d0fc: 0xc123328  jal         func_48CCA0
    ctx->pc = 0x45D0FCu;
    SET_GPR_U32(ctx, 31, 0x45D104u);
    ctx->pc = 0x45D100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D0FCu;
            // 0x45d100: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D104u; }
        if (ctx->pc != 0x45D104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D104u; }
        if (ctx->pc != 0x45D104u) { return; }
    }
    ctx->pc = 0x45D104u;
label_45d104:
    // 0x45d104: 0x3843000a  xori        $v1, $v0, 0xA
    ctx->pc = 0x45d104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
    // 0x45d108: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x45d108u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x45d10c: 0xa203005b  sb          $v1, 0x5B($s0)
    ctx->pc = 0x45d10cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 3));
    // 0x45d110: 0x9203005b  lbu         $v1, 0x5B($s0)
    ctx->pc = 0x45d110u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 91)));
    // 0x45d114: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x45D114u;
    {
        const bool branch_taken_0x45d114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x45d114) {
            ctx->pc = 0x45D128u;
            goto label_45d128;
        }
    }
    ctx->pc = 0x45D11Cu;
    // 0x45d11c: 0x9205005c  lbu         $a1, 0x5C($s0)
    ctx->pc = 0x45d11cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x45d120: 0xc0c8510  jal         func_321440
    ctx->pc = 0x45D120u;
    SET_GPR_U32(ctx, 31, 0x45D128u);
    ctx->pc = 0x45D124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D120u;
            // 0x45d124: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321440u;
    if (runtime->hasFunction(0x321440u)) {
        auto targetFn = runtime->lookupFunction(0x321440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D128u; }
        if (ctx->pc != 0x45D128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321440_0x321440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D128u; }
        if (ctx->pc != 0x45D128u) { return; }
    }
    ctx->pc = 0x45D128u;
label_45d128:
    // 0x45d128: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x45d128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_45d12c:
    // 0x45d12c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45d12cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45d130: 0x3e00008  jr          $ra
    ctx->pc = 0x45D130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45D134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45D130u;
            // 0x45d134: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45D138u;
    // 0x45d138: 0x0  nop
    ctx->pc = 0x45d138u;
    // NOP
    // 0x45d13c: 0x0  nop
    ctx->pc = 0x45d13cu;
    // NOP
}
