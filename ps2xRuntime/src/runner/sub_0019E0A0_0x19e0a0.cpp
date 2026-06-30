#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019E0A0
// Address: 0x19e0a0 - 0x19e178
void sub_0019E0A0_0x19e0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E0A0_0x19e0a0");
#endif

    switch (ctx->pc) {
        case 0x19e0b4u: goto label_19e0b4;
        case 0x19e0d0u: goto label_19e0d0;
        case 0x19e0e0u: goto label_19e0e0;
        case 0x19e118u: goto label_19e118;
        case 0x19e150u: goto label_19e150;
        default: break;
    }

    ctx->pc = 0x19e0a0u;

    // 0x19e0a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x19e0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x19e0a4: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x19e0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x19e0a8: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x19e0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x19e0ac: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19E0ACu;
    SET_GPR_U32(ctx, 31, 0x19E0B4u);
    ctx->pc = 0x19E0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E0ACu;
            // 0x19e0b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E0B4u; }
        if (ctx->pc != 0x19E0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E0B4u; }
        if (ctx->pc != 0x19E0B4u) { return; }
    }
    ctx->pc = 0x19E0B4u;
label_19e0b4:
    // 0x19e0b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e0b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19e0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e0bc: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E0BCu;
    {
        const bool branch_taken_0x19e0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19E0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E0BCu;
            // 0x19e0c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e0bc) {
            ctx->pc = 0x19E0D8u;
            goto label_19e0d8;
        }
    }
    ctx->pc = 0x19E0C4u;
    // 0x19e0c4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19e0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19e0c8: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19E0C8u;
    SET_GPR_U32(ctx, 31, 0x19E0D0u);
    ctx->pc = 0x19E0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E0C8u;
            // 0x19e0cc: 0x24849c78  addiu       $a0, $a0, -0x6388 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E0D0u; }
        if (ctx->pc != 0x19E0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E0D0u; }
        if (ctx->pc != 0x19E0D0u) { return; }
    }
    ctx->pc = 0x19E0D0u;
label_19e0d0:
    // 0x19e0d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19E0D0u;
    {
        const bool branch_taken_0x19e0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E0D0u;
            // 0x19e0d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e0d0) {
            ctx->pc = 0x19E0E4u;
            goto label_19e0e4;
        }
    }
    ctx->pc = 0x19E0D8u;
label_19e0d8:
    // 0x19e0d8: 0xc067508  jal         func_19D420
    ctx->pc = 0x19E0D8u;
    SET_GPR_U32(ctx, 31, 0x19E0E0u);
    ctx->pc = 0x19D420u;
    if (runtime->hasFunction(0x19D420u)) {
        auto targetFn = runtime->lookupFunction(0x19D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E0E0u; }
        if (ctx->pc != 0x19E0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D420_0x19d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E0E0u; }
        if (ctx->pc != 0x19E0E0u) { return; }
    }
    ctx->pc = 0x19E0E0u;
label_19e0e0:
    // 0x19e0e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_19e0e4:
    // 0x19e0e4: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x19e0e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19e0e8: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x19e0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x19e0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x19E0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E0ECu;
            // 0x19e0f0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E0F4u;
    // 0x19e0f4: 0x0  nop
    ctx->pc = 0x19e0f4u;
    // NOP
    // 0x19e0f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19e0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19e0fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19e0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e100: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19e100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e104: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19e104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19e108: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19e108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19e10c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19e10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19e110: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19E110u;
    SET_GPR_U32(ctx, 31, 0x19E118u);
    ctx->pc = 0x19E114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E110u;
            // 0x19e114: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E118u; }
        if (ctx->pc != 0x19E118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E118u; }
        if (ctx->pc != 0x19E118u) { return; }
    }
    ctx->pc = 0x19E118u;
label_19e118:
    // 0x19e118: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19e118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e11c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e120: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19E120u;
    {
        const bool branch_taken_0x19e120 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x19E124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E120u;
            // 0x19e124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e120) {
            ctx->pc = 0x19E148u;
            goto label_19e148;
        }
    }
    ctx->pc = 0x19E128u;
    // 0x19e128: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19e128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19e12c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19e12cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e130: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19e130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19e134: 0x24849cb0  addiu       $a0, $a0, -0x6350
    ctx->pc = 0x19e134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941872));
    // 0x19e138: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19e138u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e13c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19e13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19e140: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19E140u;
    ctx->pc = 0x19E144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E140u;
            // 0x19e144: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19E148u;
label_19e148:
    // 0x19e148: 0xc0673f2  jal         func_19CFC8
    ctx->pc = 0x19E148u;
    SET_GPR_U32(ctx, 31, 0x19E150u);
    ctx->pc = 0x19CFC8u;
    if (runtime->hasFunction(0x19CFC8u)) {
        auto targetFn = runtime->lookupFunction(0x19CFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E150u; }
        if (ctx->pc != 0x19E150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CFC8_0x19cfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E150u; }
        if (ctx->pc != 0x19E150u) { return; }
    }
    ctx->pc = 0x19E150u;
label_19e150:
    // 0x19e150: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x19e150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19e154: 0x2513026  xor         $a2, $s2, $s1
    ctx->pc = 0x19e154u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 17));
    // 0x19e158: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19e158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19e15c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19e15cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e160: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19e160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e164: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19e164u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e168: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x19e168u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x19e16c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19e16cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19e170: 0x806d75a  j           func_1B5D68
    ctx->pc = 0x19E170u;
    ctx->pc = 0x19E174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E170u;
            // 0x19e174: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19E178u;
}
