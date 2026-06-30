#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019C668
// Address: 0x19c668 - 0x19c6e0
void sub_0019C668_0x19c668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C668_0x19c668");
#endif

    switch (ctx->pc) {
        case 0x19c688u: goto label_19c688;
        case 0x19c6a8u: goto label_19c6a8;
        default: break;
    }

    ctx->pc = 0x19c668u;

    // 0x19c668: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c66c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19c66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19c670: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19c670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c674: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19c674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19c678: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c67c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19c67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19c680: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x19C680u;
    SET_GPR_U32(ctx, 31, 0x19C688u);
    ctx->pc = 0x19C684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C680u;
            // 0x19c684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C688u; }
        if (ctx->pc != 0x19C688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C688u; }
        if (ctx->pc != 0x19C688u) { return; }
    }
    ctx->pc = 0x19C688u;
label_19c688:
    // 0x19c688: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19c688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19c68c: 0x8e03041c  lw          $v1, 0x41C($s0)
    ctx->pc = 0x19c68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
    // 0x19c690: 0x24849608  addiu       $a0, $a0, -0x69F8
    ctx->pc = 0x19c690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940168));
    // 0x19c694: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x19c694u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19c698: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x19C698u;
    {
        const bool branch_taken_0x19c698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C698u;
            // 0x19c69c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c698) {
            ctx->pc = 0x19C6C8u;
            goto label_19c6c8;
        }
    }
    ctx->pc = 0x19C6A0u;
    // 0x19c6a0: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19C6A0u;
    SET_GPR_U32(ctx, 31, 0x19C6A8u);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C6A8u; }
        if (ctx->pc != 0x19C6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C6A8u; }
        if (ctx->pc != 0x19C6A8u) { return; }
    }
    ctx->pc = 0x19C6A8u;
label_19c6a8:
    // 0x19c6a8: 0x8e06041c  lw          $a2, 0x41C($s0)
    ctx->pc = 0x19c6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
    // 0x19c6ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19c6acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c6b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19c6b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19c6b4: 0x8e040418  lw          $a0, 0x418($s0)
    ctx->pc = 0x19c6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x19c6b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19c6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c6bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c6bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c6c0: 0x804b156  j           func_12C558
    ctx->pc = 0x19C6C0u;
    ctx->pc = 0x19C6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C6C0u;
            // 0x19c6c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C558u;
    if (runtime->hasFunction(0x12C558u)) {
        auto targetFn = runtime->lookupFunction(0x12C558u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0012C558_0x12c558(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19C6C8u;
label_19c6c8:
    // 0x19c6c8: 0x8e040418  lw          $a0, 0x418($s0)
    ctx->pc = 0x19c6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x19c6cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19c6ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19c6d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c6d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c6d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19c6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c6d8: 0x804afe8  j           func_12BFA0
    ctx->pc = 0x19C6D8u;
    ctx->pc = 0x19C6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C6D8u;
            // 0x19c6dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BFA0u;
    if (runtime->hasFunction(0x12BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12BFA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0012BFA0_0x12bfa0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19C6E0u;
}
