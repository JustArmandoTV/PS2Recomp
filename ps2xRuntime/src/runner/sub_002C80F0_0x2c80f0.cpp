#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C80F0
// Address: 0x2c80f0 - 0x2c81f0
void sub_002C80F0_0x2c80f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C80F0_0x2c80f0");
#endif

    switch (ctx->pc) {
        case 0x2c80f0u: goto label_2c80f0;
        case 0x2c80f4u: goto label_2c80f4;
        case 0x2c80f8u: goto label_2c80f8;
        case 0x2c80fcu: goto label_2c80fc;
        case 0x2c8100u: goto label_2c8100;
        case 0x2c8104u: goto label_2c8104;
        case 0x2c8108u: goto label_2c8108;
        case 0x2c810cu: goto label_2c810c;
        case 0x2c8110u: goto label_2c8110;
        case 0x2c8114u: goto label_2c8114;
        case 0x2c8118u: goto label_2c8118;
        case 0x2c811cu: goto label_2c811c;
        case 0x2c8120u: goto label_2c8120;
        case 0x2c8124u: goto label_2c8124;
        case 0x2c8128u: goto label_2c8128;
        case 0x2c812cu: goto label_2c812c;
        case 0x2c8130u: goto label_2c8130;
        case 0x2c8134u: goto label_2c8134;
        case 0x2c8138u: goto label_2c8138;
        case 0x2c813cu: goto label_2c813c;
        case 0x2c8140u: goto label_2c8140;
        case 0x2c8144u: goto label_2c8144;
        case 0x2c8148u: goto label_2c8148;
        case 0x2c814cu: goto label_2c814c;
        case 0x2c8150u: goto label_2c8150;
        case 0x2c8154u: goto label_2c8154;
        case 0x2c8158u: goto label_2c8158;
        case 0x2c815cu: goto label_2c815c;
        case 0x2c8160u: goto label_2c8160;
        case 0x2c8164u: goto label_2c8164;
        case 0x2c8168u: goto label_2c8168;
        case 0x2c816cu: goto label_2c816c;
        case 0x2c8170u: goto label_2c8170;
        case 0x2c8174u: goto label_2c8174;
        case 0x2c8178u: goto label_2c8178;
        case 0x2c817cu: goto label_2c817c;
        case 0x2c8180u: goto label_2c8180;
        case 0x2c8184u: goto label_2c8184;
        case 0x2c8188u: goto label_2c8188;
        case 0x2c818cu: goto label_2c818c;
        case 0x2c8190u: goto label_2c8190;
        case 0x2c8194u: goto label_2c8194;
        case 0x2c8198u: goto label_2c8198;
        case 0x2c819cu: goto label_2c819c;
        case 0x2c81a0u: goto label_2c81a0;
        case 0x2c81a4u: goto label_2c81a4;
        case 0x2c81a8u: goto label_2c81a8;
        case 0x2c81acu: goto label_2c81ac;
        case 0x2c81b0u: goto label_2c81b0;
        case 0x2c81b4u: goto label_2c81b4;
        case 0x2c81b8u: goto label_2c81b8;
        case 0x2c81bcu: goto label_2c81bc;
        case 0x2c81c0u: goto label_2c81c0;
        case 0x2c81c4u: goto label_2c81c4;
        case 0x2c81c8u: goto label_2c81c8;
        case 0x2c81ccu: goto label_2c81cc;
        case 0x2c81d0u: goto label_2c81d0;
        case 0x2c81d4u: goto label_2c81d4;
        case 0x2c81d8u: goto label_2c81d8;
        case 0x2c81dcu: goto label_2c81dc;
        case 0x2c81e0u: goto label_2c81e0;
        case 0x2c81e4u: goto label_2c81e4;
        case 0x2c81e8u: goto label_2c81e8;
        case 0x2c81ecu: goto label_2c81ec;
        default: break;
    }

    ctx->pc = 0x2c80f0u;

label_2c80f0:
    // 0x2c80f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c80f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c80f4:
    // 0x2c80f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c80f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c80f8:
    // 0x2c80f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c80f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c80fc:
    // 0x2c80fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c80fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c8100:
    // 0x2c8100: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c8100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c8104:
    // 0x2c8104: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_2c8108:
    if (ctx->pc == 0x2C8108u) {
        ctx->pc = 0x2C8108u;
            // 0x2c8108: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C810Cu;
        goto label_2c810c;
    }
    ctx->pc = 0x2C8104u;
    {
        const bool branch_taken_0x2c8104 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8104u;
            // 0x2c8108: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8104) {
            ctx->pc = 0x2C813Cu;
            goto label_2c813c;
        }
    }
    ctx->pc = 0x2C810Cu;
label_2c810c:
    // 0x2c810c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2c810cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2c8110:
    // 0x2c8110: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2c8114:
    if (ctx->pc == 0x2C8114u) {
        ctx->pc = 0x2C8114u;
            // 0x2c8114: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C8118u;
        goto label_2c8118;
    }
    ctx->pc = 0x2C8110u;
    {
        const bool branch_taken_0x2c8110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8110) {
            ctx->pc = 0x2C8114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8110u;
            // 0x2c8114: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8128u;
            goto label_2c8128;
        }
    }
    ctx->pc = 0x2C8118u;
label_2c8118:
    // 0x2c8118: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c8118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c811c:
    // 0x2c811c: 0xc0407c0  jal         func_101F00
label_2c8120:
    if (ctx->pc == 0x2C8120u) {
        ctx->pc = 0x2C8120u;
            // 0x2c8120: 0x24a5ab30  addiu       $a1, $a1, -0x54D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945584));
        ctx->pc = 0x2C8124u;
        goto label_2c8124;
    }
    ctx->pc = 0x2C811Cu;
    SET_GPR_U32(ctx, 31, 0x2C8124u);
    ctx->pc = 0x2C8120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C811Cu;
            // 0x2c8120: 0x24a5ab30  addiu       $a1, $a1, -0x54D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8124u; }
        if (ctx->pc != 0x2C8124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8124u; }
        if (ctx->pc != 0x2C8124u) { return; }
    }
    ctx->pc = 0x2C8124u;
label_2c8124:
    // 0x2c8124: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c8124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c8128:
    // 0x2c8128: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c8128u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c812c:
    // 0x2c812c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2c8130:
    if (ctx->pc == 0x2C8130u) {
        ctx->pc = 0x2C8130u;
            // 0x2c8130: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x2C8134u;
        goto label_2c8134;
    }
    ctx->pc = 0x2C812Cu;
    {
        const bool branch_taken_0x2c812c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C8130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C812Cu;
            // 0x2c8130: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c812c) {
            ctx->pc = 0x2C813Cu;
            goto label_2c813c;
        }
    }
    ctx->pc = 0x2C8134u;
label_2c8134:
    // 0x2c8134: 0xc0400a8  jal         func_1002A0
label_2c8138:
    if (ctx->pc == 0x2C8138u) {
        ctx->pc = 0x2C8138u;
            // 0x2c8138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C813Cu;
        goto label_2c813c;
    }
    ctx->pc = 0x2C8134u;
    SET_GPR_U32(ctx, 31, 0x2C813Cu);
    ctx->pc = 0x2C8138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8134u;
            // 0x2c8138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C813Cu; }
        if (ctx->pc != 0x2C813Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C813Cu; }
        if (ctx->pc != 0x2C813Cu) { return; }
    }
    ctx->pc = 0x2C813Cu;
label_2c813c:
    // 0x2c813c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c813cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c8140:
    // 0x2c8140: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c8140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c8144:
    // 0x2c8144: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c8144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c8148:
    // 0x2c8148: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c814c:
    // 0x2c814c: 0x3e00008  jr          $ra
label_2c8150:
    if (ctx->pc == 0x2C8150u) {
        ctx->pc = 0x2C8150u;
            // 0x2c8150: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C8154u;
        goto label_2c8154;
    }
    ctx->pc = 0x2C814Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C814Cu;
            // 0x2c8150: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8154u;
label_2c8154:
    // 0x2c8154: 0x0  nop
    ctx->pc = 0x2c8154u;
    // NOP
label_2c8158:
    // 0x2c8158: 0x0  nop
    ctx->pc = 0x2c8158u;
    // NOP
label_2c815c:
    // 0x2c815c: 0x0  nop
    ctx->pc = 0x2c815cu;
    // NOP
label_2c8160:
    // 0x2c8160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c8160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c8164:
    // 0x2c8164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c8164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c8168:
    // 0x2c8168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c8168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c816c:
    // 0x2c816c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c816cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c8170:
    // 0x2c8170: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c8170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c8174:
    // 0x2c8174: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_2c8178:
    if (ctx->pc == 0x2C8178u) {
        ctx->pc = 0x2C8178u;
            // 0x2c8178: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C817Cu;
        goto label_2c817c;
    }
    ctx->pc = 0x2C8174u;
    {
        const bool branch_taken_0x2c8174 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8174u;
            // 0x2c8178: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8174) {
            ctx->pc = 0x2C81D4u;
            goto label_2c81d4;
        }
    }
    ctx->pc = 0x2C817Cu;
label_2c817c:
    // 0x2c817c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c817cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c8180:
    // 0x2c8180: 0x24420750  addiu       $v0, $v0, 0x750
    ctx->pc = 0x2c8180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1872));
label_2c8184:
    // 0x2c8184: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c8184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c8188:
    // 0x2c8188: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c8188u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c818c:
    // 0x2c818c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2c818cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2c8190:
    // 0x2c8190: 0x320f809  jalr        $t9
label_2c8194:
    if (ctx->pc == 0x2C8194u) {
        ctx->pc = 0x2C8198u;
        goto label_2c8198;
    }
    ctx->pc = 0x2C8190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C8198u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C8198u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C8198u; }
            if (ctx->pc != 0x2C8198u) { return; }
        }
        }
    }
    ctx->pc = 0x2C8198u;
label_2c8198:
    // 0x2c8198: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2c819c:
    if (ctx->pc == 0x2C819Cu) {
        ctx->pc = 0x2C819Cu;
            // 0x2c819c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C81A0u;
        goto label_2c81a0;
    }
    ctx->pc = 0x2C8198u;
    {
        const bool branch_taken_0x2c8198 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8198) {
            ctx->pc = 0x2C819Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8198u;
            // 0x2c819c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C81C0u;
            goto label_2c81c0;
        }
    }
    ctx->pc = 0x2C81A0u;
label_2c81a0:
    // 0x2c81a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c81a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c81a4:
    // 0x2c81a4: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2c81a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2c81a8:
    // 0x2c81a8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2c81ac:
    if (ctx->pc == 0x2C81ACu) {
        ctx->pc = 0x2C81ACu;
            // 0x2c81ac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C81B0u;
        goto label_2c81b0;
    }
    ctx->pc = 0x2C81A8u;
    {
        const bool branch_taken_0x2c81a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C81ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C81A8u;
            // 0x2c81ac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c81a8) {
            ctx->pc = 0x2C81BCu;
            goto label_2c81bc;
        }
    }
    ctx->pc = 0x2C81B0u;
label_2c81b0:
    // 0x2c81b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c81b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c81b4:
    // 0x2c81b4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c81b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c81b8:
    // 0x2c81b8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c81b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c81bc:
    // 0x2c81bc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c81bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c81c0:
    // 0x2c81c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c81c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c81c4:
    // 0x2c81c4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c81c8:
    if (ctx->pc == 0x2C81C8u) {
        ctx->pc = 0x2C81C8u;
            // 0x2c81c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C81CCu;
        goto label_2c81cc;
    }
    ctx->pc = 0x2C81C4u;
    {
        const bool branch_taken_0x2c81c4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c81c4) {
            ctx->pc = 0x2C81C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C81C4u;
            // 0x2c81c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C81D8u;
            goto label_2c81d8;
        }
    }
    ctx->pc = 0x2C81CCu;
label_2c81cc:
    // 0x2c81cc: 0xc0400a8  jal         func_1002A0
label_2c81d0:
    if (ctx->pc == 0x2C81D0u) {
        ctx->pc = 0x2C81D0u;
            // 0x2c81d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C81D4u;
        goto label_2c81d4;
    }
    ctx->pc = 0x2C81CCu;
    SET_GPR_U32(ctx, 31, 0x2C81D4u);
    ctx->pc = 0x2C81D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C81CCu;
            // 0x2c81d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C81D4u; }
        if (ctx->pc != 0x2C81D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C81D4u; }
        if (ctx->pc != 0x2C81D4u) { return; }
    }
    ctx->pc = 0x2C81D4u;
label_2c81d4:
    // 0x2c81d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c81d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c81d8:
    // 0x2c81d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c81d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c81dc:
    // 0x2c81dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c81dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c81e0:
    // 0x2c81e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c81e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c81e4:
    // 0x2c81e4: 0x3e00008  jr          $ra
label_2c81e8:
    if (ctx->pc == 0x2C81E8u) {
        ctx->pc = 0x2C81E8u;
            // 0x2c81e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C81ECu;
        goto label_2c81ec;
    }
    ctx->pc = 0x2C81E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C81E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C81E4u;
            // 0x2c81e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C81ECu;
label_2c81ec:
    // 0x2c81ec: 0x0  nop
    ctx->pc = 0x2c81ecu;
    // NOP
}
