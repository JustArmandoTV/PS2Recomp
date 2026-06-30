#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AA960
// Address: 0x2aa960 - 0x2aaa70
void sub_002AA960_0x2aa960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA960_0x2aa960");
#endif

    switch (ctx->pc) {
        case 0x2aa960u: goto label_2aa960;
        case 0x2aa964u: goto label_2aa964;
        case 0x2aa968u: goto label_2aa968;
        case 0x2aa96cu: goto label_2aa96c;
        case 0x2aa970u: goto label_2aa970;
        case 0x2aa974u: goto label_2aa974;
        case 0x2aa978u: goto label_2aa978;
        case 0x2aa97cu: goto label_2aa97c;
        case 0x2aa980u: goto label_2aa980;
        case 0x2aa984u: goto label_2aa984;
        case 0x2aa988u: goto label_2aa988;
        case 0x2aa98cu: goto label_2aa98c;
        case 0x2aa990u: goto label_2aa990;
        case 0x2aa994u: goto label_2aa994;
        case 0x2aa998u: goto label_2aa998;
        case 0x2aa99cu: goto label_2aa99c;
        case 0x2aa9a0u: goto label_2aa9a0;
        case 0x2aa9a4u: goto label_2aa9a4;
        case 0x2aa9a8u: goto label_2aa9a8;
        case 0x2aa9acu: goto label_2aa9ac;
        case 0x2aa9b0u: goto label_2aa9b0;
        case 0x2aa9b4u: goto label_2aa9b4;
        case 0x2aa9b8u: goto label_2aa9b8;
        case 0x2aa9bcu: goto label_2aa9bc;
        case 0x2aa9c0u: goto label_2aa9c0;
        case 0x2aa9c4u: goto label_2aa9c4;
        case 0x2aa9c8u: goto label_2aa9c8;
        case 0x2aa9ccu: goto label_2aa9cc;
        case 0x2aa9d0u: goto label_2aa9d0;
        case 0x2aa9d4u: goto label_2aa9d4;
        case 0x2aa9d8u: goto label_2aa9d8;
        case 0x2aa9dcu: goto label_2aa9dc;
        case 0x2aa9e0u: goto label_2aa9e0;
        case 0x2aa9e4u: goto label_2aa9e4;
        case 0x2aa9e8u: goto label_2aa9e8;
        case 0x2aa9ecu: goto label_2aa9ec;
        case 0x2aa9f0u: goto label_2aa9f0;
        case 0x2aa9f4u: goto label_2aa9f4;
        case 0x2aa9f8u: goto label_2aa9f8;
        case 0x2aa9fcu: goto label_2aa9fc;
        case 0x2aaa00u: goto label_2aaa00;
        case 0x2aaa04u: goto label_2aaa04;
        case 0x2aaa08u: goto label_2aaa08;
        case 0x2aaa0cu: goto label_2aaa0c;
        case 0x2aaa10u: goto label_2aaa10;
        case 0x2aaa14u: goto label_2aaa14;
        case 0x2aaa18u: goto label_2aaa18;
        case 0x2aaa1cu: goto label_2aaa1c;
        case 0x2aaa20u: goto label_2aaa20;
        case 0x2aaa24u: goto label_2aaa24;
        case 0x2aaa28u: goto label_2aaa28;
        case 0x2aaa2cu: goto label_2aaa2c;
        case 0x2aaa30u: goto label_2aaa30;
        case 0x2aaa34u: goto label_2aaa34;
        case 0x2aaa38u: goto label_2aaa38;
        case 0x2aaa3cu: goto label_2aaa3c;
        case 0x2aaa40u: goto label_2aaa40;
        case 0x2aaa44u: goto label_2aaa44;
        case 0x2aaa48u: goto label_2aaa48;
        case 0x2aaa4cu: goto label_2aaa4c;
        case 0x2aaa50u: goto label_2aaa50;
        case 0x2aaa54u: goto label_2aaa54;
        case 0x2aaa58u: goto label_2aaa58;
        case 0x2aaa5cu: goto label_2aaa5c;
        case 0x2aaa60u: goto label_2aaa60;
        case 0x2aaa64u: goto label_2aaa64;
        case 0x2aaa68u: goto label_2aaa68;
        case 0x2aaa6cu: goto label_2aaa6c;
        default: break;
    }

    ctx->pc = 0x2aa960u;

label_2aa960:
    // 0x2aa960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2aa960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2aa964:
    // 0x2aa964: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2aa964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2aa968:
    // 0x2aa968: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aa968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2aa96c:
    // 0x2aa96c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aa96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2aa970:
    // 0x2aa970: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aa970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2aa974:
    // 0x2aa974: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x2aa974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2aa978:
    // 0x2aa978: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2aa978u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2aa97c:
    // 0x2aa97c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2aa97cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2aa980:
    // 0x2aa980: 0x320f809  jalr        $t9
label_2aa984:
    if (ctx->pc == 0x2AA984u) {
        ctx->pc = 0x2AA988u;
        goto label_2aa988;
    }
    ctx->pc = 0x2AA980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AA988u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AA988u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AA988u; }
            if (ctx->pc != 0x2AA988u) { return; }
        }
        }
    }
    ctx->pc = 0x2AA988u;
label_2aa988:
    // 0x2aa988: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2aa988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2aa98c:
    // 0x2aa98c: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_2aa990:
    if (ctx->pc == 0x2AA990u) {
        ctx->pc = 0x2AA990u;
            // 0x2aa990: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->pc = 0x2AA994u;
        goto label_2aa994;
    }
    ctx->pc = 0x2AA98Cu;
    {
        const bool branch_taken_0x2aa98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa98c) {
            ctx->pc = 0x2AA990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA98Cu;
            // 0x2aa990: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AA9F8u;
            goto label_2aa9f8;
        }
    }
    ctx->pc = 0x2AA994u;
label_2aa994:
    // 0x2aa994: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x2aa994u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2aa998:
    // 0x2aa998: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x2aa998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_2aa99c:
    // 0x2aa99c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2aa99cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2aa9a0:
    // 0x2aa9a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2aa9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2aa9a4:
    // 0x2aa9a4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2aa9a8:
    if (ctx->pc == 0x2AA9A8u) {
        ctx->pc = 0x2AA9ACu;
        goto label_2aa9ac;
    }
    ctx->pc = 0x2AA9A4u;
    {
        const bool branch_taken_0x2aa9a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa9a4) {
            ctx->pc = 0x2AA9C0u;
            goto label_2aa9c0;
        }
    }
    ctx->pc = 0x2AA9ACu;
label_2aa9ac:
    // 0x2aa9ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2aa9acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2aa9b0:
    // 0x2aa9b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2aa9b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2aa9b4:
    // 0x2aa9b4: 0x320f809  jalr        $t9
label_2aa9b8:
    if (ctx->pc == 0x2AA9B8u) {
        ctx->pc = 0x2AA9B8u;
            // 0x2aa9b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2AA9BCu;
        goto label_2aa9bc;
    }
    ctx->pc = 0x2AA9B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AA9BCu);
        ctx->pc = 0x2AA9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA9B4u;
            // 0x2aa9b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AA9BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AA9BCu; }
            if (ctx->pc != 0x2AA9BCu) { return; }
        }
        }
    }
    ctx->pc = 0x2AA9BCu;
label_2aa9bc:
    // 0x2aa9bc: 0x0  nop
    ctx->pc = 0x2aa9bcu;
    // NOP
label_2aa9c0:
    // 0x2aa9c0: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x2aa9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_2aa9c4:
    // 0x2aa9c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2aa9c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2aa9c8:
    // 0x2aa9c8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2aa9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2aa9cc:
    // 0x2aa9cc: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2aa9ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2aa9d0:
    // 0x2aa9d0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2aa9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2aa9d4:
    // 0x2aa9d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2aa9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2aa9d8:
    // 0x2aa9d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2aa9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2aa9dc:
    // 0x2aa9dc: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x2aa9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_2aa9e0:
    // 0x2aa9e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2aa9e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2aa9e4:
    // 0x2aa9e4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2aa9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2aa9e8:
    // 0x2aa9e8: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
label_2aa9ec:
    if (ctx->pc == 0x2AA9ECu) {
        ctx->pc = 0x2AA9ECu;
            // 0x2aa9ec: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x2AA9F0u;
        goto label_2aa9f0;
    }
    ctx->pc = 0x2AA9E8u;
    {
        const bool branch_taken_0x2aa9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa9e8) {
            ctx->pc = 0x2AA9ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA9E8u;
            // 0x2aa9ec: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AA99Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aa99c;
        }
    }
    ctx->pc = 0x2AA9F0u;
label_2aa9f0:
    // 0x2aa9f0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2aa9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_2aa9f4:
    // 0x2aa9f4: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x2aa9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2aa9f8:
    // 0x2aa9f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2aa9f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2aa9fc:
    // 0x2aa9fc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2aa9fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2aaa00:
    // 0x2aaa00: 0x320f809  jalr        $t9
label_2aaa04:
    if (ctx->pc == 0x2AAA04u) {
        ctx->pc = 0x2AAA08u;
        goto label_2aaa08;
    }
    ctx->pc = 0x2AAA00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AAA08u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AAA08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AAA08u; }
            if (ctx->pc != 0x2AAA08u) { return; }
        }
        }
    }
    ctx->pc = 0x2AAA08u;
label_2aaa08:
    // 0x2aaa08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2aaa08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2aaa0c:
    // 0x2aaa0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aaa0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2aaa10:
    // 0x2aaa10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aaa10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2aaa14:
    // 0x2aaa14: 0x3e00008  jr          $ra
label_2aaa18:
    if (ctx->pc == 0x2AAA18u) {
        ctx->pc = 0x2AAA18u;
            // 0x2aaa18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2AAA1Cu;
        goto label_2aaa1c;
    }
    ctx->pc = 0x2AAA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA14u;
            // 0x2aaa18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AAA1Cu;
label_2aaa1c:
    // 0x2aaa1c: 0x0  nop
    ctx->pc = 0x2aaa1cu;
    // NOP
label_2aaa20:
    // 0x2aaa20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aaa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2aaa24:
    // 0x2aaa24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aaa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2aaa28:
    // 0x2aaa28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aaa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2aaa2c:
    // 0x2aaa2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2aaa2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2aaa30:
    // 0x2aaa30: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_2aaa34:
    if (ctx->pc == 0x2AAA34u) {
        ctx->pc = 0x2AAA34u;
            // 0x2aaa34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AAA38u;
        goto label_2aaa38;
    }
    ctx->pc = 0x2AAA30u;
    {
        const bool branch_taken_0x2aaa30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aaa30) {
            ctx->pc = 0x2AAA34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA30u;
            // 0x2aaa34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AAA5Cu;
            goto label_2aaa5c;
        }
    }
    ctx->pc = 0x2AAA38u;
label_2aaa38:
    // 0x2aaa38: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2aaa38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_2aaa3c:
    // 0x2aaa3c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2aaa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2aaa40:
    // 0x2aaa40: 0x2463fcd0  addiu       $v1, $v1, -0x330
    ctx->pc = 0x2aaa40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966480));
label_2aaa44:
    // 0x2aaa44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2aaa44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2aaa48:
    // 0x2aaa48: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2aaa4c:
    if (ctx->pc == 0x2AAA4Cu) {
        ctx->pc = 0x2AAA4Cu;
            // 0x2aaa4c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2AAA50u;
        goto label_2aaa50;
    }
    ctx->pc = 0x2AAA48u;
    {
        const bool branch_taken_0x2aaa48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2AAA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA48u;
            // 0x2aaa4c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaa48) {
            ctx->pc = 0x2AAA58u;
            goto label_2aaa58;
        }
    }
    ctx->pc = 0x2AAA50u;
label_2aaa50:
    // 0x2aaa50: 0xc0400a8  jal         func_1002A0
label_2aaa54:
    if (ctx->pc == 0x2AAA54u) {
        ctx->pc = 0x2AAA58u;
        goto label_2aaa58;
    }
    ctx->pc = 0x2AAA50u;
    SET_GPR_U32(ctx, 31, 0x2AAA58u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAA58u; }
        if (ctx->pc != 0x2AAA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAA58u; }
        if (ctx->pc != 0x2AAA58u) { return; }
    }
    ctx->pc = 0x2AAA58u;
label_2aaa58:
    // 0x2aaa58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2aaa58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2aaa5c:
    // 0x2aaa5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aaa5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2aaa60:
    // 0x2aaa60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aaa60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2aaa64:
    // 0x2aaa64: 0x3e00008  jr          $ra
label_2aaa68:
    if (ctx->pc == 0x2AAA68u) {
        ctx->pc = 0x2AAA68u;
            // 0x2aaa68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2AAA6Cu;
        goto label_2aaa6c;
    }
    ctx->pc = 0x2AAA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA64u;
            // 0x2aaa68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AAA6Cu;
label_2aaa6c:
    // 0x2aaa6c: 0x0  nop
    ctx->pc = 0x2aaa6cu;
    // NOP
}
