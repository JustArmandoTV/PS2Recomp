#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021D0E0
// Address: 0x21d0e0 - 0x21d1b0
void sub_0021D0E0_0x21d0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D0E0_0x21d0e0");
#endif

    switch (ctx->pc) {
        case 0x21d12cu: goto label_21d12c;
        case 0x21d13cu: goto label_21d13c;
        case 0x21d144u: goto label_21d144;
        default: break;
    }

    ctx->pc = 0x21d0e0u;

    // 0x21d0e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21d0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21d0e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21d0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21d0e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21d0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21d0ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21d0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21d0f0: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x21d0f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21d0f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21d0f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d0f8: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x21d0f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x21d0fc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x21d0fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21d100: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x21D100u;
    {
        const bool branch_taken_0x21d100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D100u;
            // 0x21d104: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d100) {
            ctx->pc = 0x21D148u;
            goto label_21d148;
        }
    }
    ctx->pc = 0x21D108u;
    // 0x21d108: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x21d108u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x21d10c: 0x54200001  bnel        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21D10Cu;
    {
        const bool branch_taken_0x21d10c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21d10c) {
            ctx->pc = 0x21D110u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21D10Cu;
            // 0x21d110: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21D114u;
            goto label_21d114;
        }
    }
    ctx->pc = 0x21D114u;
label_21d114:
    // 0x21d114: 0x632021  addu        $a0, $v1, $v1
    ctx->pc = 0x21d114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 3)));
    // 0x21d118: 0x28810100  slti        $at, $a0, 0x100
    ctx->pc = 0x21d118u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x21d11c: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21D11Cu;
    {
        const bool branch_taken_0x21d11c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d11c) {
            ctx->pc = 0x21D120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21D11Cu;
            // 0x21d120: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21D124u;
            goto label_21d124;
        }
    }
    ctx->pc = 0x21D124u;
label_21d124:
    // 0x21d124: 0xc0873b4  jal         func_21CED0
    ctx->pc = 0x21D124u;
    SET_GPR_U32(ctx, 31, 0x21D12Cu);
    ctx->pc = 0x21CED0u;
    if (runtime->hasFunction(0x21CED0u)) {
        auto targetFn = runtime->lookupFunction(0x21CED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D12Cu; }
        if (ctx->pc != 0x21D12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CED0_0x21ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D12Cu; }
        if (ctx->pc != 0x21D12Cu) { return; }
    }
    ctx->pc = 0x21D12Cu;
label_21d12c:
    // 0x21d12c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21d12cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d130: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21d130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d134: 0xc0873e8  jal         func_21CFA0
    ctx->pc = 0x21D134u;
    SET_GPR_U32(ctx, 31, 0x21D13Cu);
    ctx->pc = 0x21D138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D134u;
            // 0x21d138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CFA0u;
    if (runtime->hasFunction(0x21CFA0u)) {
        auto targetFn = runtime->lookupFunction(0x21CFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D13Cu; }
        if (ctx->pc != 0x21D13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CFA0_0x21cfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D13Cu; }
        if (ctx->pc != 0x21D13Cu) { return; }
    }
    ctx->pc = 0x21D13Cu;
label_21d13c:
    // 0x21d13c: 0xc0873dc  jal         func_21CF70
    ctx->pc = 0x21D13Cu;
    SET_GPR_U32(ctx, 31, 0x21D144u);
    ctx->pc = 0x21D140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D13Cu;
            // 0x21d140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF70u;
    if (runtime->hasFunction(0x21CF70u)) {
        auto targetFn = runtime->lookupFunction(0x21CF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D144u; }
        if (ctx->pc != 0x21D144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CF70_0x21cf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D144u; }
        if (ctx->pc != 0x21D144u) { return; }
    }
    ctx->pc = 0x21D144u;
label_21d144:
    // 0x21d144: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x21d144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21d148:
    // 0x21d148: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x21d148u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21d14c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x21d14cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d150: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21d150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21d154: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x21d154u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x21d158: 0x96040006  lhu         $a0, 0x6($s0)
    ctx->pc = 0x21d158u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x21d15c: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x21d15cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21d160: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x21d160u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x21d164: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x21d164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x21d168: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x21d168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x21d16c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21d170: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21d170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21d174: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21d174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d178: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x21d178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21d17c: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x21d17cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x21d180: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x21d180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x21d184: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x21d184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x21d188: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x21d188u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x21d18c: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x21d18cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x21d190: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21d190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d194: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21d194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21d198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d19c: 0x3e00008  jr          $ra
    ctx->pc = 0x21D19Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D19Cu;
            // 0x21d1a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D1A4u;
    // 0x21d1a4: 0x0  nop
    ctx->pc = 0x21d1a4u;
    // NOP
    // 0x21d1a8: 0x0  nop
    ctx->pc = 0x21d1a8u;
    // NOP
    // 0x21d1ac: 0x0  nop
    ctx->pc = 0x21d1acu;
    // NOP
}
