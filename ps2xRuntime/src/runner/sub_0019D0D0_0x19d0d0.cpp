#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019D0D0
// Address: 0x19d0d0 - 0x19d1f0
void sub_0019D0D0_0x19d0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D0D0_0x19d0d0");
#endif

    switch (ctx->pc) {
        case 0x19d0e4u: goto label_19d0e4;
        case 0x19d0fcu: goto label_19d0fc;
        case 0x19d110u: goto label_19d110;
        case 0x19d128u: goto label_19d128;
        case 0x19d19cu: goto label_19d19c;
        default: break;
    }

    ctx->pc = 0x19d0d0u;

    // 0x19d0d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x19d0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x19d0d4: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x19d0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x19d0d8: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x19d0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x19d0dc: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19D0DCu;
    SET_GPR_U32(ctx, 31, 0x19D0E4u);
    ctx->pc = 0x19D0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D0DCu;
            // 0x19d0e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0E4u; }
        if (ctx->pc != 0x19D0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0E4u; }
        if (ctx->pc != 0x19D0E4u) { return; }
    }
    ctx->pc = 0x19D0E4u;
label_19d0e4:
    // 0x19d0e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d0e8: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D0E8u;
    {
        const bool branch_taken_0x19d0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19D0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D0E8u;
            // 0x19d0ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d0e8) {
            ctx->pc = 0x19D108u;
            goto label_19d108;
        }
    }
    ctx->pc = 0x19D0F0u;
    // 0x19d0f0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19d0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19d0f4: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19D0F4u;
    SET_GPR_U32(ctx, 31, 0x19D0FCu);
    ctx->pc = 0x19D0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D0F4u;
            // 0x19d0f8: 0x248497f0  addiu       $a0, $a0, -0x6810 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0FCu; }
        if (ctx->pc != 0x19D0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D0FCu; }
        if (ctx->pc != 0x19D0FCu) { return; }
    }
    ctx->pc = 0x19D0FCu;
label_19d0fc:
    // 0x19d0fc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x19D0FCu;
    {
        const bool branch_taken_0x19d0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D0FCu;
            // 0x19d100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d0fc) {
            ctx->pc = 0x19D134u;
            goto label_19d134;
        }
    }
    ctx->pc = 0x19D104u;
    // 0x19d104: 0x0  nop
    ctx->pc = 0x19d104u;
    // NOP
label_19d108:
    // 0x19d108: 0xc0673f2  jal         func_19CFC8
    ctx->pc = 0x19D108u;
    SET_GPR_U32(ctx, 31, 0x19D110u);
    ctx->pc = 0x19CFC8u;
    if (runtime->hasFunction(0x19CFC8u)) {
        auto targetFn = runtime->lookupFunction(0x19CFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D110u; }
        if (ctx->pc != 0x19D110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CFC8_0x19cfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D110u; }
        if (ctx->pc != 0x19D110u) { return; }
    }
    ctx->pc = 0x19D110u;
label_19d110:
    // 0x19d110: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19d110u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d114: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19d114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d118: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D118u;
    {
        const bool branch_taken_0x19d118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D118u;
            // 0x19d11c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d118) {
            ctx->pc = 0x19D134u;
            goto label_19d134;
        }
    }
    ctx->pc = 0x19D120u;
    // 0x19d120: 0xc06d87e  jal         func_1B61F8
    ctx->pc = 0x19D120u;
    SET_GPR_U32(ctx, 31, 0x19D128u);
    ctx->pc = 0x1B61F8u;
    if (runtime->hasFunction(0x1B61F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B61F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D128u; }
        if (ctx->pc != 0x19D128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B61F8_0x1b61f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D128u; }
        if (ctx->pc != 0x19D128u) { return; }
    }
    ctx->pc = 0x19D128u;
label_19d128:
    // 0x19d128: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x19d128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19d12c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d130: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x19d130u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19d134:
    // 0x19d134: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x19d134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19d138: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x19d138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x19d13c: 0x3e00008  jr          $ra
    ctx->pc = 0x19D13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D13Cu;
            // 0x19d140: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D144u;
    // 0x19d144: 0x0  nop
    ctx->pc = 0x19d144u;
    // NOP
    // 0x19d148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d14c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x19d14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19d150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d158: 0x806745e  j           func_19D178
    ctx->pc = 0x19D158u;
    ctx->pc = 0x19D15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D158u;
            // 0x19d15c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D178u;
    goto label_19d178;
    ctx->pc = 0x19D160u;
    // 0x19d160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d164: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x19d164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19d168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d16c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d16cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d170: 0x806745e  j           func_19D178
    ctx->pc = 0x19D170u;
    ctx->pc = 0x19D174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D170u;
            // 0x19d174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D178u;
    goto label_19d178;
    ctx->pc = 0x19D178u;
label_19d178:
    // 0x19d178: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d17c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19d17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19d180: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19d180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d184: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19d184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19d188: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19d188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d18c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19d18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19d190: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19d190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19d194: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19D194u;
    SET_GPR_U32(ctx, 31, 0x19D19Cu);
    ctx->pc = 0x19D198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D194u;
            // 0x19d198: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D19Cu; }
        if (ctx->pc != 0x19D19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D19Cu; }
        if (ctx->pc != 0x19D19Cu) { return; }
    }
    ctx->pc = 0x19D19Cu;
label_19d19c:
    // 0x19d19c: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x19d19cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x19d1a0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19d1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19d1a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d1a8: 0x24849820  addiu       $a0, $a0, -0x67E0
    ctx->pc = 0x19d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940704));
    // 0x19d1ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19d1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d1b0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D1B0u;
    {
        const bool branch_taken_0x19d1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19D1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D1B0u;
            // 0x19d1b4: 0x10302b  sltu        $a2, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d1b0) {
            ctx->pc = 0x19D1D0u;
            goto label_19d1d0;
        }
    }
    ctx->pc = 0x19D1B8u;
    // 0x19d1b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19d1b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d1bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19d1bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19d1c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19d1c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d1c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19d1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19d1c8: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19D1C8u;
    ctx->pc = 0x19D1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D1C8u;
            // 0x19d1cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19D1D0u;
label_19d1d0:
    // 0x19d1d0: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x19d1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x19d1d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19d1d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d1d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19d1d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19d1dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19d1dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d1e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19d1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19d1e4: 0x806d75a  j           func_1B5D68
    ctx->pc = 0x19D1E4u;
    ctx->pc = 0x19D1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D1E4u;
            // 0x19d1e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19D1ECu;
    // 0x19d1ec: 0x0  nop
    ctx->pc = 0x19d1ecu;
    // NOP
}
