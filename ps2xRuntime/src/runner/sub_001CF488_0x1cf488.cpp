#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CF488
// Address: 0x1cf488 - 0x1cf510
void sub_001CF488_0x1cf488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF488_0x1cf488");
#endif

    switch (ctx->pc) {
        case 0x1cf4acu: goto label_1cf4ac;
        case 0x1cf4f0u: goto label_1cf4f0;
        default: break;
    }

    ctx->pc = 0x1cf488u;

    // 0x1cf488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf48c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf48cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf490: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf494: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1cf494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cf498: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cf498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf49c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cf4a0: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x1cf4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1cf4a4: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CF4A4u;
    SET_GPR_U32(ctx, 31, 0x1CF4ACu);
    ctx->pc = 0x1CF4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF4A4u;
            // 0x1cf4a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF4ACu; }
        if (ctx->pc != 0x1CF4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF4ACu; }
        if (ctx->pc != 0x1CF4ACu) { return; }
    }
    ctx->pc = 0x1CF4ACu;
label_1cf4ac:
    // 0x1cf4ac: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF4ACu;
    {
        const bool branch_taken_0x1cf4ac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1cf4ac) {
            ctx->pc = 0x1CF4B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF4ACu;
            // 0x1cf4b0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF4B8u;
            goto label_1cf4b8;
        }
    }
    ctx->pc = 0x1CF4B4u;
    // 0x1cf4b4: 0x2402fde2  addiu       $v0, $zero, -0x21E
    ctx->pc = 0x1cf4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
label_1cf4b8:
    // 0x1cf4b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf4bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf4bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF4C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF4C0u;
            // 0x1cf4c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CF4C8u;
    // 0x1cf4c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf4cc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1cf4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cf4d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf4d4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1cf4d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cf4d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cf4d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf4dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cf4e0: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1cf4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1cf4e4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1cf4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1cf4e8: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CF4E8u;
    SET_GPR_U32(ctx, 31, 0x1CF4F0u);
    ctx->pc = 0x1CF4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF4E8u;
            // 0x1cf4ec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF4F0u; }
        if (ctx->pc != 0x1CF4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF4F0u; }
        if (ctx->pc != 0x1CF4F0u) { return; }
    }
    ctx->pc = 0x1CF4F0u;
label_1cf4f0:
    // 0x1cf4f0: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF4F0u;
    {
        const bool branch_taken_0x1cf4f0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1cf4f0) {
            ctx->pc = 0x1CF4F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF4F0u;
            // 0x1cf4f4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF4FCu;
            goto label_1cf4fc;
        }
    }
    ctx->pc = 0x1CF4F8u;
    // 0x1cf4f8: 0x2402fde2  addiu       $v0, $zero, -0x21E
    ctx->pc = 0x1cf4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
label_1cf4fc:
    // 0x1cf4fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf504: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF504u;
            // 0x1cf508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CF50Cu;
    // 0x1cf50c: 0x0  nop
    ctx->pc = 0x1cf50cu;
    // NOP
}
