#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BEA40
// Address: 0x2bea40 - 0x2beb40
void sub_002BEA40_0x2bea40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BEA40_0x2bea40");
#endif

    switch (ctx->pc) {
        case 0x2bea40u: goto label_2bea40;
        case 0x2bea44u: goto label_2bea44;
        case 0x2bea48u: goto label_2bea48;
        case 0x2bea4cu: goto label_2bea4c;
        case 0x2bea50u: goto label_2bea50;
        case 0x2bea54u: goto label_2bea54;
        case 0x2bea58u: goto label_2bea58;
        case 0x2bea5cu: goto label_2bea5c;
        case 0x2bea60u: goto label_2bea60;
        case 0x2bea64u: goto label_2bea64;
        case 0x2bea68u: goto label_2bea68;
        case 0x2bea6cu: goto label_2bea6c;
        case 0x2bea70u: goto label_2bea70;
        case 0x2bea74u: goto label_2bea74;
        case 0x2bea78u: goto label_2bea78;
        case 0x2bea7cu: goto label_2bea7c;
        case 0x2bea80u: goto label_2bea80;
        case 0x2bea84u: goto label_2bea84;
        case 0x2bea88u: goto label_2bea88;
        case 0x2bea8cu: goto label_2bea8c;
        case 0x2bea90u: goto label_2bea90;
        case 0x2bea94u: goto label_2bea94;
        case 0x2bea98u: goto label_2bea98;
        case 0x2bea9cu: goto label_2bea9c;
        case 0x2beaa0u: goto label_2beaa0;
        case 0x2beaa4u: goto label_2beaa4;
        case 0x2beaa8u: goto label_2beaa8;
        case 0x2beaacu: goto label_2beaac;
        case 0x2beab0u: goto label_2beab0;
        case 0x2beab4u: goto label_2beab4;
        case 0x2beab8u: goto label_2beab8;
        case 0x2beabcu: goto label_2beabc;
        case 0x2beac0u: goto label_2beac0;
        case 0x2beac4u: goto label_2beac4;
        case 0x2beac8u: goto label_2beac8;
        case 0x2beaccu: goto label_2beacc;
        case 0x2bead0u: goto label_2bead0;
        case 0x2bead4u: goto label_2bead4;
        case 0x2bead8u: goto label_2bead8;
        case 0x2beadcu: goto label_2beadc;
        case 0x2beae0u: goto label_2beae0;
        case 0x2beae4u: goto label_2beae4;
        case 0x2beae8u: goto label_2beae8;
        case 0x2beaecu: goto label_2beaec;
        case 0x2beaf0u: goto label_2beaf0;
        case 0x2beaf4u: goto label_2beaf4;
        case 0x2beaf8u: goto label_2beaf8;
        case 0x2beafcu: goto label_2beafc;
        case 0x2beb00u: goto label_2beb00;
        case 0x2beb04u: goto label_2beb04;
        case 0x2beb08u: goto label_2beb08;
        case 0x2beb0cu: goto label_2beb0c;
        case 0x2beb10u: goto label_2beb10;
        case 0x2beb14u: goto label_2beb14;
        case 0x2beb18u: goto label_2beb18;
        case 0x2beb1cu: goto label_2beb1c;
        case 0x2beb20u: goto label_2beb20;
        case 0x2beb24u: goto label_2beb24;
        case 0x2beb28u: goto label_2beb28;
        case 0x2beb2cu: goto label_2beb2c;
        case 0x2beb30u: goto label_2beb30;
        case 0x2beb34u: goto label_2beb34;
        case 0x2beb38u: goto label_2beb38;
        case 0x2beb3cu: goto label_2beb3c;
        default: break;
    }

    ctx->pc = 0x2bea40u;

label_2bea40:
    // 0x2bea40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bea40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bea44:
    // 0x2bea44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bea44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bea48:
    // 0x2bea48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bea48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bea4c:
    // 0x2bea4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bea4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bea50:
    // 0x2bea50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bea50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bea54:
    // 0x2bea54: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2bea58:
    if (ctx->pc == 0x2BEA58u) {
        ctx->pc = 0x2BEA58u;
            // 0x2bea58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BEA5Cu;
        goto label_2bea5c;
    }
    ctx->pc = 0x2BEA54u;
    {
        const bool branch_taken_0x2bea54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEA54u;
            // 0x2bea58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bea54) {
            ctx->pc = 0x2BEA98u;
            goto label_2bea98;
        }
    }
    ctx->pc = 0x2BEA5Cu;
label_2bea5c:
    // 0x2bea5c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2bea60:
    if (ctx->pc == 0x2BEA60u) {
        ctx->pc = 0x2BEA60u;
            // 0x2bea60: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BEA64u;
        goto label_2bea64;
    }
    ctx->pc = 0x2BEA5Cu;
    {
        const bool branch_taken_0x2bea5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bea5c) {
            ctx->pc = 0x2BEA60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEA5Cu;
            // 0x2bea60: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BEA84u;
            goto label_2bea84;
        }
    }
    ctx->pc = 0x2BEA64u;
label_2bea64:
    // 0x2bea64: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2bea68:
    if (ctx->pc == 0x2BEA68u) {
        ctx->pc = 0x2BEA6Cu;
        goto label_2bea6c;
    }
    ctx->pc = 0x2BEA64u;
    {
        const bool branch_taken_0x2bea64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bea64) {
            ctx->pc = 0x2BEA80u;
            goto label_2bea80;
        }
    }
    ctx->pc = 0x2BEA6Cu;
label_2bea6c:
    // 0x2bea6c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2bea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2bea70:
    // 0x2bea70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bea74:
    if (ctx->pc == 0x2BEA74u) {
        ctx->pc = 0x2BEA78u;
        goto label_2bea78;
    }
    ctx->pc = 0x2BEA70u;
    {
        const bool branch_taken_0x2bea70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bea70) {
            ctx->pc = 0x2BEA80u;
            goto label_2bea80;
        }
    }
    ctx->pc = 0x2BEA78u;
label_2bea78:
    // 0x2bea78: 0xc0400a8  jal         func_1002A0
label_2bea7c:
    if (ctx->pc == 0x2BEA7Cu) {
        ctx->pc = 0x2BEA80u;
        goto label_2bea80;
    }
    ctx->pc = 0x2BEA78u;
    SET_GPR_U32(ctx, 31, 0x2BEA80u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEA80u; }
        if (ctx->pc != 0x2BEA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEA80u; }
        if (ctx->pc != 0x2BEA80u) { return; }
    }
    ctx->pc = 0x2BEA80u;
label_2bea80:
    // 0x2bea80: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bea80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bea84:
    // 0x2bea84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bea84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bea88:
    // 0x2bea88: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2bea8c:
    if (ctx->pc == 0x2BEA8Cu) {
        ctx->pc = 0x2BEA8Cu;
            // 0x2bea8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BEA90u;
        goto label_2bea90;
    }
    ctx->pc = 0x2BEA88u;
    {
        const bool branch_taken_0x2bea88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bea88) {
            ctx->pc = 0x2BEA8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEA88u;
            // 0x2bea8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BEA9Cu;
            goto label_2bea9c;
        }
    }
    ctx->pc = 0x2BEA90u;
label_2bea90:
    // 0x2bea90: 0xc0400a8  jal         func_1002A0
label_2bea94:
    if (ctx->pc == 0x2BEA94u) {
        ctx->pc = 0x2BEA94u;
            // 0x2bea94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BEA98u;
        goto label_2bea98;
    }
    ctx->pc = 0x2BEA90u;
    SET_GPR_U32(ctx, 31, 0x2BEA98u);
    ctx->pc = 0x2BEA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEA90u;
            // 0x2bea94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEA98u; }
        if (ctx->pc != 0x2BEA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEA98u; }
        if (ctx->pc != 0x2BEA98u) { return; }
    }
    ctx->pc = 0x2BEA98u;
label_2bea98:
    // 0x2bea98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bea98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bea9c:
    // 0x2bea9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bea9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2beaa0:
    // 0x2beaa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2beaa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2beaa4:
    // 0x2beaa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2beaa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2beaa8:
    // 0x2beaa8: 0x3e00008  jr          $ra
label_2beaac:
    if (ctx->pc == 0x2BEAACu) {
        ctx->pc = 0x2BEAACu;
            // 0x2beaac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BEAB0u;
        goto label_2beab0;
    }
    ctx->pc = 0x2BEAA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEAA8u;
            // 0x2beaac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BEAB0u;
label_2beab0:
    // 0x2beab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2beab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2beab4:
    // 0x2beab4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2beab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2beab8:
    // 0x2beab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2beab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2beabc:
    // 0x2beabc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2beabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2beac0:
    // 0x2beac0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2beac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2beac4:
    // 0x2beac4: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_2beac8:
    if (ctx->pc == 0x2BEAC8u) {
        ctx->pc = 0x2BEAC8u;
            // 0x2beac8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BEACCu;
        goto label_2beacc;
    }
    ctx->pc = 0x2BEAC4u;
    {
        const bool branch_taken_0x2beac4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEAC4u;
            // 0x2beac8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beac4) {
            ctx->pc = 0x2BEB24u;
            goto label_2beb24;
        }
    }
    ctx->pc = 0x2BEACCu;
label_2beacc:
    // 0x2beacc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2beaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bead0:
    // 0x2bead0: 0x24421b80  addiu       $v0, $v0, 0x1B80
    ctx->pc = 0x2bead0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7040));
label_2bead4:
    // 0x2bead4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bead4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bead8:
    // 0x2bead8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bead8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2beadc:
    // 0x2beadc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2beadcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2beae0:
    // 0x2beae0: 0x320f809  jalr        $t9
label_2beae4:
    if (ctx->pc == 0x2BEAE4u) {
        ctx->pc = 0x2BEAE8u;
        goto label_2beae8;
    }
    ctx->pc = 0x2BEAE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BEAE8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BEAE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BEAE8u; }
            if (ctx->pc != 0x2BEAE8u) { return; }
        }
        }
    }
    ctx->pc = 0x2BEAE8u;
label_2beae8:
    // 0x2beae8: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2beaec:
    if (ctx->pc == 0x2BEAECu) {
        ctx->pc = 0x2BEAECu;
            // 0x2beaec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BEAF0u;
        goto label_2beaf0;
    }
    ctx->pc = 0x2BEAE8u;
    {
        const bool branch_taken_0x2beae8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2beae8) {
            ctx->pc = 0x2BEAECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEAE8u;
            // 0x2beaec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BEB10u;
            goto label_2beb10;
        }
    }
    ctx->pc = 0x2BEAF0u;
label_2beaf0:
    // 0x2beaf0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2beaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2beaf4:
    // 0x2beaf4: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2beaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2beaf8:
    // 0x2beaf8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2beafc:
    if (ctx->pc == 0x2BEAFCu) {
        ctx->pc = 0x2BEAFCu;
            // 0x2beafc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2BEB00u;
        goto label_2beb00;
    }
    ctx->pc = 0x2BEAF8u;
    {
        const bool branch_taken_0x2beaf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEAF8u;
            // 0x2beafc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beaf8) {
            ctx->pc = 0x2BEB0Cu;
            goto label_2beb0c;
        }
    }
    ctx->pc = 0x2BEB00u;
label_2beb00:
    // 0x2beb00: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2beb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2beb04:
    // 0x2beb04: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2beb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2beb08:
    // 0x2beb08: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2beb08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2beb0c:
    // 0x2beb0c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2beb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2beb10:
    // 0x2beb10: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2beb10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2beb14:
    // 0x2beb14: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2beb18:
    if (ctx->pc == 0x2BEB18u) {
        ctx->pc = 0x2BEB18u;
            // 0x2beb18: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BEB1Cu;
        goto label_2beb1c;
    }
    ctx->pc = 0x2BEB14u;
    {
        const bool branch_taken_0x2beb14 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2beb14) {
            ctx->pc = 0x2BEB18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEB14u;
            // 0x2beb18: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BEB28u;
            goto label_2beb28;
        }
    }
    ctx->pc = 0x2BEB1Cu;
label_2beb1c:
    // 0x2beb1c: 0xc0400a8  jal         func_1002A0
label_2beb20:
    if (ctx->pc == 0x2BEB20u) {
        ctx->pc = 0x2BEB20u;
            // 0x2beb20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BEB24u;
        goto label_2beb24;
    }
    ctx->pc = 0x2BEB1Cu;
    SET_GPR_U32(ctx, 31, 0x2BEB24u);
    ctx->pc = 0x2BEB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEB1Cu;
            // 0x2beb20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEB24u; }
        if (ctx->pc != 0x2BEB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEB24u; }
        if (ctx->pc != 0x2BEB24u) { return; }
    }
    ctx->pc = 0x2BEB24u;
label_2beb24:
    // 0x2beb24: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2beb24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2beb28:
    // 0x2beb28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2beb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2beb2c:
    // 0x2beb2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2beb2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2beb30:
    // 0x2beb30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2beb30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2beb34:
    // 0x2beb34: 0x3e00008  jr          $ra
label_2beb38:
    if (ctx->pc == 0x2BEB38u) {
        ctx->pc = 0x2BEB38u;
            // 0x2beb38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BEB3Cu;
        goto label_2beb3c;
    }
    ctx->pc = 0x2BEB34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEB34u;
            // 0x2beb38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BEB3Cu;
label_2beb3c:
    // 0x2beb3c: 0x0  nop
    ctx->pc = 0x2beb3cu;
    // NOP
}
