#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C4160
// Address: 0x2c4160 - 0x2c42d0
void sub_002C4160_0x2c4160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4160_0x2c4160");
#endif

    switch (ctx->pc) {
        case 0x2c4160u: goto label_2c4160;
        case 0x2c4164u: goto label_2c4164;
        case 0x2c4168u: goto label_2c4168;
        case 0x2c416cu: goto label_2c416c;
        case 0x2c4170u: goto label_2c4170;
        case 0x2c4174u: goto label_2c4174;
        case 0x2c4178u: goto label_2c4178;
        case 0x2c417cu: goto label_2c417c;
        case 0x2c4180u: goto label_2c4180;
        case 0x2c4184u: goto label_2c4184;
        case 0x2c4188u: goto label_2c4188;
        case 0x2c418cu: goto label_2c418c;
        case 0x2c4190u: goto label_2c4190;
        case 0x2c4194u: goto label_2c4194;
        case 0x2c4198u: goto label_2c4198;
        case 0x2c419cu: goto label_2c419c;
        case 0x2c41a0u: goto label_2c41a0;
        case 0x2c41a4u: goto label_2c41a4;
        case 0x2c41a8u: goto label_2c41a8;
        case 0x2c41acu: goto label_2c41ac;
        case 0x2c41b0u: goto label_2c41b0;
        case 0x2c41b4u: goto label_2c41b4;
        case 0x2c41b8u: goto label_2c41b8;
        case 0x2c41bcu: goto label_2c41bc;
        case 0x2c41c0u: goto label_2c41c0;
        case 0x2c41c4u: goto label_2c41c4;
        case 0x2c41c8u: goto label_2c41c8;
        case 0x2c41ccu: goto label_2c41cc;
        case 0x2c41d0u: goto label_2c41d0;
        case 0x2c41d4u: goto label_2c41d4;
        case 0x2c41d8u: goto label_2c41d8;
        case 0x2c41dcu: goto label_2c41dc;
        case 0x2c41e0u: goto label_2c41e0;
        case 0x2c41e4u: goto label_2c41e4;
        case 0x2c41e8u: goto label_2c41e8;
        case 0x2c41ecu: goto label_2c41ec;
        case 0x2c41f0u: goto label_2c41f0;
        case 0x2c41f4u: goto label_2c41f4;
        case 0x2c41f8u: goto label_2c41f8;
        case 0x2c41fcu: goto label_2c41fc;
        case 0x2c4200u: goto label_2c4200;
        case 0x2c4204u: goto label_2c4204;
        case 0x2c4208u: goto label_2c4208;
        case 0x2c420cu: goto label_2c420c;
        case 0x2c4210u: goto label_2c4210;
        case 0x2c4214u: goto label_2c4214;
        case 0x2c4218u: goto label_2c4218;
        case 0x2c421cu: goto label_2c421c;
        case 0x2c4220u: goto label_2c4220;
        case 0x2c4224u: goto label_2c4224;
        case 0x2c4228u: goto label_2c4228;
        case 0x2c422cu: goto label_2c422c;
        case 0x2c4230u: goto label_2c4230;
        case 0x2c4234u: goto label_2c4234;
        case 0x2c4238u: goto label_2c4238;
        case 0x2c423cu: goto label_2c423c;
        case 0x2c4240u: goto label_2c4240;
        case 0x2c4244u: goto label_2c4244;
        case 0x2c4248u: goto label_2c4248;
        case 0x2c424cu: goto label_2c424c;
        case 0x2c4250u: goto label_2c4250;
        case 0x2c4254u: goto label_2c4254;
        case 0x2c4258u: goto label_2c4258;
        case 0x2c425cu: goto label_2c425c;
        case 0x2c4260u: goto label_2c4260;
        case 0x2c4264u: goto label_2c4264;
        case 0x2c4268u: goto label_2c4268;
        case 0x2c426cu: goto label_2c426c;
        case 0x2c4270u: goto label_2c4270;
        case 0x2c4274u: goto label_2c4274;
        case 0x2c4278u: goto label_2c4278;
        case 0x2c427cu: goto label_2c427c;
        case 0x2c4280u: goto label_2c4280;
        case 0x2c4284u: goto label_2c4284;
        case 0x2c4288u: goto label_2c4288;
        case 0x2c428cu: goto label_2c428c;
        case 0x2c4290u: goto label_2c4290;
        case 0x2c4294u: goto label_2c4294;
        case 0x2c4298u: goto label_2c4298;
        case 0x2c429cu: goto label_2c429c;
        case 0x2c42a0u: goto label_2c42a0;
        case 0x2c42a4u: goto label_2c42a4;
        case 0x2c42a8u: goto label_2c42a8;
        case 0x2c42acu: goto label_2c42ac;
        case 0x2c42b0u: goto label_2c42b0;
        case 0x2c42b4u: goto label_2c42b4;
        case 0x2c42b8u: goto label_2c42b8;
        case 0x2c42bcu: goto label_2c42bc;
        case 0x2c42c0u: goto label_2c42c0;
        case 0x2c42c4u: goto label_2c42c4;
        case 0x2c42c8u: goto label_2c42c8;
        case 0x2c42ccu: goto label_2c42cc;
        default: break;
    }

    ctx->pc = 0x2c4160u;

label_2c4160:
    // 0x2c4160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c4160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c4164:
    // 0x2c4164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c4164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c4168:
    // 0x2c4168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c4168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c416c:
    // 0x2c416c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c416cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c4170:
    // 0x2c4170: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c4170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c4174:
    // 0x2c4174: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2c4178:
    if (ctx->pc == 0x2C4178u) {
        ctx->pc = 0x2C4178u;
            // 0x2c4178: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C417Cu;
        goto label_2c417c;
    }
    ctx->pc = 0x2C4174u;
    {
        const bool branch_taken_0x2c4174 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4174u;
            // 0x2c4178: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4174) {
            ctx->pc = 0x2C41B8u;
            goto label_2c41b8;
        }
    }
    ctx->pc = 0x2C417Cu;
label_2c417c:
    // 0x2c417c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2c4180:
    if (ctx->pc == 0x2C4180u) {
        ctx->pc = 0x2C4180u;
            // 0x2c4180: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C4184u;
        goto label_2c4184;
    }
    ctx->pc = 0x2C417Cu;
    {
        const bool branch_taken_0x2c417c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c417c) {
            ctx->pc = 0x2C4180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C417Cu;
            // 0x2c4180: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C41A4u;
            goto label_2c41a4;
        }
    }
    ctx->pc = 0x2C4184u;
label_2c4184:
    // 0x2c4184: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2c4188:
    if (ctx->pc == 0x2C4188u) {
        ctx->pc = 0x2C418Cu;
        goto label_2c418c;
    }
    ctx->pc = 0x2C4184u;
    {
        const bool branch_taken_0x2c4184 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4184) {
            ctx->pc = 0x2C41A0u;
            goto label_2c41a0;
        }
    }
    ctx->pc = 0x2C418Cu;
label_2c418c:
    // 0x2c418c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c418cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c4190:
    // 0x2c4190: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c4194:
    if (ctx->pc == 0x2C4194u) {
        ctx->pc = 0x2C4198u;
        goto label_2c4198;
    }
    ctx->pc = 0x2C4190u;
    {
        const bool branch_taken_0x2c4190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4190) {
            ctx->pc = 0x2C41A0u;
            goto label_2c41a0;
        }
    }
    ctx->pc = 0x2C4198u;
label_2c4198:
    // 0x2c4198: 0xc0400a8  jal         func_1002A0
label_2c419c:
    if (ctx->pc == 0x2C419Cu) {
        ctx->pc = 0x2C41A0u;
        goto label_2c41a0;
    }
    ctx->pc = 0x2C4198u;
    SET_GPR_U32(ctx, 31, 0x2C41A0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C41A0u; }
        if (ctx->pc != 0x2C41A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C41A0u; }
        if (ctx->pc != 0x2C41A0u) { return; }
    }
    ctx->pc = 0x2C41A0u;
label_2c41a0:
    // 0x2c41a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c41a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c41a4:
    // 0x2c41a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c41a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c41a8:
    // 0x2c41a8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c41ac:
    if (ctx->pc == 0x2C41ACu) {
        ctx->pc = 0x2C41ACu;
            // 0x2c41ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C41B0u;
        goto label_2c41b0;
    }
    ctx->pc = 0x2C41A8u;
    {
        const bool branch_taken_0x2c41a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c41a8) {
            ctx->pc = 0x2C41ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C41A8u;
            // 0x2c41ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C41BCu;
            goto label_2c41bc;
        }
    }
    ctx->pc = 0x2C41B0u;
label_2c41b0:
    // 0x2c41b0: 0xc0400a8  jal         func_1002A0
label_2c41b4:
    if (ctx->pc == 0x2C41B4u) {
        ctx->pc = 0x2C41B4u;
            // 0x2c41b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C41B8u;
        goto label_2c41b8;
    }
    ctx->pc = 0x2C41B0u;
    SET_GPR_U32(ctx, 31, 0x2C41B8u);
    ctx->pc = 0x2C41B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C41B0u;
            // 0x2c41b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C41B8u; }
        if (ctx->pc != 0x2C41B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C41B8u; }
        if (ctx->pc != 0x2C41B8u) { return; }
    }
    ctx->pc = 0x2C41B8u;
label_2c41b8:
    // 0x2c41b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c41b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c41bc:
    // 0x2c41bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c41bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c41c0:
    // 0x2c41c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c41c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c41c4:
    // 0x2c41c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c41c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c41c8:
    // 0x2c41c8: 0x3e00008  jr          $ra
label_2c41cc:
    if (ctx->pc == 0x2C41CCu) {
        ctx->pc = 0x2C41CCu;
            // 0x2c41cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C41D0u;
        goto label_2c41d0;
    }
    ctx->pc = 0x2C41C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C41CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C41C8u;
            // 0x2c41cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C41D0u;
label_2c41d0:
    // 0x2c41d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c41d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c41d4:
    // 0x2c41d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c41d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c41d8:
    // 0x2c41d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c41d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c41dc:
    // 0x2c41dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c41dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c41e0:
    // 0x2c41e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c41e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c41e4:
    // 0x2c41e4: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_2c41e8:
    if (ctx->pc == 0x2C41E8u) {
        ctx->pc = 0x2C41E8u;
            // 0x2c41e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C41ECu;
        goto label_2c41ec;
    }
    ctx->pc = 0x2C41E4u;
    {
        const bool branch_taken_0x2c41e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C41E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C41E4u;
            // 0x2c41e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c41e4) {
            ctx->pc = 0x2C42ACu;
            goto label_2c42ac;
        }
    }
    ctx->pc = 0x2C41ECu;
label_2c41ec:
    // 0x2c41ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c41ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c41f0:
    // 0x2c41f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c41f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c41f4:
    // 0x2c41f4: 0x24631010  addiu       $v1, $v1, 0x1010
    ctx->pc = 0x2c41f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4112));
label_2c41f8:
    // 0x2c41f8: 0x24421050  addiu       $v0, $v0, 0x1050
    ctx->pc = 0x2c41f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4176));
label_2c41fc:
    // 0x2c41fc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c41fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c4200:
    // 0x2c4200: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2c4200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2c4204:
    // 0x2c4204: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c4204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c4208:
    // 0x2c4208: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2c4208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2c420c:
    // 0x2c420c: 0x320f809  jalr        $t9
label_2c4210:
    if (ctx->pc == 0x2C4210u) {
        ctx->pc = 0x2C4214u;
        goto label_2c4214;
    }
    ctx->pc = 0x2C420Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C4214u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C4214u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C4214u; }
            if (ctx->pc != 0x2C4214u) { return; }
        }
        }
    }
    ctx->pc = 0x2C4214u;
label_2c4214:
    // 0x2c4214: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_2c4218:
    if (ctx->pc == 0x2C4218u) {
        ctx->pc = 0x2C4218u;
            // 0x2c4218: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C421Cu;
        goto label_2c421c;
    }
    ctx->pc = 0x2C4214u;
    {
        const bool branch_taken_0x2c4214 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4214) {
            ctx->pc = 0x2C4218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4214u;
            // 0x2c4218: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C4298u;
            goto label_2c4298;
        }
    }
    ctx->pc = 0x2C421Cu;
label_2c421c:
    // 0x2c421c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c421cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c4220:
    // 0x2c4220: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c4220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c4224:
    // 0x2c4224: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x2c4224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_2c4228:
    // 0x2c4228: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x2c4228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_2c422c:
    // 0x2c422c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c422cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c4230:
    // 0x2c4230: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x2c4230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2c4234:
    // 0x2c4234: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2c4238:
    if (ctx->pc == 0x2C4238u) {
        ctx->pc = 0x2C4238u;
            // 0x2c4238: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x2C423Cu;
        goto label_2c423c;
    }
    ctx->pc = 0x2C4234u;
    {
        const bool branch_taken_0x2c4234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4234u;
            // 0x2c4238: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4234) {
            ctx->pc = 0x2C4270u;
            goto label_2c4270;
        }
    }
    ctx->pc = 0x2C423Cu;
label_2c423c:
    // 0x2c423c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c423cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c4240:
    // 0x2c4240: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x2c4240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_2c4244:
    // 0x2c4244: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2c4244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2c4248:
    // 0x2c4248: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2c4248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2c424c:
    // 0x2c424c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2c4250:
    if (ctx->pc == 0x2C4250u) {
        ctx->pc = 0x2C4254u;
        goto label_2c4254;
    }
    ctx->pc = 0x2C424Cu;
    {
        const bool branch_taken_0x2c424c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c424c) {
            ctx->pc = 0x2C4270u;
            goto label_2c4270;
        }
    }
    ctx->pc = 0x2C4254u;
label_2c4254:
    // 0x2c4254: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c4258:
    if (ctx->pc == 0x2C4258u) {
        ctx->pc = 0x2C4258u;
            // 0x2c4258: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x2C425Cu;
        goto label_2c425c;
    }
    ctx->pc = 0x2C4254u;
    {
        const bool branch_taken_0x2c4254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4254) {
            ctx->pc = 0x2C4258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4254u;
            // 0x2c4258: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C4270u;
            goto label_2c4270;
        }
    }
    ctx->pc = 0x2C425Cu;
label_2c425c:
    // 0x2c425c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c425cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c4260:
    // 0x2c4260: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c4260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c4264:
    // 0x2c4264: 0x320f809  jalr        $t9
label_2c4268:
    if (ctx->pc == 0x2C4268u) {
        ctx->pc = 0x2C4268u;
            // 0x2c4268: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C426Cu;
        goto label_2c426c;
    }
    ctx->pc = 0x2C4264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C426Cu);
        ctx->pc = 0x2C4268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4264u;
            // 0x2c4268: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C426Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C426Cu; }
            if (ctx->pc != 0x2C426Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2C426Cu;
label_2c426c:
    // 0x2c426c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2c426cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_2c4270:
    // 0x2c4270: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2c4274:
    if (ctx->pc == 0x2C4274u) {
        ctx->pc = 0x2C4278u;
        goto label_2c4278;
    }
    ctx->pc = 0x2C4270u;
    {
        const bool branch_taken_0x2c4270 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4270) {
            ctx->pc = 0x2C4294u;
            goto label_2c4294;
        }
    }
    ctx->pc = 0x2C4278u;
label_2c4278:
    // 0x2c4278: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c4278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c427c:
    // 0x2c427c: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2c427cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2c4280:
    // 0x2c4280: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2c4284:
    if (ctx->pc == 0x2C4284u) {
        ctx->pc = 0x2C4284u;
            // 0x2c4284: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C4288u;
        goto label_2c4288;
    }
    ctx->pc = 0x2C4280u;
    {
        const bool branch_taken_0x2c4280 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4280u;
            // 0x2c4284: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4280) {
            ctx->pc = 0x2C4294u;
            goto label_2c4294;
        }
    }
    ctx->pc = 0x2C4288u;
label_2c4288:
    // 0x2c4288: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c4288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c428c:
    // 0x2c428c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c428cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c4290:
    // 0x2c4290: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c4290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c4294:
    // 0x2c4294: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c4294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c4298:
    // 0x2c4298: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c4298u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c429c:
    // 0x2c429c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c42a0:
    if (ctx->pc == 0x2C42A0u) {
        ctx->pc = 0x2C42A0u;
            // 0x2c42a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C42A4u;
        goto label_2c42a4;
    }
    ctx->pc = 0x2C429Cu;
    {
        const bool branch_taken_0x2c429c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c429c) {
            ctx->pc = 0x2C42A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C429Cu;
            // 0x2c42a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C42B0u;
            goto label_2c42b0;
        }
    }
    ctx->pc = 0x2C42A4u;
label_2c42a4:
    // 0x2c42a4: 0xc0400a8  jal         func_1002A0
label_2c42a8:
    if (ctx->pc == 0x2C42A8u) {
        ctx->pc = 0x2C42A8u;
            // 0x2c42a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C42ACu;
        goto label_2c42ac;
    }
    ctx->pc = 0x2C42A4u;
    SET_GPR_U32(ctx, 31, 0x2C42ACu);
    ctx->pc = 0x2C42A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C42A4u;
            // 0x2c42a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C42ACu; }
        if (ctx->pc != 0x2C42ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C42ACu; }
        if (ctx->pc != 0x2C42ACu) { return; }
    }
    ctx->pc = 0x2C42ACu;
label_2c42ac:
    // 0x2c42ac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c42acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c42b0:
    // 0x2c42b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c42b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c42b4:
    // 0x2c42b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c42b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c42b8:
    // 0x2c42b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c42b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c42bc:
    // 0x2c42bc: 0x3e00008  jr          $ra
label_2c42c0:
    if (ctx->pc == 0x2C42C0u) {
        ctx->pc = 0x2C42C0u;
            // 0x2c42c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C42C4u;
        goto label_2c42c4;
    }
    ctx->pc = 0x2C42BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C42C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C42BCu;
            // 0x2c42c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C42C4u;
label_2c42c4:
    // 0x2c42c4: 0x0  nop
    ctx->pc = 0x2c42c4u;
    // NOP
label_2c42c8:
    // 0x2c42c8: 0x0  nop
    ctx->pc = 0x2c42c8u;
    // NOP
label_2c42cc:
    // 0x2c42cc: 0x0  nop
    ctx->pc = 0x2c42ccu;
    // NOP
}
