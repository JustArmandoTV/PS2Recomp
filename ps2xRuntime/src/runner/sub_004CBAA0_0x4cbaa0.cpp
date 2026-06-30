#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CBAA0
// Address: 0x4cbaa0 - 0x4cbc30
void sub_004CBAA0_0x4cbaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CBAA0_0x4cbaa0");
#endif

    switch (ctx->pc) {
        case 0x4cbaacu: goto label_4cbaac;
        case 0x4cbba0u: goto label_4cbba0;
        case 0x4cbbf8u: goto label_4cbbf8;
        case 0x4cbc10u: goto label_4cbc10;
        default: break;
    }

    ctx->pc = 0x4cbaa0u;

    // 0x4cbaa0: 0x8ca90030  lw          $t1, 0x30($a1)
    ctx->pc = 0x4cbaa0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x4cbaa4: 0x8ca80028  lw          $t0, 0x28($a1)
    ctx->pc = 0x4cbaa4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x4cbaa8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4cbaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4cbaac:
    // 0x4cbaac: 0x8c67c890  lw          $a3, -0x3770($v1)
    ctx->pc = 0x4cbaacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953104)));
    // 0x4cbab0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4cbab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4cbab4: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4cbab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4cbab8: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x4cbab8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x4cbabc: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4cbabcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x4cbac0: 0x1500fffa  bnez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4CBAC0u;
    {
        const bool branch_taken_0x4cbac0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CBAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBAC0u;
            // 0x4cbac4: 0x25290090  addiu       $t1, $t1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbac0) {
            ctx->pc = 0x4CBAACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4cbaac;
        }
    }
    ctx->pc = 0x4CBAC8u;
    // 0x4cbac8: 0x80860068  lb          $a2, 0x68($a0)
    ctx->pc = 0x4cbac8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x4cbacc: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4cbaccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x4cbad0: 0x8ca50030  lw          $a1, 0x30($a1)
    ctx->pc = 0x4cbad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x4cbad4: 0x8c63c898  lw          $v1, -0x3768($v1)
    ctx->pc = 0x4cbad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953112)));
    // 0x4cbad8: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x4cbad8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x4cbadc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4cbadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4cbae0: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x4cbae0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x4cbae4: 0x602027  not         $a0, $v1
    ctx->pc = 0x4cbae4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x4cbae8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4cbae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4cbaec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4cbaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cbaf0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4cbaf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4cbaf4: 0x3e00008  jr          $ra
    ctx->pc = 0x4CBAF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CBAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBAF4u;
            // 0x4cbaf8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CBAFCu;
    // 0x4cbafc: 0x0  nop
    ctx->pc = 0x4cbafcu;
    // NOP
    // 0x4cbb00: 0x8132a20  j           func_4CA880
    ctx->pc = 0x4CBB00u;
    ctx->pc = 0x4CBB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBB00u;
            // 0x4cbb04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CA880u;
    {
        auto targetFn = runtime->lookupFunction(0x4CA880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4CBB08u;
    // 0x4cbb08: 0x0  nop
    ctx->pc = 0x4cbb08u;
    // NOP
    // 0x4cbb0c: 0x0  nop
    ctx->pc = 0x4cbb0cu;
    // NOP
    // 0x4cbb10: 0x81326f4  j           func_4C9BD0
    ctx->pc = 0x4CBB10u;
    ctx->pc = 0x4CBB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBB10u;
            // 0x4cbb14: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C9BD0u;
    {
        auto targetFn = runtime->lookupFunction(0x4C9BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4CBB18u;
    // 0x4cbb18: 0x0  nop
    ctx->pc = 0x4cbb18u;
    // NOP
    // 0x4cbb1c: 0x0  nop
    ctx->pc = 0x4cbb1cu;
    // NOP
    // 0x4cbb20: 0x8132910  j           func_4CA440
    ctx->pc = 0x4CBB20u;
    ctx->pc = 0x4CBB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBB20u;
            // 0x4cbb24: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CA440u;
    {
        auto targetFn = runtime->lookupFunction(0x4CA440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4CBB28u;
    // 0x4cbb28: 0x0  nop
    ctx->pc = 0x4cbb28u;
    // NOP
    // 0x4cbb2c: 0x0  nop
    ctx->pc = 0x4cbb2cu;
    // NOP
    // 0x4cbb30: 0x8132734  j           func_4C9CD0
    ctx->pc = 0x4CBB30u;
    ctx->pc = 0x4CBB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBB30u;
            // 0x4cbb34: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C9CD0u;
    {
        auto targetFn = runtime->lookupFunction(0x4C9CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4CBB38u;
    // 0x4cbb38: 0x0  nop
    ctx->pc = 0x4cbb38u;
    // NOP
    // 0x4cbb3c: 0x0  nop
    ctx->pc = 0x4cbb3cu;
    // NOP
    // 0x4cbb40: 0x81328a4  j           func_4CA290
    ctx->pc = 0x4CBB40u;
    ctx->pc = 0x4CBB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBB40u;
            // 0x4cbb44: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CA290u;
    {
        auto targetFn = runtime->lookupFunction(0x4CA290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4CBB48u;
    // 0x4cbb48: 0x0  nop
    ctx->pc = 0x4cbb48u;
    // NOP
    // 0x4cbb4c: 0x0  nop
    ctx->pc = 0x4cbb4cu;
    // NOP
    // 0x4cbb50: 0x8132644  j           func_4C9910
    ctx->pc = 0x4CBB50u;
    ctx->pc = 0x4CBB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBB50u;
            // 0x4cbb54: 0x2484ff90  addiu       $a0, $a0, -0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C9910u;
    {
        auto targetFn = runtime->lookupFunction(0x4C9910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4CBB58u;
    // 0x4cbb58: 0x0  nop
    ctx->pc = 0x4cbb58u;
    // NOP
    // 0x4cbb5c: 0x0  nop
    ctx->pc = 0x4cbb5cu;
    // NOP
    // 0x4cbb60: 0x8132644  j           func_4C9910
    ctx->pc = 0x4CBB60u;
    ctx->pc = 0x4CBB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBB60u;
            // 0x4cbb64: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C9910u;
    {
        auto targetFn = runtime->lookupFunction(0x4C9910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4CBB68u;
    // 0x4cbb68: 0x0  nop
    ctx->pc = 0x4cbb68u;
    // NOP
    // 0x4cbb6c: 0x0  nop
    ctx->pc = 0x4cbb6cu;
    // NOP
    // 0x4cbb70: 0x8132964  j           func_4CA590
    ctx->pc = 0x4CBB70u;
    ctx->pc = 0x4CBB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBB70u;
            // 0x4cbb74: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CA590u;
    {
        auto targetFn = runtime->lookupFunction(0x4CA590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4CBB78u;
    // 0x4cbb78: 0x0  nop
    ctx->pc = 0x4cbb78u;
    // NOP
    // 0x4cbb7c: 0x0  nop
    ctx->pc = 0x4cbb7cu;
    // NOP
    // 0x4cbb80: 0x8c850074  lw          $a1, 0x74($a0)
    ctx->pc = 0x4cbb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x4cbb84: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x4cbb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x4cbb88: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4cbb88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cbb8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4cbb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4cbb90: 0xaca40050  sw          $a0, 0x50($a1)
    ctx->pc = 0x4cbb90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 4));
    // 0x4cbb94: 0xa0a3004c  sb          $v1, 0x4C($a1)
    ctx->pc = 0x4cbb94u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 76), (uint8_t)GPR_U32(ctx, 3));
    // 0x4cbb98: 0x3e00008  jr          $ra
    ctx->pc = 0x4CBB98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CBB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBB98u;
            // 0x4cbb9c: 0xa0a00058  sb          $zero, 0x58($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 88), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CBBA0u;
label_4cbba0:
    // 0x4cbba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cbba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4cbba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4cbba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4cbba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cbba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4cbbac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cbbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4cbbb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4cbbb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cbbb4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4CBBB4u;
    {
        const bool branch_taken_0x4cbbb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBBB4u;
            // 0x4cbbb8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbbb4) {
            ctx->pc = 0x4CBC10u;
            goto label_4cbc10;
        }
    }
    ctx->pc = 0x4CBBBCu;
    // 0x4cbbbc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4cbbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4cbbc0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4cbbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4cbbc4: 0x24631b80  addiu       $v1, $v1, 0x1B80
    ctx->pc = 0x4cbbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7040));
    // 0x4cbbc8: 0x24421bb8  addiu       $v0, $v0, 0x1BB8
    ctx->pc = 0x4cbbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7096));
    // 0x4cbbcc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4cbbccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4cbbd0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4CBBD0u;
    {
        const bool branch_taken_0x4cbbd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBBD0u;
            // 0x4cbbd4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbbd0) {
            ctx->pc = 0x4CBBF8u;
            goto label_4cbbf8;
        }
    }
    ctx->pc = 0x4CBBD8u;
    // 0x4cbbd8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4cbbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4cbbdc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4cbbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4cbbe0: 0x24632030  addiu       $v1, $v1, 0x2030
    ctx->pc = 0x4cbbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8240));
    // 0x4cbbe4: 0x24422068  addiu       $v0, $v0, 0x2068
    ctx->pc = 0x4cbbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8296));
    // 0x4cbbe8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4cbbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4cbbec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4cbbecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cbbf0: 0xc0af328  jal         func_2BCCA0
    ctx->pc = 0x4CBBF0u;
    SET_GPR_U32(ctx, 31, 0x4CBBF8u);
    ctx->pc = 0x4CBBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBBF0u;
            // 0x4cbbf4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BCCA0u;
    if (runtime->hasFunction(0x2BCCA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BCCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBBF8u; }
        if (ctx->pc != 0x4CBBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BCCA0_0x2bcca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBBF8u; }
        if (ctx->pc != 0x4CBBF8u) { return; }
    }
    ctx->pc = 0x4CBBF8u;
label_4cbbf8:
    // 0x4cbbf8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4cbbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4cbbfc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4cbbfcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4cbc00: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CBC00u;
    {
        const bool branch_taken_0x4cbc00 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4cbc00) {
            ctx->pc = 0x4CBC04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBC00u;
            // 0x4cbc04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CBC14u;
            goto label_4cbc14;
        }
    }
    ctx->pc = 0x4CBC08u;
    // 0x4cbc08: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4CBC08u;
    SET_GPR_U32(ctx, 31, 0x4CBC10u);
    ctx->pc = 0x4CBC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBC08u;
            // 0x4cbc0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBC10u; }
        if (ctx->pc != 0x4CBC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CBC10u; }
        if (ctx->pc != 0x4CBC10u) { return; }
    }
    ctx->pc = 0x4CBC10u;
label_4cbc10:
    // 0x4cbc10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4cbc10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4cbc14:
    // 0x4cbc14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4cbc14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cbc18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cbc18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cbc1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cbc1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cbc20: 0x3e00008  jr          $ra
    ctx->pc = 0x4CBC20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CBC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBC20u;
            // 0x4cbc24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CBC28u;
    // 0x4cbc28: 0x0  nop
    ctx->pc = 0x4cbc28u;
    // NOP
    // 0x4cbc2c: 0x0  nop
    ctx->pc = 0x4cbc2cu;
    // NOP
}
