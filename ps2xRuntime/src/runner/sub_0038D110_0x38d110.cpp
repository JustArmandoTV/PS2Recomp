#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038D110
// Address: 0x38d110 - 0x38d2c0
void sub_0038D110_0x38d110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D110_0x38d110");
#endif

    switch (ctx->pc) {
        case 0x38d110u: goto label_38d110;
        case 0x38d114u: goto label_38d114;
        case 0x38d118u: goto label_38d118;
        case 0x38d11cu: goto label_38d11c;
        case 0x38d120u: goto label_38d120;
        case 0x38d124u: goto label_38d124;
        case 0x38d128u: goto label_38d128;
        case 0x38d12cu: goto label_38d12c;
        case 0x38d130u: goto label_38d130;
        case 0x38d134u: goto label_38d134;
        case 0x38d138u: goto label_38d138;
        case 0x38d13cu: goto label_38d13c;
        case 0x38d140u: goto label_38d140;
        case 0x38d144u: goto label_38d144;
        case 0x38d148u: goto label_38d148;
        case 0x38d14cu: goto label_38d14c;
        case 0x38d150u: goto label_38d150;
        case 0x38d154u: goto label_38d154;
        case 0x38d158u: goto label_38d158;
        case 0x38d15cu: goto label_38d15c;
        case 0x38d160u: goto label_38d160;
        case 0x38d164u: goto label_38d164;
        case 0x38d168u: goto label_38d168;
        case 0x38d16cu: goto label_38d16c;
        case 0x38d170u: goto label_38d170;
        case 0x38d174u: goto label_38d174;
        case 0x38d178u: goto label_38d178;
        case 0x38d17cu: goto label_38d17c;
        case 0x38d180u: goto label_38d180;
        case 0x38d184u: goto label_38d184;
        case 0x38d188u: goto label_38d188;
        case 0x38d18cu: goto label_38d18c;
        case 0x38d190u: goto label_38d190;
        case 0x38d194u: goto label_38d194;
        case 0x38d198u: goto label_38d198;
        case 0x38d19cu: goto label_38d19c;
        case 0x38d1a0u: goto label_38d1a0;
        case 0x38d1a4u: goto label_38d1a4;
        case 0x38d1a8u: goto label_38d1a8;
        case 0x38d1acu: goto label_38d1ac;
        case 0x38d1b0u: goto label_38d1b0;
        case 0x38d1b4u: goto label_38d1b4;
        case 0x38d1b8u: goto label_38d1b8;
        case 0x38d1bcu: goto label_38d1bc;
        case 0x38d1c0u: goto label_38d1c0;
        case 0x38d1c4u: goto label_38d1c4;
        case 0x38d1c8u: goto label_38d1c8;
        case 0x38d1ccu: goto label_38d1cc;
        case 0x38d1d0u: goto label_38d1d0;
        case 0x38d1d4u: goto label_38d1d4;
        case 0x38d1d8u: goto label_38d1d8;
        case 0x38d1dcu: goto label_38d1dc;
        case 0x38d1e0u: goto label_38d1e0;
        case 0x38d1e4u: goto label_38d1e4;
        case 0x38d1e8u: goto label_38d1e8;
        case 0x38d1ecu: goto label_38d1ec;
        case 0x38d1f0u: goto label_38d1f0;
        case 0x38d1f4u: goto label_38d1f4;
        case 0x38d1f8u: goto label_38d1f8;
        case 0x38d1fcu: goto label_38d1fc;
        case 0x38d200u: goto label_38d200;
        case 0x38d204u: goto label_38d204;
        case 0x38d208u: goto label_38d208;
        case 0x38d20cu: goto label_38d20c;
        case 0x38d210u: goto label_38d210;
        case 0x38d214u: goto label_38d214;
        case 0x38d218u: goto label_38d218;
        case 0x38d21cu: goto label_38d21c;
        case 0x38d220u: goto label_38d220;
        case 0x38d224u: goto label_38d224;
        case 0x38d228u: goto label_38d228;
        case 0x38d22cu: goto label_38d22c;
        case 0x38d230u: goto label_38d230;
        case 0x38d234u: goto label_38d234;
        case 0x38d238u: goto label_38d238;
        case 0x38d23cu: goto label_38d23c;
        case 0x38d240u: goto label_38d240;
        case 0x38d244u: goto label_38d244;
        case 0x38d248u: goto label_38d248;
        case 0x38d24cu: goto label_38d24c;
        case 0x38d250u: goto label_38d250;
        case 0x38d254u: goto label_38d254;
        case 0x38d258u: goto label_38d258;
        case 0x38d25cu: goto label_38d25c;
        case 0x38d260u: goto label_38d260;
        case 0x38d264u: goto label_38d264;
        case 0x38d268u: goto label_38d268;
        case 0x38d26cu: goto label_38d26c;
        case 0x38d270u: goto label_38d270;
        case 0x38d274u: goto label_38d274;
        case 0x38d278u: goto label_38d278;
        case 0x38d27cu: goto label_38d27c;
        case 0x38d280u: goto label_38d280;
        case 0x38d284u: goto label_38d284;
        case 0x38d288u: goto label_38d288;
        case 0x38d28cu: goto label_38d28c;
        case 0x38d290u: goto label_38d290;
        case 0x38d294u: goto label_38d294;
        case 0x38d298u: goto label_38d298;
        case 0x38d29cu: goto label_38d29c;
        case 0x38d2a0u: goto label_38d2a0;
        case 0x38d2a4u: goto label_38d2a4;
        case 0x38d2a8u: goto label_38d2a8;
        case 0x38d2acu: goto label_38d2ac;
        case 0x38d2b0u: goto label_38d2b0;
        case 0x38d2b4u: goto label_38d2b4;
        case 0x38d2b8u: goto label_38d2b8;
        case 0x38d2bcu: goto label_38d2bc;
        default: break;
    }

    ctx->pc = 0x38d110u;

label_38d110:
    // 0x38d110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38d110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_38d114:
    // 0x38d114: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38d114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_38d118:
    // 0x38d118: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38d118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38d11c:
    // 0x38d11c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38d11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38d120:
    // 0x38d120: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38d120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38d124:
    // 0x38d124: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38d124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38d128:
    // 0x38d128: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x38d128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_38d12c:
    // 0x38d12c: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x38d12cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_38d130:
    // 0x38d130: 0x1020005d  beqz        $at, . + 4 + (0x5D << 2)
label_38d134:
    if (ctx->pc == 0x38D134u) {
        ctx->pc = 0x38D134u;
            // 0x38d134: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38D138u;
        goto label_38d138;
    }
    ctx->pc = 0x38D130u;
    {
        const bool branch_taken_0x38d130 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D130u;
            // 0x38d134: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d130) {
            ctx->pc = 0x38D2A8u;
            goto label_38d2a8;
        }
    }
    ctx->pc = 0x38D138u;
label_38d138:
    // 0x38d138: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x38d138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_38d13c:
    // 0x38d13c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x38d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_38d140:
    // 0x38d140: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x38d140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_38d144:
    // 0x38d144: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x38d144u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_38d148:
    // 0x38d148: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_38d14c:
    if (ctx->pc == 0x38D14Cu) {
        ctx->pc = 0x38D14Cu;
            // 0x38d14c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x38D150u;
        goto label_38d150;
    }
    ctx->pc = 0x38D148u;
    {
        const bool branch_taken_0x38d148 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d148) {
            ctx->pc = 0x38D14Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38D148u;
            // 0x38d14c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38D15Cu;
            goto label_38d15c;
        }
    }
    ctx->pc = 0x38D150u;
label_38d150:
    // 0x38d150: 0x10000056  b           . + 4 + (0x56 << 2)
label_38d154:
    if (ctx->pc == 0x38D154u) {
        ctx->pc = 0x38D154u;
            // 0x38d154: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x38D158u;
        goto label_38d158;
    }
    ctx->pc = 0x38D150u;
    {
        const bool branch_taken_0x38d150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D150u;
            // 0x38d154: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d150) {
            ctx->pc = 0x38D2ACu;
            goto label_38d2ac;
        }
    }
    ctx->pc = 0x38D158u;
label_38d158:
    // 0x38d158: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x38d158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38d15c:
    // 0x38d15c: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x38d15cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_38d160:
    // 0x38d160: 0x320f809  jalr        $t9
label_38d164:
    if (ctx->pc == 0x38D164u) {
        ctx->pc = 0x38D168u;
        goto label_38d168;
    }
    ctx->pc = 0x38D160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38D168u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x38D168u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38D168u; }
            if (ctx->pc != 0x38D168u) { return; }
        }
        }
    }
    ctx->pc = 0x38D168u;
label_38d168:
    // 0x38d168: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x38d168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_38d16c:
    // 0x38d16c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38d170:
    // 0x38d170: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x38d170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_38d174:
    // 0x38d174: 0xae440060  sw          $a0, 0x60($s2)
    ctx->pc = 0x38d174u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 4));
label_38d178:
    // 0x38d178: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x38d178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_38d17c:
    // 0x38d17c: 0x80a40018  lb          $a0, 0x18($a1)
    ctx->pc = 0x38d17cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
label_38d180:
    // 0x38d180: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_38d184:
    if (ctx->pc == 0x38D184u) {
        ctx->pc = 0x38D184u;
            // 0x38d184: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38D188u;
        goto label_38d188;
    }
    ctx->pc = 0x38D180u;
    {
        const bool branch_taken_0x38d180 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x38d180) {
            ctx->pc = 0x38D184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38D180u;
            // 0x38d184: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38D198u;
            goto label_38d198;
        }
    }
    ctx->pc = 0x38D188u;
label_38d188:
    // 0x38d188: 0x80a30010  lb          $v1, 0x10($a1)
    ctx->pc = 0x38d188u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_38d18c:
    // 0x38d18c: 0x10000002  b           . + 4 + (0x2 << 2)
label_38d190:
    if (ctx->pc == 0x38D190u) {
        ctx->pc = 0x38D190u;
            // 0x38d190: 0xa31821  addu        $v1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->pc = 0x38D194u;
        goto label_38d194;
    }
    ctx->pc = 0x38D18Cu;
    {
        const bool branch_taken_0x38d18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D18Cu;
            // 0x38d190: 0xa31821  addu        $v1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d18c) {
            ctx->pc = 0x38D198u;
            goto label_38d198;
        }
    }
    ctx->pc = 0x38D194u;
label_38d194:
    // 0x38d194: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x38d194u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38d198:
    // 0x38d198: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x38d198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_38d19c:
    // 0x38d19c: 0xae4300a8  sw          $v1, 0xA8($s2)
    ctx->pc = 0x38d19cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 3));
label_38d1a0:
    // 0x38d1a0: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x38d1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_38d1a4:
    // 0x38d1a4: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x38d1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_38d1a8:
    // 0x38d1a8: 0x50600024  beql        $v1, $zero, . + 4 + (0x24 << 2)
label_38d1ac:
    if (ctx->pc == 0x38D1ACu) {
        ctx->pc = 0x38D1ACu;
            // 0x38d1ac: 0x8e4300b0  lw          $v1, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->pc = 0x38D1B0u;
        goto label_38d1b0;
    }
    ctx->pc = 0x38D1A8u;
    {
        const bool branch_taken_0x38d1a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d1a8) {
            ctx->pc = 0x38D1ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38D1A8u;
            // 0x38d1ac: 0x8e4300b0  lw          $v1, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38D23Cu;
            goto label_38d23c;
        }
    }
    ctx->pc = 0x38D1B0u;
label_38d1b0:
    // 0x38d1b0: 0x8e4400a8  lw          $a0, 0xA8($s2)
    ctx->pc = 0x38d1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
label_38d1b4:
    // 0x38d1b4: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
label_38d1b8:
    if (ctx->pc == 0x38D1B8u) {
        ctx->pc = 0x38D1BCu;
        goto label_38d1bc;
    }
    ctx->pc = 0x38D1B4u;
    {
        const bool branch_taken_0x38d1b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d1b4) {
            ctx->pc = 0x38D238u;
            goto label_38d238;
        }
    }
    ctx->pc = 0x38D1BCu;
label_38d1bc:
    // 0x38d1bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x38d1bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38d1c0:
    // 0x38d1c0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x38d1c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_38d1c4:
    // 0x38d1c4: 0x320f809  jalr        $t9
label_38d1c8:
    if (ctx->pc == 0x38D1C8u) {
        ctx->pc = 0x38D1CCu;
        goto label_38d1cc;
    }
    ctx->pc = 0x38D1C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38D1CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x38D1CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38D1CCu; }
            if (ctx->pc != 0x38D1CCu) { return; }
        }
        }
    }
    ctx->pc = 0x38D1CCu;
label_38d1cc:
    // 0x38d1cc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x38d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_38d1d0:
    // 0x38d1d0: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
label_38d1d4:
    if (ctx->pc == 0x38D1D4u) {
        ctx->pc = 0x38D1D8u;
        goto label_38d1d8;
    }
    ctx->pc = 0x38D1D0u;
    {
        const bool branch_taken_0x38d1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x38d1d0) {
            ctx->pc = 0x38D238u;
            goto label_38d238;
        }
    }
    ctx->pc = 0x38D1D8u;
label_38d1d8:
    // 0x38d1d8: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x38d1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_38d1dc:
    // 0x38d1dc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x38d1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_38d1e0:
    // 0x38d1e0: 0x908400a8  lbu         $a0, 0xA8($a0)
    ctx->pc = 0x38d1e0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 168)));
label_38d1e4:
    // 0x38d1e4: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
label_38d1e8:
    if (ctx->pc == 0x38D1E8u) {
        ctx->pc = 0x38D1E8u;
            // 0x38d1e8: 0x8e5000a8  lw          $s0, 0xA8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
        ctx->pc = 0x38D1ECu;
        goto label_38d1ec;
    }
    ctx->pc = 0x38D1E4u;
    {
        const bool branch_taken_0x38d1e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x38D1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D1E4u;
            // 0x38d1e8: 0x8e5000a8  lw          $s0, 0xA8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d1e4) {
            ctx->pc = 0x38D238u;
            goto label_38d238;
        }
    }
    ctx->pc = 0x38D1ECu;
label_38d1ec:
    // 0x38d1ec: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x38d1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_38d1f0:
    // 0x38d1f0: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_38d1f4:
    if (ctx->pc == 0x38D1F4u) {
        ctx->pc = 0x38D1F8u;
        goto label_38d1f8;
    }
    ctx->pc = 0x38D1F0u;
    {
        const bool branch_taken_0x38d1f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38d1f0) {
            ctx->pc = 0x38D238u;
            goto label_38d238;
        }
    }
    ctx->pc = 0x38D1F8u;
label_38d1f8:
    // 0x38d1f8: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x38d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_38d1fc:
    // 0x38d1fc: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x38d1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_38d200:
    // 0x38d200: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_38d204:
    if (ctx->pc == 0x38D204u) {
        ctx->pc = 0x38D208u;
        goto label_38d208;
    }
    ctx->pc = 0x38D200u;
    {
        const bool branch_taken_0x38d200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d200) {
            ctx->pc = 0x38D238u;
            goto label_38d238;
        }
    }
    ctx->pc = 0x38D208u;
label_38d208:
    // 0x38d208: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x38d208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38d20c:
    // 0x38d20c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38d20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38d210:
    // 0x38d210: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x38d210u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_38d214:
    // 0x38d214: 0x320f809  jalr        $t9
label_38d218:
    if (ctx->pc == 0x38D218u) {
        ctx->pc = 0x38D218u;
            // 0x38d218: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38D21Cu;
        goto label_38d21c;
    }
    ctx->pc = 0x38D214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38D21Cu);
        ctx->pc = 0x38D218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D214u;
            // 0x38d218: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38D21Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38D21Cu; }
            if (ctx->pc != 0x38D21Cu) { return; }
        }
        }
    }
    ctx->pc = 0x38D21Cu;
label_38d21c:
    // 0x38d21c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_38d220:
    if (ctx->pc == 0x38D220u) {
        ctx->pc = 0x38D224u;
        goto label_38d224;
    }
    ctx->pc = 0x38D21Cu;
    {
        const bool branch_taken_0x38d21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d21c) {
            ctx->pc = 0x38D238u;
            goto label_38d238;
        }
    }
    ctx->pc = 0x38D224u;
label_38d224:
    // 0x38d224: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x38d224u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38d228:
    // 0x38d228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38d228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38d22c:
    // 0x38d22c: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x38d22cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_38d230:
    // 0x38d230: 0x320f809  jalr        $t9
label_38d234:
    if (ctx->pc == 0x38D234u) {
        ctx->pc = 0x38D234u;
            // 0x38d234: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38D238u;
        goto label_38d238;
    }
    ctx->pc = 0x38D230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38D238u);
        ctx->pc = 0x38D234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D230u;
            // 0x38d234: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38D238u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38D238u; }
            if (ctx->pc != 0x38D238u) { return; }
        }
        }
    }
    ctx->pc = 0x38D238u;
label_38d238:
    // 0x38d238: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x38d238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_38d23c:
    // 0x38d23c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x38d23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_38d240:
    // 0x38d240: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_38d244:
    if (ctx->pc == 0x38D244u) {
        ctx->pc = 0x38D244u;
            // 0x38d244: 0x8e4300b0  lw          $v1, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->pc = 0x38D248u;
        goto label_38d248;
    }
    ctx->pc = 0x38D240u;
    {
        const bool branch_taken_0x38d240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d240) {
            ctx->pc = 0x38D244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38D240u;
            // 0x38d244: 0x8e4300b0  lw          $v1, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38D268u;
            goto label_38d268;
        }
    }
    ctx->pc = 0x38D248u;
label_38d248:
    // 0x38d248: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x38d248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_38d24c:
    // 0x38d24c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38d24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38d250:
    // 0x38d250: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_38d254:
    if (ctx->pc == 0x38D254u) {
        ctx->pc = 0x38D258u;
        goto label_38d258;
    }
    ctx->pc = 0x38D250u;
    {
        const bool branch_taken_0x38d250 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x38d250) {
            ctx->pc = 0x38D264u;
            goto label_38d264;
        }
    }
    ctx->pc = 0x38D258u;
label_38d258:
    // 0x38d258: 0x8e430088  lw          $v1, 0x88($s2)
    ctx->pc = 0x38d258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_38d25c:
    // 0x38d25c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_38d260:
    // 0x38d260: 0xae430088  sw          $v1, 0x88($s2)
    ctx->pc = 0x38d260u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 3));
label_38d264:
    // 0x38d264: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x38d264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_38d268:
    // 0x38d268: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x38d268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_38d26c:
    // 0x38d26c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_38d270:
    if (ctx->pc == 0x38D270u) {
        ctx->pc = 0x38D274u;
        goto label_38d274;
    }
    ctx->pc = 0x38D26Cu;
    {
        const bool branch_taken_0x38d26c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d26c) {
            ctx->pc = 0x38D2A8u;
            goto label_38d2a8;
        }
    }
    ctx->pc = 0x38D274u;
label_38d274:
    // 0x38d274: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x38d274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_38d278:
    // 0x38d278: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x38d278u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_38d27c:
    // 0x38d27c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_38d280:
    if (ctx->pc == 0x38D280u) {
        ctx->pc = 0x38D284u;
        goto label_38d284;
    }
    ctx->pc = 0x38D27Cu;
    {
        const bool branch_taken_0x38d27c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d27c) {
            ctx->pc = 0x38D2A8u;
            goto label_38d2a8;
        }
    }
    ctx->pc = 0x38D284u;
label_38d284:
    // 0x38d284: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x38d284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38d288:
    // 0x38d288: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x38d288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_38d28c:
    // 0x38d28c: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x38d28cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_38d290:
    // 0x38d290: 0x320f809  jalr        $t9
label_38d294:
    if (ctx->pc == 0x38D294u) {
        ctx->pc = 0x38D294u;
            // 0x38d294: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38D298u;
        goto label_38d298;
    }
    ctx->pc = 0x38D290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38D298u);
        ctx->pc = 0x38D294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D290u;
            // 0x38d294: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38D298u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38D298u; }
            if (ctx->pc != 0x38D298u) { return; }
        }
        }
    }
    ctx->pc = 0x38D298u;
label_38d298:
    // 0x38d298: 0xc64000c4  lwc1        $f0, 0xC4($s2)
    ctx->pc = 0x38d298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38d29c:
    // 0x38d29c: 0xe64000b8  swc1        $f0, 0xB8($s2)
    ctx->pc = 0x38d29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 184), bits); }
label_38d2a0:
    // 0x38d2a0: 0x824300cc  lb          $v1, 0xCC($s2)
    ctx->pc = 0x38d2a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 204)));
label_38d2a4:
    // 0x38d2a4: 0xae4300bc  sw          $v1, 0xBC($s2)
    ctx->pc = 0x38d2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 3));
label_38d2a8:
    // 0x38d2a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38d2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_38d2ac:
    // 0x38d2ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38d2acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38d2b0:
    // 0x38d2b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38d2b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38d2b4:
    // 0x38d2b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38d2b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38d2b8:
    // 0x38d2b8: 0x3e00008  jr          $ra
label_38d2bc:
    if (ctx->pc == 0x38D2BCu) {
        ctx->pc = 0x38D2BCu;
            // 0x38d2bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x38D2C0u;
        goto label_fallthrough_0x38d2b8;
    }
    ctx->pc = 0x38D2B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D2B8u;
            // 0x38d2bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x38d2b8:
    ctx->pc = 0x38D2C0u;
}
