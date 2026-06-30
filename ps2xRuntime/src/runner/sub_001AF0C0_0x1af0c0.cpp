#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AF0C0
// Address: 0x1af0c0 - 0x1af220
void sub_001AF0C0_0x1af0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF0C0_0x1af0c0");
#endif

    switch (ctx->pc) {
        case 0x1af0e4u: goto label_1af0e4;
        case 0x1af10cu: goto label_1af10c;
        case 0x1af194u: goto label_1af194;
        case 0x1af1a0u: goto label_1af1a0;
        default: break;
    }

    ctx->pc = 0x1af0c0u;

    // 0x1af0c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1af0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1af0c4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1af0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1af0c8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1af0c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af0cc: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1af0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1af0d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1af0d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af0d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1af0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1af0d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1af0d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af0dc: 0xc069616  jal         func_1A5858
    ctx->pc = 0x1AF0DCu;
    SET_GPR_U32(ctx, 31, 0x1AF0E4u);
    ctx->pc = 0x1AF0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF0DCu;
            // 0x1af0e0: 0x8e252038  lw          $a1, 0x2038($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8248)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5858u;
    if (runtime->hasFunction(0x1A5858u)) {
        auto targetFn = runtime->lookupFunction(0x1A5858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0E4u; }
        if (ctx->pc != 0x1AF0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5858_0x1a5858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0E4u; }
        if (ctx->pc != 0x1AF0E4u) { return; }
    }
    ctx->pc = 0x1AF0E4u;
label_1af0e4:
    // 0x1af0e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF0E4u;
    {
        const bool branch_taken_0x1af0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF0E4u;
            // 0x1af0e8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af0e4) {
            ctx->pc = 0x1AF0F8u;
            goto label_1af0f8;
        }
    }
    ctx->pc = 0x1AF0ECu;
    // 0x1af0ec: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1AF0ECu;
    {
        const bool branch_taken_0x1af0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF0ECu;
            // 0x1af0f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af0ec) {
            ctx->pc = 0x1AF208u;
            goto label_1af208;
        }
    }
    ctx->pc = 0x1AF0F4u;
    // 0x1af0f4: 0x0  nop
    ctx->pc = 0x1af0f4u;
    // NOP
label_1af0f8:
    // 0x1af0f8: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1AF0F8u;
    {
        const bool branch_taken_0x1af0f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF0F8u;
            // 0x1af0fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af0f8) {
            ctx->pc = 0x1AF208u;
            goto label_1af208;
        }
    }
    ctx->pc = 0x1AF100u;
    // 0x1af100: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1af100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af104: 0xc06af8a  jal         func_1ABE28
    ctx->pc = 0x1AF104u;
    SET_GPR_U32(ctx, 31, 0x1AF10Cu);
    ctx->pc = 0x1AF108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF104u;
            // 0x1af108: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABE28u;
    if (runtime->hasFunction(0x1ABE28u)) {
        auto targetFn = runtime->lookupFunction(0x1ABE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF10Cu; }
        if (ctx->pc != 0x1AF10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABE28_0x1abe28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF10Cu; }
        if (ctx->pc != 0x1AF10Cu) { return; }
    }
    ctx->pc = 0x1AF10Cu;
label_1af10c:
    // 0x1af10c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1af10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af110: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AF110u;
    {
        const bool branch_taken_0x1af110 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF110u;
            // 0x1af114: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af110) {
            ctx->pc = 0x1AF138u;
            goto label_1af138;
        }
    }
    ctx->pc = 0x1AF118u;
    // 0x1af118: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1af118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1af11c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1af11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1af120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1af120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1af124: 0x2450fffd  addiu       $s0, $v0, -0x3
    ctx->pc = 0x1af124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1af128: 0x6010018  bgez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1AF128u;
    {
        const bool branch_taken_0x1af128 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1AF12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF128u;
            // 0x1af12c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af128) {
            ctx->pc = 0x1AF18Cu;
            goto label_1af18c;
        }
    }
    ctx->pc = 0x1AF130u;
    // 0x1af130: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1AF130u;
    {
        const bool branch_taken_0x1af130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF130u;
            // 0x1af134: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af130) {
            ctx->pc = 0x1AF18Cu;
            goto label_1af18c;
        }
    }
    ctx->pc = 0x1AF138u;
label_1af138:
    // 0x1af138: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x1af138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1af13c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AF13Cu;
    {
        const bool branch_taken_0x1af13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF13Cu;
            // 0x1af140: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af13c) {
            ctx->pc = 0x1AF15Cu;
            goto label_1af15c;
        }
    }
    ctx->pc = 0x1AF144u;
    // 0x1af144: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1af144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1af148: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1af148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1af14c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1af14cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1af150: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AF150u;
    {
        const bool branch_taken_0x1af150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF150u;
            // 0x1af154: 0x838023  subu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af150) {
            ctx->pc = 0x1AF188u;
            goto label_1af188;
        }
    }
    ctx->pc = 0x1AF158u;
    // 0x1af158: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1af158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1af15c:
    // 0x1af15c: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x1af15cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1af160: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AF160u;
    {
        const bool branch_taken_0x1af160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF160u;
            // 0x1af164: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af160) {
            ctx->pc = 0x1AF188u;
            goto label_1af188;
        }
    }
    ctx->pc = 0x1AF168u;
    // 0x1af168: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1af168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1af16c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1af16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1af170: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1af170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1af174: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AF174u;
    {
        const bool branch_taken_0x1af174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af174) {
            ctx->pc = 0x1AF178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF174u;
            // 0x1af178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AF18Cu;
            goto label_1af18c;
        }
    }
    ctx->pc = 0x1AF17Cu;
    // 0x1af17c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1af17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1af180: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x1af180u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1af184: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1af184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1af188:
    // 0x1af188: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1af188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1af18c:
    // 0x1af18c: 0xc06bc88  jal         func_1AF220
    ctx->pc = 0x1AF18Cu;
    SET_GPR_U32(ctx, 31, 0x1AF194u);
    ctx->pc = 0x1AF190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF18Cu;
            // 0x1af190: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF220u;
    if (runtime->hasFunction(0x1AF220u)) {
        auto targetFn = runtime->lookupFunction(0x1AF220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF194u; }
        if (ctx->pc != 0x1AF194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF220_0x1af220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF194u; }
        if (ctx->pc != 0x1AF194u) { return; }
    }
    ctx->pc = 0x1AF194u;
label_1af194:
    // 0x1af194: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1af194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af198: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1af198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af19c: 0x2a050004  slti        $a1, $s0, 0x4
    ctx->pc = 0x1af19cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_1af1a0:
    // 0x1af1a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1af1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1af1a4: 0x205100b  movn        $v0, $s0, $a1
    ctx->pc = 0x1af1a4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x1af1a8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1af1a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1af1ac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AF1ACu;
    {
        const bool branch_taken_0x1af1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF1ACu;
            // 0x1af1b0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af1ac) {
            ctx->pc = 0x1AF1E4u;
            goto label_1af1e4;
        }
    }
    ctx->pc = 0x1AF1B4u;
    // 0x1af1b4: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x1af1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1af1b8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1af1b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1af1bc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF1BCu;
    {
        const bool branch_taken_0x1af1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af1bc) {
            ctx->pc = 0x1AF1C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF1BCu;
            // 0x1af1c0: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AF1D0u;
            goto label_1af1d0;
        }
    }
    ctx->pc = 0x1AF1C4u;
    // 0x1af1c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1af1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af1c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF1C8u;
    {
        const bool branch_taken_0x1af1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF1C8u;
            // 0x1af1cc: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af1c8) {
            ctx->pc = 0x1AF1D4u;
            goto label_1af1d4;
        }
    }
    ctx->pc = 0x1AF1D0u;
label_1af1d0:
    // 0x1af1d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1af1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1af1d4:
    // 0x1af1d4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1af1d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af1d8: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1AF1D8u;
    {
        const bool branch_taken_0x1af1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF1D8u;
            // 0x1af1dc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af1d8) {
            ctx->pc = 0x1AF1A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1af1a0;
        }
    }
    ctx->pc = 0x1AF1E0u;
    // 0x1af1e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1af1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af1e4:
    // 0x1af1e4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF1E4u;
    {
        const bool branch_taken_0x1af1e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF1E4u;
            // 0x1af1e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af1e4) {
            ctx->pc = 0x1AF1F8u;
            goto label_1af1f8;
        }
    }
    ctx->pc = 0x1AF1ECu;
    // 0x1af1ec: 0xde2209b0  ld          $v0, 0x9B0($s1)
    ctx->pc = 0x1af1ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 2480)));
    // 0x1af1f0: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1af1f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1af1f4: 0xfe2209b0  sd          $v0, 0x9B0($s1)
    ctx->pc = 0x1af1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 2480), GPR_U64(ctx, 2));
label_1af1f8:
    // 0x1af1f8: 0xde2309a8  ld          $v1, 0x9A8($s1)
    ctx->pc = 0x1af1f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 2472)));
    // 0x1af1fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1af1fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af200: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x1af200u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1af204: 0xfe2309a8  sd          $v1, 0x9A8($s1)
    ctx->pc = 0x1af204u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 2472), GPR_U64(ctx, 3));
label_1af208:
    // 0x1af208: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1af208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af20c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1af20cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1af210: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1af210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1af214: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF214u;
            // 0x1af218: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF21Cu;
    // 0x1af21c: 0x0  nop
    ctx->pc = 0x1af21cu;
    // NOP
}
