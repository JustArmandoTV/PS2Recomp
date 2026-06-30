#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017A0F0
// Address: 0x17a0f0 - 0x17a1a8
void sub_0017A0F0_0x17a0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A0F0_0x17a0f0");
#endif

    switch (ctx->pc) {
        case 0x17a118u: goto label_17a118;
        case 0x17a124u: goto label_17a124;
        case 0x17a144u: goto label_17a144;
        case 0x17a198u: goto label_17a198;
        default: break;
    }

    ctx->pc = 0x17a0f0u;

    // 0x17a0f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a0f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17a0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a0f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17a0f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a0fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17a0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17a100: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17a100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a104: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17a104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17a108: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A108u;
    {
        const bool branch_taken_0x17a108 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A108u;
            // 0x17a10c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a108) {
            ctx->pc = 0x17A11Cu;
            goto label_17a11c;
        }
    }
    ctx->pc = 0x17A110u;
    // 0x17a110: 0xc05e21e  jal         func_178878
    ctx->pc = 0x17A110u;
    SET_GPR_U32(ctx, 31, 0x17A118u);
    ctx->pc = 0x178878u;
    if (runtime->hasFunction(0x178878u)) {
        auto targetFn = runtime->lookupFunction(0x178878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A118u; }
        if (ctx->pc != 0x17A118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178878_0x178878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A118u; }
        if (ctx->pc != 0x17A118u) { return; }
    }
    ctx->pc = 0x17A118u;
label_17a118:
    // 0x17a118: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17a118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a11c:
    // 0x17a11c: 0xc05e828  jal         func_17A0A0
    ctx->pc = 0x17A11Cu;
    SET_GPR_U32(ctx, 31, 0x17A124u);
    ctx->pc = 0x17A120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A11Cu;
            // 0x17a120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A0A0u;
    if (runtime->hasFunction(0x17A0A0u)) {
        auto targetFn = runtime->lookupFunction(0x17A0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A124u; }
        if (ctx->pc != 0x17A124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A0A0_0x17a0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A124u; }
        if (ctx->pc != 0x17A124u) { return; }
    }
    ctx->pc = 0x17A124u;
label_17a124:
    // 0x17a124: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x17a124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x17a128: 0x2472d5e8  addiu       $s2, $v1, -0x2A18
    ctx->pc = 0x17a128u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956520));
    // 0x17a12c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17a12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a130: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17a130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a134: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x17A134u;
    {
        const bool branch_taken_0x17a134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x17A138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A134u;
            // 0x17a138: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a134) {
            ctx->pc = 0x17A170u;
            goto label_17a170;
        }
    }
    ctx->pc = 0x17A13Cu;
    // 0x17a13c: 0xc04afe8  jal         func_12BFA0
    ctx->pc = 0x17A13Cu;
    SET_GPR_U32(ctx, 31, 0x17A144u);
    ctx->pc = 0x12BFA0u;
    if (runtime->hasFunction(0x12BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A144u; }
        if (ctx->pc != 0x17A144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BFA0_0x12bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A144u; }
        if (ctx->pc != 0x17A144u) { return; }
    }
    ctx->pc = 0x17A144u;
label_17a144:
    // 0x17a144: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17a144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17a148: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17a148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a14c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17a14cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a154: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17a154u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a158: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x17a158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a15c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17a15cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a160: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17a160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a164: 0x24a55780  addiu       $a1, $a1, 0x5780
    ctx->pc = 0x17a164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22400));
    // 0x17a168: 0x804ae62  j           func_12B988
    ctx->pc = 0x17A168u;
    ctx->pc = 0x17A16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A168u;
            // 0x17a16c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B988u;
    if (runtime->hasFunction(0x12B988u)) {
        auto targetFn = runtime->lookupFunction(0x12B988u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0012B988_0x12b988(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17A170u;
label_17a170:
    // 0x17a170: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17a170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a174: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17a174u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a178: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17a178u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a17c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17a17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a180: 0x3e00008  jr          $ra
    ctx->pc = 0x17A180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A180u;
            // 0x17a184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A188u;
    // 0x17a188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17a188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a18c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a190: 0xc05e158  jal         func_178560
    ctx->pc = 0x17A190u;
    SET_GPR_U32(ctx, 31, 0x17A198u);
    ctx->pc = 0x178560u;
    if (runtime->hasFunction(0x178560u)) {
        auto targetFn = runtime->lookupFunction(0x178560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A198u; }
        if (ctx->pc != 0x17A198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178560_0x178560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A198u; }
        if (ctx->pc != 0x17A198u) { return; }
    }
    ctx->pc = 0x17A198u;
label_17a198:
    // 0x17a198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a19c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17a19cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17a1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x17A1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A1A0u;
            // 0x17a1a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A1A8u;
}
