#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A3110
// Address: 0x1a3110 - 0x1a3258
void sub_001A3110_0x1a3110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3110_0x1a3110");
#endif

    switch (ctx->pc) {
        case 0x1a3148u: goto label_1a3148;
        case 0x1a3154u: goto label_1a3154;
        case 0x1a31d4u: goto label_1a31d4;
        case 0x1a31e4u: goto label_1a31e4;
        case 0x1a3200u: goto label_1a3200;
        case 0x1a320cu: goto label_1a320c;
        case 0x1a3218u: goto label_1a3218;
        case 0x1a3224u: goto label_1a3224;
        case 0x1a322cu: goto label_1a322c;
        case 0x1a3234u: goto label_1a3234;
        case 0x1a323cu: goto label_1a323c;
        default: break;
    }

    ctx->pc = 0x1a3110u;

label_1a3110:
    // 0x1a3110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a3110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a3114: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a3118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a311c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a311cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a3120: 0x26020d88  addiu       $v0, $s0, 0xD88
    ctx->pc = 0x1a3120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
    // 0x1a3124: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a3124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a3128: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a3128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a312c: 0x8e042074  lw          $a0, 0x2074($s0)
    ctx->pc = 0x1a312cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8308)));
    // 0x1a3130: 0x8c4501f8  lw          $a1, 0x1F8($v0)
    ctx->pc = 0x1a3130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 504)));
    // 0x1a3134: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x1a3134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
    // 0x1a3138: 0x14650013  bne         $v1, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A3138u;
    {
        const bool branch_taken_0x1a3138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1A313Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3138u;
            // 0x1a313c: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3138) {
            ctx->pc = 0x1A3188u;
            goto label_1a3188;
        }
    }
    ctx->pc = 0x1A3140u;
    // 0x1a3140: 0xc05ce94  jal         func_173A50
    ctx->pc = 0x1A3140u;
    SET_GPR_U32(ctx, 31, 0x1A3148u);
    ctx->pc = 0x1A3144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3140u;
            // 0x1a3144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173A50u;
    if (runtime->hasFunction(0x173A50u)) {
        auto targetFn = runtime->lookupFunction(0x173A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3148u; }
        if (ctx->pc != 0x1A3148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173A50_0x173a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3148u; }
        if (ctx->pc != 0x1A3148u) { return; }
    }
    ctx->pc = 0x1A3148u;
label_1a3148:
    // 0x1a3148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a314c: 0xc05ceb6  jal         func_173AD8
    ctx->pc = 0x1A314Cu;
    SET_GPR_U32(ctx, 31, 0x1A3154u);
    ctx->pc = 0x1A3150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A314Cu;
            // 0x1a3150: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AD8u;
    if (runtime->hasFunction(0x173AD8u)) {
        auto targetFn = runtime->lookupFunction(0x173AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3154u; }
        if (ctx->pc != 0x1A3154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173AD8_0x173ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3154u; }
        if (ctx->pc != 0x1A3154u) { return; }
    }
    ctx->pc = 0x1A3154u;
label_1a3154:
    // 0x1a3154: 0x5a40000d  blezl       $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x1A3154u;
    {
        const bool branch_taken_0x1a3154 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x1a3154) {
            ctx->pc = 0x1A3158u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3154u;
            // 0x1a3158: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A318Cu;
            goto label_1a318c;
        }
    }
    ctx->pc = 0x1A315Cu;
    // 0x1a315c: 0x5840000b  blezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A315Cu;
    {
        const bool branch_taken_0x1a315c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a315c) {
            ctx->pc = 0x1A3160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A315Cu;
            // 0x1a3160: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A318Cu;
            goto label_1a318c;
        }
    }
    ctx->pc = 0x1A3164u;
    // 0x1a3164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3168: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a316c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a316cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3170: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a3170u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3174: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a3174u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a3178: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a3178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a317c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a317cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a3180: 0x8069a66  j           func_1A6998
    ctx->pc = 0x1A3180u;
    ctx->pc = 0x1A3184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3180u;
            // 0x1a3184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6998u;
    {
        auto targetFn = runtime->lookupFunction(0x1A6998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A3188u;
label_1a3188:
    // 0x1a3188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a318c:
    // 0x1a318c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a318cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a3190: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a3190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3194: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a3194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a3198: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A319Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3198u;
            // 0x1a319c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A31A0u;
    // 0x1a31a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a31a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a31a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a31a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a31a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a31a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a31ac: 0x8068c6e  j           func_1A31B8
    ctx->pc = 0x1A31ACu;
    ctx->pc = 0x1A31B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A31ACu;
            // 0x1a31b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A31B8u;
    goto label_1a31b8;
    ctx->pc = 0x1A31B4u;
    // 0x1a31b4: 0x0  nop
    ctx->pc = 0x1a31b4u;
    // NOP
label_1a31b8:
    // 0x1a31b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a31b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a31bc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1a31bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a31c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a31c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a31c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a31c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a31c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a31c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a31cc: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1A31CCu;
    SET_GPR_U32(ctx, 31, 0x1A31D4u);
    ctx->pc = 0x1A31D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A31CCu;
            // 0x1a31d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A31D4u; }
        if (ctx->pc != 0x1A31D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A31D4u; }
        if (ctx->pc != 0x1A31D4u) { return; }
    }
    ctx->pc = 0x1A31D4u;
label_1a31d4:
    // 0x1a31d4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A31D4u;
    {
        const bool branch_taken_0x1a31d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A31D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A31D4u;
            // 0x1a31d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a31d4) {
            ctx->pc = 0x1A3240u;
            goto label_1a3240;
        }
    }
    ctx->pc = 0x1A31DCu;
    // 0x1a31dc: 0xc068f94  jal         func_1A3E50
    ctx->pc = 0x1A31DCu;
    SET_GPR_U32(ctx, 31, 0x1A31E4u);
    ctx->pc = 0x1A3E50u;
    if (runtime->hasFunction(0x1A3E50u)) {
        auto targetFn = runtime->lookupFunction(0x1A3E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A31E4u; }
        if (ctx->pc != 0x1A31E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3E50_0x1a3e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A31E4u; }
        if (ctx->pc != 0x1A31E4u) { return; }
    }
    ctx->pc = 0x1A31E4u;
label_1a31e4:
    // 0x1a31e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a31e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a31e8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A31E8u;
    {
        const bool branch_taken_0x1a31e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A31ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A31E8u;
            // 0x1a31ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a31e8) {
            ctx->pc = 0x1A31F8u;
            goto label_1a31f8;
        }
    }
    ctx->pc = 0x1A31F0u;
    // 0x1a31f0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A31F0u;
    {
        const bool branch_taken_0x1a31f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A31F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A31F0u;
            // 0x1a31f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a31f0) {
            ctx->pc = 0x1A3240u;
            goto label_1a3240;
        }
    }
    ctx->pc = 0x1A31F8u;
label_1a31f8:
    // 0x1a31f8: 0xc068c96  jal         func_1A3258
    ctx->pc = 0x1A31F8u;
    SET_GPR_U32(ctx, 31, 0x1A3200u);
    ctx->pc = 0x1A3258u;
    if (runtime->hasFunction(0x1A3258u)) {
        auto targetFn = runtime->lookupFunction(0x1A3258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3200u; }
        if (ctx->pc != 0x1A3200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3258_0x1a3258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3200u; }
        if (ctx->pc != 0x1A3200u) { return; }
    }
    ctx->pc = 0x1A3200u;
label_1a3200:
    // 0x1a3200: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3204: 0xc068c98  jal         func_1A3260
    ctx->pc = 0x1A3204u;
    SET_GPR_U32(ctx, 31, 0x1A320Cu);
    ctx->pc = 0x1A3208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3204u;
            // 0x1a3208: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3260u;
    if (runtime->hasFunction(0x1A3260u)) {
        auto targetFn = runtime->lookupFunction(0x1A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A320Cu; }
        if (ctx->pc != 0x1A320Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3260_0x1a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A320Cu; }
        if (ctx->pc != 0x1A320Cu) { return; }
    }
    ctx->pc = 0x1A320Cu;
label_1a320c:
    // 0x1a320c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a320cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3210: 0xc068eae  jal         func_1A3AB8
    ctx->pc = 0x1A3210u;
    SET_GPR_U32(ctx, 31, 0x1A3218u);
    ctx->pc = 0x1A3214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3210u;
            // 0x1a3214: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3AB8u;
    if (runtime->hasFunction(0x1A3AB8u)) {
        auto targetFn = runtime->lookupFunction(0x1A3AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3218u; }
        if (ctx->pc != 0x1A3218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3AB8_0x1a3ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3218u; }
        if (ctx->pc != 0x1A3218u) { return; }
    }
    ctx->pc = 0x1A3218u;
label_1a3218:
    // 0x1a3218: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1a3218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a321c: 0xc068ee2  jal         func_1A3B88
    ctx->pc = 0x1A321Cu;
    SET_GPR_U32(ctx, 31, 0x1A3224u);
    ctx->pc = 0x1A3220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A321Cu;
            // 0x1a3220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3B88u;
    if (runtime->hasFunction(0x1A3B88u)) {
        auto targetFn = runtime->lookupFunction(0x1A3B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3224u; }
        if (ctx->pc != 0x1A3224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3B88_0x1a3b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3224u; }
        if (ctx->pc != 0x1A3224u) { return; }
    }
    ctx->pc = 0x1A3224u;
label_1a3224:
    // 0x1a3224: 0xc068fa2  jal         func_1A3E88
    ctx->pc = 0x1A3224u;
    SET_GPR_U32(ctx, 31, 0x1A322Cu);
    ctx->pc = 0x1A3228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3224u;
            // 0x1a3228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3E88u;
    if (runtime->hasFunction(0x1A3E88u)) {
        auto targetFn = runtime->lookupFunction(0x1A3E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A322Cu; }
        if (ctx->pc != 0x1A322Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3E88_0x1a3e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A322Cu; }
        if (ctx->pc != 0x1A322Cu) { return; }
    }
    ctx->pc = 0x1A322Cu;
label_1a322c:
    // 0x1a322c: 0xc068fda  jal         func_1A3F68
    ctx->pc = 0x1A322Cu;
    SET_GPR_U32(ctx, 31, 0x1A3234u);
    ctx->pc = 0x1A3230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A322Cu;
            // 0x1a3230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F68u;
    if (runtime->hasFunction(0x1A3F68u)) {
        auto targetFn = runtime->lookupFunction(0x1A3F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3234u; }
        if (ctx->pc != 0x1A3234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3F68_0x1a3f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3234u; }
        if (ctx->pc != 0x1A3234u) { return; }
    }
    ctx->pc = 0x1A3234u;
label_1a3234:
    // 0x1a3234: 0xc068c44  jal         func_1A3110
    ctx->pc = 0x1A3234u;
    SET_GPR_U32(ctx, 31, 0x1A323Cu);
    ctx->pc = 0x1A3238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3234u;
            // 0x1a3238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3110u;
    goto label_1a3110;
    ctx->pc = 0x1A323Cu;
label_1a323c:
    // 0x1a323c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a323cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3240:
    // 0x1a3240: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a3240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3244: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a3244u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a3248: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a3248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a324c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A324Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A324Cu;
            // 0x1a3250: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3254u;
    // 0x1a3254: 0x0  nop
    ctx->pc = 0x1a3254u;
    // NOP
}
