#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C5100
// Address: 0x2c5100 - 0x2c5270
void sub_002C5100_0x2c5100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5100_0x2c5100");
#endif

    switch (ctx->pc) {
        case 0x2c5100u: goto label_2c5100;
        case 0x2c5104u: goto label_2c5104;
        case 0x2c5108u: goto label_2c5108;
        case 0x2c510cu: goto label_2c510c;
        case 0x2c5110u: goto label_2c5110;
        case 0x2c5114u: goto label_2c5114;
        case 0x2c5118u: goto label_2c5118;
        case 0x2c511cu: goto label_2c511c;
        case 0x2c5120u: goto label_2c5120;
        case 0x2c5124u: goto label_2c5124;
        case 0x2c5128u: goto label_2c5128;
        case 0x2c512cu: goto label_2c512c;
        case 0x2c5130u: goto label_2c5130;
        case 0x2c5134u: goto label_2c5134;
        case 0x2c5138u: goto label_2c5138;
        case 0x2c513cu: goto label_2c513c;
        case 0x2c5140u: goto label_2c5140;
        case 0x2c5144u: goto label_2c5144;
        case 0x2c5148u: goto label_2c5148;
        case 0x2c514cu: goto label_2c514c;
        case 0x2c5150u: goto label_2c5150;
        case 0x2c5154u: goto label_2c5154;
        case 0x2c5158u: goto label_2c5158;
        case 0x2c515cu: goto label_2c515c;
        case 0x2c5160u: goto label_2c5160;
        case 0x2c5164u: goto label_2c5164;
        case 0x2c5168u: goto label_2c5168;
        case 0x2c516cu: goto label_2c516c;
        case 0x2c5170u: goto label_2c5170;
        case 0x2c5174u: goto label_2c5174;
        case 0x2c5178u: goto label_2c5178;
        case 0x2c517cu: goto label_2c517c;
        case 0x2c5180u: goto label_2c5180;
        case 0x2c5184u: goto label_2c5184;
        case 0x2c5188u: goto label_2c5188;
        case 0x2c518cu: goto label_2c518c;
        case 0x2c5190u: goto label_2c5190;
        case 0x2c5194u: goto label_2c5194;
        case 0x2c5198u: goto label_2c5198;
        case 0x2c519cu: goto label_2c519c;
        case 0x2c51a0u: goto label_2c51a0;
        case 0x2c51a4u: goto label_2c51a4;
        case 0x2c51a8u: goto label_2c51a8;
        case 0x2c51acu: goto label_2c51ac;
        case 0x2c51b0u: goto label_2c51b0;
        case 0x2c51b4u: goto label_2c51b4;
        case 0x2c51b8u: goto label_2c51b8;
        case 0x2c51bcu: goto label_2c51bc;
        case 0x2c51c0u: goto label_2c51c0;
        case 0x2c51c4u: goto label_2c51c4;
        case 0x2c51c8u: goto label_2c51c8;
        case 0x2c51ccu: goto label_2c51cc;
        case 0x2c51d0u: goto label_2c51d0;
        case 0x2c51d4u: goto label_2c51d4;
        case 0x2c51d8u: goto label_2c51d8;
        case 0x2c51dcu: goto label_2c51dc;
        case 0x2c51e0u: goto label_2c51e0;
        case 0x2c51e4u: goto label_2c51e4;
        case 0x2c51e8u: goto label_2c51e8;
        case 0x2c51ecu: goto label_2c51ec;
        case 0x2c51f0u: goto label_2c51f0;
        case 0x2c51f4u: goto label_2c51f4;
        case 0x2c51f8u: goto label_2c51f8;
        case 0x2c51fcu: goto label_2c51fc;
        case 0x2c5200u: goto label_2c5200;
        case 0x2c5204u: goto label_2c5204;
        case 0x2c5208u: goto label_2c5208;
        case 0x2c520cu: goto label_2c520c;
        case 0x2c5210u: goto label_2c5210;
        case 0x2c5214u: goto label_2c5214;
        case 0x2c5218u: goto label_2c5218;
        case 0x2c521cu: goto label_2c521c;
        case 0x2c5220u: goto label_2c5220;
        case 0x2c5224u: goto label_2c5224;
        case 0x2c5228u: goto label_2c5228;
        case 0x2c522cu: goto label_2c522c;
        case 0x2c5230u: goto label_2c5230;
        case 0x2c5234u: goto label_2c5234;
        case 0x2c5238u: goto label_2c5238;
        case 0x2c523cu: goto label_2c523c;
        case 0x2c5240u: goto label_2c5240;
        case 0x2c5244u: goto label_2c5244;
        case 0x2c5248u: goto label_2c5248;
        case 0x2c524cu: goto label_2c524c;
        case 0x2c5250u: goto label_2c5250;
        case 0x2c5254u: goto label_2c5254;
        case 0x2c5258u: goto label_2c5258;
        case 0x2c525cu: goto label_2c525c;
        case 0x2c5260u: goto label_2c5260;
        case 0x2c5264u: goto label_2c5264;
        case 0x2c5268u: goto label_2c5268;
        case 0x2c526cu: goto label_2c526c;
        default: break;
    }

    ctx->pc = 0x2c5100u;

label_2c5100:
    // 0x2c5100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c5100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c5104:
    // 0x2c5104: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c5104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c5108:
    // 0x2c5108: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c5108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c510c:
    // 0x2c510c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c510cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c5110:
    // 0x2c5110: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c5110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c5114:
    // 0x2c5114: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2c5118:
    if (ctx->pc == 0x2C5118u) {
        ctx->pc = 0x2C5118u;
            // 0x2c5118: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C511Cu;
        goto label_2c511c;
    }
    ctx->pc = 0x2C5114u;
    {
        const bool branch_taken_0x2c5114 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5114u;
            // 0x2c5118: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5114) {
            ctx->pc = 0x2C5158u;
            goto label_2c5158;
        }
    }
    ctx->pc = 0x2C511Cu;
label_2c511c:
    // 0x2c511c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2c5120:
    if (ctx->pc == 0x2C5120u) {
        ctx->pc = 0x2C5120u;
            // 0x2c5120: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C5124u;
        goto label_2c5124;
    }
    ctx->pc = 0x2C511Cu;
    {
        const bool branch_taken_0x2c511c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c511c) {
            ctx->pc = 0x2C5120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C511Cu;
            // 0x2c5120: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5144u;
            goto label_2c5144;
        }
    }
    ctx->pc = 0x2C5124u;
label_2c5124:
    // 0x2c5124: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2c5128:
    if (ctx->pc == 0x2C5128u) {
        ctx->pc = 0x2C512Cu;
        goto label_2c512c;
    }
    ctx->pc = 0x2C5124u;
    {
        const bool branch_taken_0x2c5124 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5124) {
            ctx->pc = 0x2C5140u;
            goto label_2c5140;
        }
    }
    ctx->pc = 0x2C512Cu;
label_2c512c:
    // 0x2c512c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c512cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c5130:
    // 0x2c5130: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c5134:
    if (ctx->pc == 0x2C5134u) {
        ctx->pc = 0x2C5138u;
        goto label_2c5138;
    }
    ctx->pc = 0x2C5130u;
    {
        const bool branch_taken_0x2c5130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5130) {
            ctx->pc = 0x2C5140u;
            goto label_2c5140;
        }
    }
    ctx->pc = 0x2C5138u;
label_2c5138:
    // 0x2c5138: 0xc0400a8  jal         func_1002A0
label_2c513c:
    if (ctx->pc == 0x2C513Cu) {
        ctx->pc = 0x2C5140u;
        goto label_2c5140;
    }
    ctx->pc = 0x2C5138u;
    SET_GPR_U32(ctx, 31, 0x2C5140u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5140u; }
        if (ctx->pc != 0x2C5140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5140u; }
        if (ctx->pc != 0x2C5140u) { return; }
    }
    ctx->pc = 0x2C5140u;
label_2c5140:
    // 0x2c5140: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c5140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c5144:
    // 0x2c5144: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5144u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c5148:
    // 0x2c5148: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c514c:
    if (ctx->pc == 0x2C514Cu) {
        ctx->pc = 0x2C514Cu;
            // 0x2c514c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C5150u;
        goto label_2c5150;
    }
    ctx->pc = 0x2C5148u;
    {
        const bool branch_taken_0x2c5148 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c5148) {
            ctx->pc = 0x2C514Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5148u;
            // 0x2c514c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C515Cu;
            goto label_2c515c;
        }
    }
    ctx->pc = 0x2C5150u;
label_2c5150:
    // 0x2c5150: 0xc0400a8  jal         func_1002A0
label_2c5154:
    if (ctx->pc == 0x2C5154u) {
        ctx->pc = 0x2C5154u;
            // 0x2c5154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C5158u;
        goto label_2c5158;
    }
    ctx->pc = 0x2C5150u;
    SET_GPR_U32(ctx, 31, 0x2C5158u);
    ctx->pc = 0x2C5154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5150u;
            // 0x2c5154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5158u; }
        if (ctx->pc != 0x2C5158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5158u; }
        if (ctx->pc != 0x2C5158u) { return; }
    }
    ctx->pc = 0x2C5158u;
label_2c5158:
    // 0x2c5158: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c5158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c515c:
    // 0x2c515c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c515cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c5160:
    // 0x2c5160: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c5160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c5164:
    // 0x2c5164: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c5168:
    // 0x2c5168: 0x3e00008  jr          $ra
label_2c516c:
    if (ctx->pc == 0x2C516Cu) {
        ctx->pc = 0x2C516Cu;
            // 0x2c516c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C5170u;
        goto label_2c5170;
    }
    ctx->pc = 0x2C5168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C516Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5168u;
            // 0x2c516c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5170u;
label_2c5170:
    // 0x2c5170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c5170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c5174:
    // 0x2c5174: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c5174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c5178:
    // 0x2c5178: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c5178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c517c:
    // 0x2c517c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c517cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c5180:
    // 0x2c5180: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c5180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c5184:
    // 0x2c5184: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_2c5188:
    if (ctx->pc == 0x2C5188u) {
        ctx->pc = 0x2C5188u;
            // 0x2c5188: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C518Cu;
        goto label_2c518c;
    }
    ctx->pc = 0x2C5184u;
    {
        const bool branch_taken_0x2c5184 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5184u;
            // 0x2c5188: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5184) {
            ctx->pc = 0x2C524Cu;
            goto label_2c524c;
        }
    }
    ctx->pc = 0x2C518Cu;
label_2c518c:
    // 0x2c518c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c518cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c5190:
    // 0x2c5190: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c5190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c5194:
    // 0x2c5194: 0x24630e00  addiu       $v1, $v1, 0xE00
    ctx->pc = 0x2c5194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3584));
label_2c5198:
    // 0x2c5198: 0x24420e40  addiu       $v0, $v0, 0xE40
    ctx->pc = 0x2c5198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3648));
label_2c519c:
    // 0x2c519c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c519cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c51a0:
    // 0x2c51a0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2c51a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2c51a4:
    // 0x2c51a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c51a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c51a8:
    // 0x2c51a8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2c51a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2c51ac:
    // 0x2c51ac: 0x320f809  jalr        $t9
label_2c51b0:
    if (ctx->pc == 0x2C51B0u) {
        ctx->pc = 0x2C51B4u;
        goto label_2c51b4;
    }
    ctx->pc = 0x2C51ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C51B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C51B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C51B4u; }
            if (ctx->pc != 0x2C51B4u) { return; }
        }
        }
    }
    ctx->pc = 0x2C51B4u;
label_2c51b4:
    // 0x2c51b4: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_2c51b8:
    if (ctx->pc == 0x2C51B8u) {
        ctx->pc = 0x2C51B8u;
            // 0x2c51b8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C51BCu;
        goto label_2c51bc;
    }
    ctx->pc = 0x2C51B4u;
    {
        const bool branch_taken_0x2c51b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c51b4) {
            ctx->pc = 0x2C51B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C51B4u;
            // 0x2c51b8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5238u;
            goto label_2c5238;
        }
    }
    ctx->pc = 0x2C51BCu;
label_2c51bc:
    // 0x2c51bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c51bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c51c0:
    // 0x2c51c0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c51c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c51c4:
    // 0x2c51c4: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x2c51c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_2c51c8:
    // 0x2c51c8: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x2c51c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_2c51cc:
    // 0x2c51cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c51ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c51d0:
    // 0x2c51d0: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x2c51d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2c51d4:
    // 0x2c51d4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2c51d8:
    if (ctx->pc == 0x2C51D8u) {
        ctx->pc = 0x2C51D8u;
            // 0x2c51d8: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x2C51DCu;
        goto label_2c51dc;
    }
    ctx->pc = 0x2C51D4u;
    {
        const bool branch_taken_0x2c51d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C51D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C51D4u;
            // 0x2c51d8: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c51d4) {
            ctx->pc = 0x2C5210u;
            goto label_2c5210;
        }
    }
    ctx->pc = 0x2C51DCu;
label_2c51dc:
    // 0x2c51dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c51dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c51e0:
    // 0x2c51e0: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x2c51e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_2c51e4:
    // 0x2c51e4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2c51e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2c51e8:
    // 0x2c51e8: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2c51e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2c51ec:
    // 0x2c51ec: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2c51f0:
    if (ctx->pc == 0x2C51F0u) {
        ctx->pc = 0x2C51F4u;
        goto label_2c51f4;
    }
    ctx->pc = 0x2C51ECu;
    {
        const bool branch_taken_0x2c51ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c51ec) {
            ctx->pc = 0x2C5210u;
            goto label_2c5210;
        }
    }
    ctx->pc = 0x2C51F4u;
label_2c51f4:
    // 0x2c51f4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c51f8:
    if (ctx->pc == 0x2C51F8u) {
        ctx->pc = 0x2C51F8u;
            // 0x2c51f8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x2C51FCu;
        goto label_2c51fc;
    }
    ctx->pc = 0x2C51F4u;
    {
        const bool branch_taken_0x2c51f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c51f4) {
            ctx->pc = 0x2C51F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C51F4u;
            // 0x2c51f8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5210u;
            goto label_2c5210;
        }
    }
    ctx->pc = 0x2C51FCu;
label_2c51fc:
    // 0x2c51fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c51fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c5200:
    // 0x2c5200: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c5200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c5204:
    // 0x2c5204: 0x320f809  jalr        $t9
label_2c5208:
    if (ctx->pc == 0x2C5208u) {
        ctx->pc = 0x2C5208u;
            // 0x2c5208: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C520Cu;
        goto label_2c520c;
    }
    ctx->pc = 0x2C5204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C520Cu);
        ctx->pc = 0x2C5208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5204u;
            // 0x2c5208: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C520Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C520Cu; }
            if (ctx->pc != 0x2C520Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2C520Cu;
label_2c520c:
    // 0x2c520c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2c520cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_2c5210:
    // 0x2c5210: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2c5214:
    if (ctx->pc == 0x2C5214u) {
        ctx->pc = 0x2C5218u;
        goto label_2c5218;
    }
    ctx->pc = 0x2C5210u;
    {
        const bool branch_taken_0x2c5210 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5210) {
            ctx->pc = 0x2C5234u;
            goto label_2c5234;
        }
    }
    ctx->pc = 0x2C5218u;
label_2c5218:
    // 0x2c5218: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c5218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c521c:
    // 0x2c521c: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2c521cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2c5220:
    // 0x2c5220: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2c5224:
    if (ctx->pc == 0x2C5224u) {
        ctx->pc = 0x2C5224u;
            // 0x2c5224: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C5228u;
        goto label_2c5228;
    }
    ctx->pc = 0x2C5220u;
    {
        const bool branch_taken_0x2c5220 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5220u;
            // 0x2c5224: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5220) {
            ctx->pc = 0x2C5234u;
            goto label_2c5234;
        }
    }
    ctx->pc = 0x2C5228u;
label_2c5228:
    // 0x2c5228: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c5228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c522c:
    // 0x2c522c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c522cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c5230:
    // 0x2c5230: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c5230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c5234:
    // 0x2c5234: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c5234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c5238:
    // 0x2c5238: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c5238u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c523c:
    // 0x2c523c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c5240:
    if (ctx->pc == 0x2C5240u) {
        ctx->pc = 0x2C5240u;
            // 0x2c5240: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C5244u;
        goto label_2c5244;
    }
    ctx->pc = 0x2C523Cu;
    {
        const bool branch_taken_0x2c523c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c523c) {
            ctx->pc = 0x2C5240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C523Cu;
            // 0x2c5240: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5250u;
            goto label_2c5250;
        }
    }
    ctx->pc = 0x2C5244u;
label_2c5244:
    // 0x2c5244: 0xc0400a8  jal         func_1002A0
label_2c5248:
    if (ctx->pc == 0x2C5248u) {
        ctx->pc = 0x2C5248u;
            // 0x2c5248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C524Cu;
        goto label_2c524c;
    }
    ctx->pc = 0x2C5244u;
    SET_GPR_U32(ctx, 31, 0x2C524Cu);
    ctx->pc = 0x2C5248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5244u;
            // 0x2c5248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C524Cu; }
        if (ctx->pc != 0x2C524Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C524Cu; }
        if (ctx->pc != 0x2C524Cu) { return; }
    }
    ctx->pc = 0x2C524Cu;
label_2c524c:
    // 0x2c524c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c524cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c5250:
    // 0x2c5250: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c5250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c5254:
    // 0x2c5254: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c5254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c5258:
    // 0x2c5258: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c525c:
    // 0x2c525c: 0x3e00008  jr          $ra
label_2c5260:
    if (ctx->pc == 0x2C5260u) {
        ctx->pc = 0x2C5260u;
            // 0x2c5260: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C5264u;
        goto label_2c5264;
    }
    ctx->pc = 0x2C525Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C525Cu;
            // 0x2c5260: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5264u;
label_2c5264:
    // 0x2c5264: 0x0  nop
    ctx->pc = 0x2c5264u;
    // NOP
label_2c5268:
    // 0x2c5268: 0x0  nop
    ctx->pc = 0x2c5268u;
    // NOP
label_2c526c:
    // 0x2c526c: 0x0  nop
    ctx->pc = 0x2c526cu;
    // NOP
}
