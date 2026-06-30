#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2398
// Address: 0x1b2398 - 0x1b2408
void sub_001B2398_0x1b2398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2398_0x1b2398");
#endif

    switch (ctx->pc) {
        case 0x1b23b4u: goto label_1b23b4;
        case 0x1b23ecu: goto label_1b23ec;
        default: break;
    }

    ctx->pc = 0x1b2398u;

    // 0x1b2398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b239c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b239cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b23a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b23a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b23a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b23a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b23a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b23ac: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B23ACu;
    SET_GPR_U32(ctx, 31, 0x1B23B4u);
    ctx->pc = 0x1B23B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B23ACu;
            // 0x1b23b0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B23B4u; }
        if (ctx->pc != 0x1B23B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B23B4u; }
        if (ctx->pc != 0x1B23B4u) { return; }
    }
    ctx->pc = 0x1B23B4u;
label_1b23b4:
    // 0x1b23b4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b23b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b23b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b23b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b23bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B23C0u;
    {
        const bool branch_taken_0x1b23c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B23C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B23C0u;
            // 0x1b23c4: 0x34a50145  ori         $a1, $a1, 0x145 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)325);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b23c0) {
            ctx->pc = 0x1B23E0u;
            goto label_1b23e0;
        }
    }
    ctx->pc = 0x1B23C8u;
    // 0x1b23c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b23c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b23cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b23ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b23d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b23d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b23d4: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B23D4u;
    ctx->pc = 0x1B23D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B23D4u;
            // 0x1b23d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B23DCu;
    // 0x1b23dc: 0x0  nop
    ctx->pc = 0x1b23dcu;
    // NOP
label_1b23e0:
    // 0x1b23e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b23e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23e4: 0xc06d75a  jal         func_1B5D68
    ctx->pc = 0x1B23E4u;
    SET_GPR_U32(ctx, 31, 0x1B23ECu);
    ctx->pc = 0x1B23E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B23E4u;
            // 0x1b23e8: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B23ECu; }
        if (ctx->pc != 0x1B23ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B23ECu; }
        if (ctx->pc != 0x1B23ECu) { return; }
    }
    ctx->pc = 0x1B23ECu;
label_1b23ec:
    // 0x1b23ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b23ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b23f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b23f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b23f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b23f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b23f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b23fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B23FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B23FCu;
            // 0x1b2400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2404u;
    // 0x1b2404: 0x0  nop
    ctx->pc = 0x1b2404u;
    // NOP
}
