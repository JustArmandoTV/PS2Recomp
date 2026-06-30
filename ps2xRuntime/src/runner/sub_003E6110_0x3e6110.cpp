#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E6110
// Address: 0x3e6110 - 0x3e61b0
void sub_003E6110_0x3e6110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6110_0x3e6110");
#endif

    switch (ctx->pc) {
        case 0x3e6110u: goto label_3e6110;
        case 0x3e6114u: goto label_3e6114;
        case 0x3e6118u: goto label_3e6118;
        case 0x3e611cu: goto label_3e611c;
        case 0x3e6120u: goto label_3e6120;
        case 0x3e6124u: goto label_3e6124;
        case 0x3e6128u: goto label_3e6128;
        case 0x3e612cu: goto label_3e612c;
        case 0x3e6130u: goto label_3e6130;
        case 0x3e6134u: goto label_3e6134;
        case 0x3e6138u: goto label_3e6138;
        case 0x3e613cu: goto label_3e613c;
        case 0x3e6140u: goto label_3e6140;
        case 0x3e6144u: goto label_3e6144;
        case 0x3e6148u: goto label_3e6148;
        case 0x3e614cu: goto label_3e614c;
        case 0x3e6150u: goto label_3e6150;
        case 0x3e6154u: goto label_3e6154;
        case 0x3e6158u: goto label_3e6158;
        case 0x3e615cu: goto label_3e615c;
        case 0x3e6160u: goto label_3e6160;
        case 0x3e6164u: goto label_3e6164;
        case 0x3e6168u: goto label_3e6168;
        case 0x3e616cu: goto label_3e616c;
        case 0x3e6170u: goto label_3e6170;
        case 0x3e6174u: goto label_3e6174;
        case 0x3e6178u: goto label_3e6178;
        case 0x3e617cu: goto label_3e617c;
        case 0x3e6180u: goto label_3e6180;
        case 0x3e6184u: goto label_3e6184;
        case 0x3e6188u: goto label_3e6188;
        case 0x3e618cu: goto label_3e618c;
        case 0x3e6190u: goto label_3e6190;
        case 0x3e6194u: goto label_3e6194;
        case 0x3e6198u: goto label_3e6198;
        case 0x3e619cu: goto label_3e619c;
        case 0x3e61a0u: goto label_3e61a0;
        case 0x3e61a4u: goto label_3e61a4;
        case 0x3e61a8u: goto label_3e61a8;
        case 0x3e61acu: goto label_3e61ac;
        default: break;
    }

    ctx->pc = 0x3e6110u;

label_3e6110:
    // 0x3e6110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e6110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3e6114:
    // 0x3e6114: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e6114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3e6118:
    // 0x3e6118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e6118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e611c:
    // 0x3e611c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e611cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e6120:
    // 0x3e6120: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3e6120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e6124:
    // 0x3e6124: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e6124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e6128:
    // 0x3e6128: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3e6128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3e612c:
    // 0x3e612c: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_3e6130:
    if (ctx->pc == 0x3E6130u) {
        ctx->pc = 0x3E6134u;
        goto label_3e6134;
    }
    ctx->pc = 0x3E612Cu;
    {
        const bool branch_taken_0x3e612c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e612c) {
            ctx->pc = 0x3E6180u;
            goto label_3e6180;
        }
    }
    ctx->pc = 0x3E6134u;
label_3e6134:
    // 0x3e6134: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x3e6134u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_3e6138:
    // 0x3e6138: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x3e6138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_3e613c:
    // 0x3e613c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_3e6140:
    if (ctx->pc == 0x3E6140u) {
        ctx->pc = 0x3E6144u;
        goto label_3e6144;
    }
    ctx->pc = 0x3E613Cu;
    {
        const bool branch_taken_0x3e613c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e613c) {
            ctx->pc = 0x3E6178u;
            goto label_3e6178;
        }
    }
    ctx->pc = 0x3E6144u;
label_3e6144:
    // 0x3e6144: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x3e6144u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_3e6148:
    // 0x3e6148: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x3e6148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
label_3e614c:
    // 0x3e614c: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x3e614cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
label_3e6150:
    // 0x3e6150: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3e6150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3e6154:
    // 0x3e6154: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3e6158:
    if (ctx->pc == 0x3E6158u) {
        ctx->pc = 0x3E615Cu;
        goto label_3e615c;
    }
    ctx->pc = 0x3E6154u;
    {
        const bool branch_taken_0x3e6154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6154) {
            ctx->pc = 0x3E6170u;
            goto label_3e6170;
        }
    }
    ctx->pc = 0x3E615Cu;
label_3e615c:
    // 0x3e615c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e615cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e6160:
    // 0x3e6160: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3e6160u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3e6164:
    // 0x3e6164: 0x320f809  jalr        $t9
label_3e6168:
    if (ctx->pc == 0x3E6168u) {
        ctx->pc = 0x3E6168u;
            // 0x3e6168: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E616Cu;
        goto label_3e616c;
    }
    ctx->pc = 0x3E6164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E616Cu);
        ctx->pc = 0x3E6168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6164u;
            // 0x3e6168: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E616Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E616Cu; }
            if (ctx->pc != 0x3E616Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3E616Cu;
label_3e616c:
    // 0x3e616c: 0x0  nop
    ctx->pc = 0x3e616cu;
    // NOP
label_3e6170:
    // 0x3e6170: 0x10000003  b           . + 4 + (0x3 << 2)
label_3e6174:
    if (ctx->pc == 0x3E6174u) {
        ctx->pc = 0x3E6174u;
            // 0x3e6174: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x3E6178u;
        goto label_3e6178;
    }
    ctx->pc = 0x3E6170u;
    {
        const bool branch_taken_0x3e6170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6170u;
            // 0x3e6174: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6170) {
            ctx->pc = 0x3E6180u;
            goto label_3e6180;
        }
    }
    ctx->pc = 0x3E6178u;
label_3e6178:
    // 0x3e6178: 0xc0f9990  jal         func_3E6640
label_3e617c:
    if (ctx->pc == 0x3E617Cu) {
        ctx->pc = 0x3E6180u;
        goto label_3e6180;
    }
    ctx->pc = 0x3E6178u;
    SET_GPR_U32(ctx, 31, 0x3E6180u);
    ctx->pc = 0x3E6640u;
    if (runtime->hasFunction(0x3E6640u)) {
        auto targetFn = runtime->lookupFunction(0x3E6640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6180u; }
        if (ctx->pc != 0x3E6180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E6640_0x3e6640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6180u; }
        if (ctx->pc != 0x3E6180u) { return; }
    }
    ctx->pc = 0x3E6180u;
label_3e6180:
    // 0x3e6180: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3e6180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3e6184:
    // 0x3e6184: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x3e6184u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_3e6188:
    // 0x3e6188: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
label_3e618c:
    if (ctx->pc == 0x3E618Cu) {
        ctx->pc = 0x3E618Cu;
            // 0x3e618c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x3E6190u;
        goto label_3e6190;
    }
    ctx->pc = 0x3E6188u;
    {
        const bool branch_taken_0x3e6188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E618Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6188u;
            // 0x3e618c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6188) {
            ctx->pc = 0x3E6128u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e6128;
        }
    }
    ctx->pc = 0x3E6190u;
label_3e6190:
    // 0x3e6190: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e6190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3e6194:
    // 0x3e6194: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e6194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e6198:
    // 0x3e6198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e6198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e619c:
    // 0x3e619c: 0x3e00008  jr          $ra
label_3e61a0:
    if (ctx->pc == 0x3E61A0u) {
        ctx->pc = 0x3E61A0u;
            // 0x3e61a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3E61A4u;
        goto label_3e61a4;
    }
    ctx->pc = 0x3E619Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E61A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E619Cu;
            // 0x3e61a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E61A4u;
label_3e61a4:
    // 0x3e61a4: 0x0  nop
    ctx->pc = 0x3e61a4u;
    // NOP
label_3e61a8:
    // 0x3e61a8: 0x0  nop
    ctx->pc = 0x3e61a8u;
    // NOP
label_3e61ac:
    // 0x3e61ac: 0x0  nop
    ctx->pc = 0x3e61acu;
    // NOP
}
