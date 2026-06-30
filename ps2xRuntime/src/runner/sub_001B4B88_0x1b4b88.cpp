#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4B88
// Address: 0x1b4b88 - 0x1b4c08
void sub_001B4B88_0x1b4b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4B88_0x1b4b88");
#endif

    switch (ctx->pc) {
        case 0x1b4bc8u: goto label_1b4bc8;
        default: break;
    }

    ctx->pc = 0x1b4b88u;

    // 0x1b4b88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b4b8c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1b4b8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4b90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b4b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b4b94: 0x24710007  addiu       $s1, $v1, 0x7
    ctx->pc = 0x1b4b94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x1b4b98: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x1b4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1b4b9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b4b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b4ba0: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x1b4ba0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x1b4ba4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b4ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b4ba8: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x1b4ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1b4bac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4bb0: 0xc38023  subu        $s0, $a2, $v1
    ctx->pc = 0x1b4bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1b4bb4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b4bb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4bb8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b4bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4bbc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b4bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b4bc0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1B4BC0u;
    SET_GPR_U32(ctx, 31, 0x1B4BC8u);
    ctx->pc = 0x1B4BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4BC0u;
            // 0x1b4bc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4BC8u; }
        if (ctx->pc != 0x1B4BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4BC8u; }
        if (ctx->pc != 0x1B4BC8u) { return; }
    }
    ctx->pc = 0x1B4BC8u;
label_1b4bc8:
    // 0x1b4bc8: 0x2603000f  addiu       $v1, $s0, 0xF
    ctx->pc = 0x1b4bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x1b4bcc: 0x2a020000  slti        $v0, $s0, 0x0
    ctx->pc = 0x1b4bccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1b4bd0: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x1b4bd0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1b4bd4: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1b4bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1b4bd8: 0x108103  sra         $s0, $s0, 4
    ctx->pc = 0x1b4bd8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
    // 0x1b4bdc: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1b4bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x1b4be0: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x1b4be0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x1b4be4: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1b4be4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x1b4be8: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1b4be8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1b4bec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b4becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4bf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b4bf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b4bf4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b4bf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4bf8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b4bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b4bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4BFCu;
            // 0x1b4c00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4C04u;
    // 0x1b4c04: 0x0  nop
    ctx->pc = 0x1b4c04u;
    // NOP
}
