#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00504120
// Address: 0x504120 - 0x5041a0
void sub_00504120_0x504120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00504120_0x504120");
#endif

    switch (ctx->pc) {
        case 0x504120u: goto label_504120;
        case 0x504124u: goto label_504124;
        case 0x504128u: goto label_504128;
        case 0x50412cu: goto label_50412c;
        case 0x504130u: goto label_504130;
        case 0x504134u: goto label_504134;
        case 0x504138u: goto label_504138;
        case 0x50413cu: goto label_50413c;
        case 0x504140u: goto label_504140;
        case 0x504144u: goto label_504144;
        case 0x504148u: goto label_504148;
        case 0x50414cu: goto label_50414c;
        case 0x504150u: goto label_504150;
        case 0x504154u: goto label_504154;
        case 0x504158u: goto label_504158;
        case 0x50415cu: goto label_50415c;
        case 0x504160u: goto label_504160;
        case 0x504164u: goto label_504164;
        case 0x504168u: goto label_504168;
        case 0x50416cu: goto label_50416c;
        case 0x504170u: goto label_504170;
        case 0x504174u: goto label_504174;
        case 0x504178u: goto label_504178;
        case 0x50417cu: goto label_50417c;
        case 0x504180u: goto label_504180;
        case 0x504184u: goto label_504184;
        case 0x504188u: goto label_504188;
        case 0x50418cu: goto label_50418c;
        case 0x504190u: goto label_504190;
        case 0x504194u: goto label_504194;
        case 0x504198u: goto label_504198;
        case 0x50419cu: goto label_50419c;
        default: break;
    }

    ctx->pc = 0x504120u;

label_504120:
    // 0x504120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x504120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_504124:
    // 0x504124: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x504124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_504128:
    // 0x504128: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x504128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_50412c:
    // 0x50412c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50412cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_504130:
    // 0x504130: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x504130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_504134:
    // 0x504134: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x504134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_504138:
    // 0x504138: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x504138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_50413c:
    // 0x50413c: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x50413cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_504140:
    // 0x504140: 0x54640008  bnel        $v1, $a0, . + 4 + (0x8 << 2)
label_504144:
    if (ctx->pc == 0x504144u) {
        ctx->pc = 0x504144u;
            // 0x504144: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x504148u;
        goto label_504148;
    }
    ctx->pc = 0x504140u;
    {
        const bool branch_taken_0x504140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x504140) {
            ctx->pc = 0x504144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x504140u;
            // 0x504144: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x504164u;
            goto label_504164;
        }
    }
    ctx->pc = 0x504148u;
label_504148:
    // 0x504148: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x504148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_50414c:
    // 0x50414c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x50414cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_504150:
    // 0x504150: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x504150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_504154:
    // 0x504154: 0x8c630cc4  lw          $v1, 0xCC4($v1)
    ctx->pc = 0x504154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3268)));
label_504158:
    // 0x504158: 0x50640008  beql        $v1, $a0, . + 4 + (0x8 << 2)
label_50415c:
    if (ctx->pc == 0x50415Cu) {
        ctx->pc = 0x50415Cu;
            // 0x50415c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x504160u;
        goto label_504160;
    }
    ctx->pc = 0x504158u;
    {
        const bool branch_taken_0x504158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x504158) {
            ctx->pc = 0x50415Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x504158u;
            // 0x50415c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50417Cu;
            goto label_50417c;
        }
    }
    ctx->pc = 0x504160u;
label_504160:
    // 0x504160: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x504160u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_504164:
    // 0x504164: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x504164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_504168:
    // 0x504168: 0x320f809  jalr        $t9
label_50416c:
    if (ctx->pc == 0x50416Cu) {
        ctx->pc = 0x50416Cu;
            // 0x50416c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x504170u;
        goto label_504170;
    }
    ctx->pc = 0x504168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x504170u);
        ctx->pc = 0x50416Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504168u;
            // 0x50416c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x504170u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x504170u; }
            if (ctx->pc != 0x504170u) { return; }
        }
        }
    }
    ctx->pc = 0x504170u;
label_504170:
    // 0x504170: 0xc145ec4  jal         func_517B10
label_504174:
    if (ctx->pc == 0x504174u) {
        ctx->pc = 0x504174u;
            // 0x504174: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x504178u;
        goto label_504178;
    }
    ctx->pc = 0x504170u;
    SET_GPR_U32(ctx, 31, 0x504178u);
    ctx->pc = 0x504174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504170u;
            // 0x504174: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x517B10u;
    if (runtime->hasFunction(0x517B10u)) {
        auto targetFn = runtime->lookupFunction(0x517B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504178u; }
        if (ctx->pc != 0x504178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00517B10_0x517b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504178u; }
        if (ctx->pc != 0x504178u) { return; }
    }
    ctx->pc = 0x504178u;
label_504178:
    // 0x504178: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x504178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_50417c:
    // 0x50417c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50417cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_504180:
    // 0x504180: 0x3e00008  jr          $ra
label_504184:
    if (ctx->pc == 0x504184u) {
        ctx->pc = 0x504184u;
            // 0x504184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x504188u;
        goto label_504188;
    }
    ctx->pc = 0x504180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x504184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504180u;
            // 0x504184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x504188u;
label_504188:
    // 0x504188: 0x0  nop
    ctx->pc = 0x504188u;
    // NOP
label_50418c:
    // 0x50418c: 0x0  nop
    ctx->pc = 0x50418cu;
    // NOP
label_504190:
    // 0x504190: 0x3e00008  jr          $ra
label_504194:
    if (ctx->pc == 0x504194u) {
        ctx->pc = 0x504198u;
        goto label_504198;
    }
    ctx->pc = 0x504190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x504198u;
label_504198:
    // 0x504198: 0x0  nop
    ctx->pc = 0x504198u;
    // NOP
label_50419c:
    // 0x50419c: 0x0  nop
    ctx->pc = 0x50419cu;
    // NOP
}
