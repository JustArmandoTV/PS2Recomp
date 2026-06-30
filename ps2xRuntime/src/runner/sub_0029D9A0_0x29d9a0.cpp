#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029D9A0
// Address: 0x29d9a0 - 0x29da70
void sub_0029D9A0_0x29d9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D9A0_0x29d9a0");
#endif

    switch (ctx->pc) {
        case 0x29d9ecu: goto label_29d9ec;
        case 0x29da04u: goto label_29da04;
        case 0x29da34u: goto label_29da34;
        default: break;
    }

    ctx->pc = 0x29d9a0u;

    // 0x29d9a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29d9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29d9a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29d9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29d9a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29d9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29d9ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29d9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29d9b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29d9b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d9b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29d9b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29d9bc: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x29d9bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29d9c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D9C0u;
    {
        const bool branch_taken_0x29d9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D9C0u;
            // 0x29d9c4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d9c0) {
            ctx->pc = 0x29D9D4u;
            goto label_29d9d4;
        }
    }
    ctx->pc = 0x29D9C8u;
    // 0x29d9c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x29d9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29d9cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29D9CCu;
    {
        const bool branch_taken_0x29d9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D9CCu;
            // 0x29d9d0: 0x28040  sll         $s0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d9cc) {
            ctx->pc = 0x29D9D8u;
            goto label_29d9d8;
        }
    }
    ctx->pc = 0x29D9D4u;
label_29d9d4:
    // 0x29d9d4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x29d9d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29d9d8:
    // 0x29d9d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x29d9dc: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x29d9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29d9e0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29d9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x29d9e4: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x29D9E4u;
    SET_GPR_U32(ctx, 31, 0x29D9ECu);
    ctx->pc = 0x29D9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D9E4u;
            // 0x29d9e8: 0x2122818  mult        $a1, $s0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D9ECu; }
        if (ctx->pc != 0x29D9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D9ECu; }
        if (ctx->pc != 0x29D9ECu) { return; }
    }
    ctx->pc = 0x29D9ECu;
label_29d9ec:
    // 0x29d9ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29d9ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d9f0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x29d9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29d9f4: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x29d9f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x29d9f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29d9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d9fc: 0xc04a508  jal         func_129420
    ctx->pc = 0x29D9FCu;
    SET_GPR_U32(ctx, 31, 0x29DA04u);
    ctx->pc = 0x29DA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D9FCu;
            // 0x29da00: 0x523018  mult        $a2, $v0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DA04u; }
        if (ctx->pc != 0x29DA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DA04u; }
        if (ctx->pc != 0x29DA04u) { return; }
    }
    ctx->pc = 0x29DA04u;
label_29da04:
    // 0x29da04: 0x96630006  lhu         $v1, 0x6($s3)
    ctx->pc = 0x29da04u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x29da08: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x29da08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x29da0c: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x29DA0Cu;
    {
        const bool branch_taken_0x29da0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29da0c) {
            ctx->pc = 0x29DA10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29DA0Cu;
            // 0x29da10: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29DA38u;
            goto label_29da38;
        }
    }
    ctx->pc = 0x29DA14u;
    // 0x29da14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29da14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x29da18: 0x96630006  lhu         $v1, 0x6($s3)
    ctx->pc = 0x29da18u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x29da1c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29da1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x29da20: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x29da20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29da24: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x29da24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29da28: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x29da28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x29da2c: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x29DA2Cu;
    SET_GPR_U32(ctx, 31, 0x29DA34u);
    ctx->pc = 0x29DA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DA2Cu;
            // 0x29da30: 0x2423018  mult        $a2, $s2, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DA34u; }
        if (ctx->pc != 0x29DA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DA34u; }
        if (ctx->pc != 0x29DA34u) { return; }
    }
    ctx->pc = 0x29DA34u;
label_29da34:
    // 0x29da34: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x29da34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
label_29da38:
    // 0x29da38: 0x96630006  lhu         $v1, 0x6($s3)
    ctx->pc = 0x29da38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x29da3c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x29da3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x29da40: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x29da40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x29da44: 0xa6630006  sh          $v1, 0x6($s3)
    ctx->pc = 0x29da44u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x29da48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29da48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29da4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29da4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29da50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29da50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29da54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29da54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29da58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29da58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29da5c: 0x3e00008  jr          $ra
    ctx->pc = 0x29DA5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DA5Cu;
            // 0x29da60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29DA64u;
    // 0x29da64: 0x0  nop
    ctx->pc = 0x29da64u;
    // NOP
    // 0x29da68: 0x0  nop
    ctx->pc = 0x29da68u;
    // NOP
    // 0x29da6c: 0x0  nop
    ctx->pc = 0x29da6cu;
    // NOP
}
