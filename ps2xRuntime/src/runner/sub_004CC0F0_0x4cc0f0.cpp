#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CC0F0
// Address: 0x4cc0f0 - 0x4cc350
void sub_004CC0F0_0x4cc0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CC0F0_0x4cc0f0");
#endif

    switch (ctx->pc) {
        case 0x4cc0f0u: goto label_4cc0f0;
        case 0x4cc0f4u: goto label_4cc0f4;
        case 0x4cc0f8u: goto label_4cc0f8;
        case 0x4cc0fcu: goto label_4cc0fc;
        case 0x4cc100u: goto label_4cc100;
        case 0x4cc104u: goto label_4cc104;
        case 0x4cc108u: goto label_4cc108;
        case 0x4cc10cu: goto label_4cc10c;
        case 0x4cc110u: goto label_4cc110;
        case 0x4cc114u: goto label_4cc114;
        case 0x4cc118u: goto label_4cc118;
        case 0x4cc11cu: goto label_4cc11c;
        case 0x4cc120u: goto label_4cc120;
        case 0x4cc124u: goto label_4cc124;
        case 0x4cc128u: goto label_4cc128;
        case 0x4cc12cu: goto label_4cc12c;
        case 0x4cc130u: goto label_4cc130;
        case 0x4cc134u: goto label_4cc134;
        case 0x4cc138u: goto label_4cc138;
        case 0x4cc13cu: goto label_4cc13c;
        case 0x4cc140u: goto label_4cc140;
        case 0x4cc144u: goto label_4cc144;
        case 0x4cc148u: goto label_4cc148;
        case 0x4cc14cu: goto label_4cc14c;
        case 0x4cc150u: goto label_4cc150;
        case 0x4cc154u: goto label_4cc154;
        case 0x4cc158u: goto label_4cc158;
        case 0x4cc15cu: goto label_4cc15c;
        case 0x4cc160u: goto label_4cc160;
        case 0x4cc164u: goto label_4cc164;
        case 0x4cc168u: goto label_4cc168;
        case 0x4cc16cu: goto label_4cc16c;
        case 0x4cc170u: goto label_4cc170;
        case 0x4cc174u: goto label_4cc174;
        case 0x4cc178u: goto label_4cc178;
        case 0x4cc17cu: goto label_4cc17c;
        case 0x4cc180u: goto label_4cc180;
        case 0x4cc184u: goto label_4cc184;
        case 0x4cc188u: goto label_4cc188;
        case 0x4cc18cu: goto label_4cc18c;
        case 0x4cc190u: goto label_4cc190;
        case 0x4cc194u: goto label_4cc194;
        case 0x4cc198u: goto label_4cc198;
        case 0x4cc19cu: goto label_4cc19c;
        case 0x4cc1a0u: goto label_4cc1a0;
        case 0x4cc1a4u: goto label_4cc1a4;
        case 0x4cc1a8u: goto label_4cc1a8;
        case 0x4cc1acu: goto label_4cc1ac;
        case 0x4cc1b0u: goto label_4cc1b0;
        case 0x4cc1b4u: goto label_4cc1b4;
        case 0x4cc1b8u: goto label_4cc1b8;
        case 0x4cc1bcu: goto label_4cc1bc;
        case 0x4cc1c0u: goto label_4cc1c0;
        case 0x4cc1c4u: goto label_4cc1c4;
        case 0x4cc1c8u: goto label_4cc1c8;
        case 0x4cc1ccu: goto label_4cc1cc;
        case 0x4cc1d0u: goto label_4cc1d0;
        case 0x4cc1d4u: goto label_4cc1d4;
        case 0x4cc1d8u: goto label_4cc1d8;
        case 0x4cc1dcu: goto label_4cc1dc;
        case 0x4cc1e0u: goto label_4cc1e0;
        case 0x4cc1e4u: goto label_4cc1e4;
        case 0x4cc1e8u: goto label_4cc1e8;
        case 0x4cc1ecu: goto label_4cc1ec;
        case 0x4cc1f0u: goto label_4cc1f0;
        case 0x4cc1f4u: goto label_4cc1f4;
        case 0x4cc1f8u: goto label_4cc1f8;
        case 0x4cc1fcu: goto label_4cc1fc;
        case 0x4cc200u: goto label_4cc200;
        case 0x4cc204u: goto label_4cc204;
        case 0x4cc208u: goto label_4cc208;
        case 0x4cc20cu: goto label_4cc20c;
        case 0x4cc210u: goto label_4cc210;
        case 0x4cc214u: goto label_4cc214;
        case 0x4cc218u: goto label_4cc218;
        case 0x4cc21cu: goto label_4cc21c;
        case 0x4cc220u: goto label_4cc220;
        case 0x4cc224u: goto label_4cc224;
        case 0x4cc228u: goto label_4cc228;
        case 0x4cc22cu: goto label_4cc22c;
        case 0x4cc230u: goto label_4cc230;
        case 0x4cc234u: goto label_4cc234;
        case 0x4cc238u: goto label_4cc238;
        case 0x4cc23cu: goto label_4cc23c;
        case 0x4cc240u: goto label_4cc240;
        case 0x4cc244u: goto label_4cc244;
        case 0x4cc248u: goto label_4cc248;
        case 0x4cc24cu: goto label_4cc24c;
        case 0x4cc250u: goto label_4cc250;
        case 0x4cc254u: goto label_4cc254;
        case 0x4cc258u: goto label_4cc258;
        case 0x4cc25cu: goto label_4cc25c;
        case 0x4cc260u: goto label_4cc260;
        case 0x4cc264u: goto label_4cc264;
        case 0x4cc268u: goto label_4cc268;
        case 0x4cc26cu: goto label_4cc26c;
        case 0x4cc270u: goto label_4cc270;
        case 0x4cc274u: goto label_4cc274;
        case 0x4cc278u: goto label_4cc278;
        case 0x4cc27cu: goto label_4cc27c;
        case 0x4cc280u: goto label_4cc280;
        case 0x4cc284u: goto label_4cc284;
        case 0x4cc288u: goto label_4cc288;
        case 0x4cc28cu: goto label_4cc28c;
        case 0x4cc290u: goto label_4cc290;
        case 0x4cc294u: goto label_4cc294;
        case 0x4cc298u: goto label_4cc298;
        case 0x4cc29cu: goto label_4cc29c;
        case 0x4cc2a0u: goto label_4cc2a0;
        case 0x4cc2a4u: goto label_4cc2a4;
        case 0x4cc2a8u: goto label_4cc2a8;
        case 0x4cc2acu: goto label_4cc2ac;
        case 0x4cc2b0u: goto label_4cc2b0;
        case 0x4cc2b4u: goto label_4cc2b4;
        case 0x4cc2b8u: goto label_4cc2b8;
        case 0x4cc2bcu: goto label_4cc2bc;
        case 0x4cc2c0u: goto label_4cc2c0;
        case 0x4cc2c4u: goto label_4cc2c4;
        case 0x4cc2c8u: goto label_4cc2c8;
        case 0x4cc2ccu: goto label_4cc2cc;
        case 0x4cc2d0u: goto label_4cc2d0;
        case 0x4cc2d4u: goto label_4cc2d4;
        case 0x4cc2d8u: goto label_4cc2d8;
        case 0x4cc2dcu: goto label_4cc2dc;
        case 0x4cc2e0u: goto label_4cc2e0;
        case 0x4cc2e4u: goto label_4cc2e4;
        case 0x4cc2e8u: goto label_4cc2e8;
        case 0x4cc2ecu: goto label_4cc2ec;
        case 0x4cc2f0u: goto label_4cc2f0;
        case 0x4cc2f4u: goto label_4cc2f4;
        case 0x4cc2f8u: goto label_4cc2f8;
        case 0x4cc2fcu: goto label_4cc2fc;
        case 0x4cc300u: goto label_4cc300;
        case 0x4cc304u: goto label_4cc304;
        case 0x4cc308u: goto label_4cc308;
        case 0x4cc30cu: goto label_4cc30c;
        case 0x4cc310u: goto label_4cc310;
        case 0x4cc314u: goto label_4cc314;
        case 0x4cc318u: goto label_4cc318;
        case 0x4cc31cu: goto label_4cc31c;
        case 0x4cc320u: goto label_4cc320;
        case 0x4cc324u: goto label_4cc324;
        case 0x4cc328u: goto label_4cc328;
        case 0x4cc32cu: goto label_4cc32c;
        case 0x4cc330u: goto label_4cc330;
        case 0x4cc334u: goto label_4cc334;
        case 0x4cc338u: goto label_4cc338;
        case 0x4cc33cu: goto label_4cc33c;
        case 0x4cc340u: goto label_4cc340;
        case 0x4cc344u: goto label_4cc344;
        case 0x4cc348u: goto label_4cc348;
        case 0x4cc34cu: goto label_4cc34c;
        default: break;
    }

    ctx->pc = 0x4cc0f0u;

label_4cc0f0:
    // 0x4cc0f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cc0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4cc0f4:
    // 0x4cc0f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4cc0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4cc0f8:
    // 0x4cc0f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cc0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4cc0fc:
    // 0x4cc0fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cc0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cc100:
    // 0x4cc100: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4cc100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cc104:
    // 0x4cc104: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_4cc108:
    if (ctx->pc == 0x4CC108u) {
        ctx->pc = 0x4CC108u;
            // 0x4cc108: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CC10Cu;
        goto label_4cc10c;
    }
    ctx->pc = 0x4CC104u;
    {
        const bool branch_taken_0x4cc104 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC104u;
            // 0x4cc108: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc104) {
            ctx->pc = 0x4CC148u;
            goto label_4cc148;
        }
    }
    ctx->pc = 0x4CC10Cu;
label_4cc10c:
    // 0x4cc10c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_4cc110:
    if (ctx->pc == 0x4CC110u) {
        ctx->pc = 0x4CC110u;
            // 0x4cc110: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4CC114u;
        goto label_4cc114;
    }
    ctx->pc = 0x4CC10Cu;
    {
        const bool branch_taken_0x4cc10c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc10c) {
            ctx->pc = 0x4CC110u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC10Cu;
            // 0x4cc110: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CC134u;
            goto label_4cc134;
        }
    }
    ctx->pc = 0x4CC114u;
label_4cc114:
    // 0x4cc114: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_4cc118:
    if (ctx->pc == 0x4CC118u) {
        ctx->pc = 0x4CC11Cu;
        goto label_4cc11c;
    }
    ctx->pc = 0x4CC114u;
    {
        const bool branch_taken_0x4cc114 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc114) {
            ctx->pc = 0x4CC130u;
            goto label_4cc130;
        }
    }
    ctx->pc = 0x4CC11Cu;
label_4cc11c:
    // 0x4cc11c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4cc11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4cc120:
    // 0x4cc120: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4cc124:
    if (ctx->pc == 0x4CC124u) {
        ctx->pc = 0x4CC128u;
        goto label_4cc128;
    }
    ctx->pc = 0x4CC120u;
    {
        const bool branch_taken_0x4cc120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc120) {
            ctx->pc = 0x4CC130u;
            goto label_4cc130;
        }
    }
    ctx->pc = 0x4CC128u;
label_4cc128:
    // 0x4cc128: 0xc0400a8  jal         func_1002A0
label_4cc12c:
    if (ctx->pc == 0x4CC12Cu) {
        ctx->pc = 0x4CC130u;
        goto label_4cc130;
    }
    ctx->pc = 0x4CC128u;
    SET_GPR_U32(ctx, 31, 0x4CC130u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC130u; }
        if (ctx->pc != 0x4CC130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC130u; }
        if (ctx->pc != 0x4CC130u) { return; }
    }
    ctx->pc = 0x4CC130u;
label_4cc130:
    // 0x4cc130: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4cc130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4cc134:
    // 0x4cc134: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4cc134u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4cc138:
    // 0x4cc138: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4cc13c:
    if (ctx->pc == 0x4CC13Cu) {
        ctx->pc = 0x4CC13Cu;
            // 0x4cc13c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CC140u;
        goto label_4cc140;
    }
    ctx->pc = 0x4CC138u;
    {
        const bool branch_taken_0x4cc138 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4cc138) {
            ctx->pc = 0x4CC13Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC138u;
            // 0x4cc13c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CC14Cu;
            goto label_4cc14c;
        }
    }
    ctx->pc = 0x4CC140u;
label_4cc140:
    // 0x4cc140: 0xc0400a8  jal         func_1002A0
label_4cc144:
    if (ctx->pc == 0x4CC144u) {
        ctx->pc = 0x4CC144u;
            // 0x4cc144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CC148u;
        goto label_4cc148;
    }
    ctx->pc = 0x4CC140u;
    SET_GPR_U32(ctx, 31, 0x4CC148u);
    ctx->pc = 0x4CC144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC140u;
            // 0x4cc144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC148u; }
        if (ctx->pc != 0x4CC148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC148u; }
        if (ctx->pc != 0x4CC148u) { return; }
    }
    ctx->pc = 0x4CC148u;
label_4cc148:
    // 0x4cc148: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4cc148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4cc14c:
    // 0x4cc14c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4cc14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4cc150:
    // 0x4cc150: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cc150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4cc154:
    // 0x4cc154: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cc154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cc158:
    // 0x4cc158: 0x3e00008  jr          $ra
label_4cc15c:
    if (ctx->pc == 0x4CC15Cu) {
        ctx->pc = 0x4CC15Cu;
            // 0x4cc15c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4CC160u;
        goto label_4cc160;
    }
    ctx->pc = 0x4CC158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CC15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC158u;
            // 0x4cc15c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CC160u;
label_4cc160:
    // 0x4cc160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cc160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4cc164:
    // 0x4cc164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4cc164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4cc168:
    // 0x4cc168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cc168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4cc16c:
    // 0x4cc16c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cc16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cc170:
    // 0x4cc170: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4cc170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cc174:
    // 0x4cc174: 0x1220002b  beqz        $s1, . + 4 + (0x2B << 2)
label_4cc178:
    if (ctx->pc == 0x4CC178u) {
        ctx->pc = 0x4CC178u;
            // 0x4cc178: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CC17Cu;
        goto label_4cc17c;
    }
    ctx->pc = 0x4CC174u;
    {
        const bool branch_taken_0x4cc174 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC174u;
            // 0x4cc178: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc174) {
            ctx->pc = 0x4CC224u;
            goto label_4cc224;
        }
    }
    ctx->pc = 0x4CC17Cu;
label_4cc17c:
    // 0x4cc17c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4cc17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4cc180:
    // 0x4cc180: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4cc180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4cc184:
    // 0x4cc184: 0x24631c20  addiu       $v1, $v1, 0x1C20
    ctx->pc = 0x4cc184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7200));
label_4cc188:
    // 0x4cc188: 0x24421c54  addiu       $v0, $v0, 0x1C54
    ctx->pc = 0x4cc188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7252));
label_4cc18c:
    // 0x4cc18c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4cc18cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4cc190:
    // 0x4cc190: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x4cc190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_4cc194:
    // 0x4cc194: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4cc194u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cc198:
    // 0x4cc198: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x4cc198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_4cc19c:
    // 0x4cc19c: 0x320f809  jalr        $t9
label_4cc1a0:
    if (ctx->pc == 0x4CC1A0u) {
        ctx->pc = 0x4CC1A4u;
        goto label_4cc1a4;
    }
    ctx->pc = 0x4CC19Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CC1A4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CC1A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CC1A4u; }
            if (ctx->pc != 0x4CC1A4u) { return; }
        }
        }
    }
    ctx->pc = 0x4CC1A4u;
label_4cc1a4:
    // 0x4cc1a4: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x4cc1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4cc1a8:
    // 0x4cc1a8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_4cc1ac:
    if (ctx->pc == 0x4CC1ACu) {
        ctx->pc = 0x4CC1B0u;
        goto label_4cc1b0;
    }
    ctx->pc = 0x4CC1A8u;
    {
        const bool branch_taken_0x4cc1a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc1a8) {
            ctx->pc = 0x4CC1CCu;
            goto label_4cc1cc;
        }
    }
    ctx->pc = 0x4CC1B0u;
label_4cc1b0:
    // 0x4cc1b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4cc1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4cc1b4:
    // 0x4cc1b4: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x4cc1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_4cc1b8:
    // 0x4cc1b8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_4cc1bc:
    if (ctx->pc == 0x4CC1BCu) {
        ctx->pc = 0x4CC1BCu;
            // 0x4cc1bc: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x4CC1C0u;
        goto label_4cc1c0;
    }
    ctx->pc = 0x4CC1B8u;
    {
        const bool branch_taken_0x4cc1b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC1B8u;
            // 0x4cc1bc: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc1b8) {
            ctx->pc = 0x4CC1CCu;
            goto label_4cc1cc;
        }
    }
    ctx->pc = 0x4CC1C0u;
label_4cc1c0:
    // 0x4cc1c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4cc1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4cc1c4:
    // 0x4cc1c4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4cc1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_4cc1c8:
    // 0x4cc1c8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x4cc1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_4cc1cc:
    // 0x4cc1cc: 0x52200010  beql        $s1, $zero, . + 4 + (0x10 << 2)
label_4cc1d0:
    if (ctx->pc == 0x4CC1D0u) {
        ctx->pc = 0x4CC1D0u;
            // 0x4cc1d0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4CC1D4u;
        goto label_4cc1d4;
    }
    ctx->pc = 0x4CC1CCu;
    {
        const bool branch_taken_0x4cc1cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc1cc) {
            ctx->pc = 0x4CC1D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC1CCu;
            // 0x4cc1d0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CC210u;
            goto label_4cc210;
        }
    }
    ctx->pc = 0x4CC1D4u;
label_4cc1d4:
    // 0x4cc1d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4cc1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4cc1d8:
    // 0x4cc1d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4cc1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4cc1dc:
    // 0x4cc1dc: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x4cc1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_4cc1e0:
    // 0x4cc1e0: 0xc0d37dc  jal         func_34DF70
label_4cc1e4:
    if (ctx->pc == 0x4CC1E4u) {
        ctx->pc = 0x4CC1E4u;
            // 0x4cc1e4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4CC1E8u;
        goto label_4cc1e8;
    }
    ctx->pc = 0x4CC1E0u;
    SET_GPR_U32(ctx, 31, 0x4CC1E8u);
    ctx->pc = 0x4CC1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC1E0u;
            // 0x4cc1e4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC1E8u; }
        if (ctx->pc != 0x4CC1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC1E8u; }
        if (ctx->pc != 0x4CC1E8u) { return; }
    }
    ctx->pc = 0x4CC1E8u;
label_4cc1e8:
    // 0x4cc1e8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_4cc1ec:
    if (ctx->pc == 0x4CC1ECu) {
        ctx->pc = 0x4CC1F0u;
        goto label_4cc1f0;
    }
    ctx->pc = 0x4CC1E8u;
    {
        const bool branch_taken_0x4cc1e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc1e8) {
            ctx->pc = 0x4CC20Cu;
            goto label_4cc20c;
        }
    }
    ctx->pc = 0x4CC1F0u;
label_4cc1f0:
    // 0x4cc1f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4cc1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4cc1f4:
    // 0x4cc1f4: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x4cc1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_4cc1f8:
    // 0x4cc1f8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_4cc1fc:
    if (ctx->pc == 0x4CC1FCu) {
        ctx->pc = 0x4CC1FCu;
            // 0x4cc1fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4CC200u;
        goto label_4cc200;
    }
    ctx->pc = 0x4CC1F8u;
    {
        const bool branch_taken_0x4cc1f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC1F8u;
            // 0x4cc1fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc1f8) {
            ctx->pc = 0x4CC20Cu;
            goto label_4cc20c;
        }
    }
    ctx->pc = 0x4CC200u;
label_4cc200:
    // 0x4cc200: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4cc200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4cc204:
    // 0x4cc204: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4cc204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_4cc208:
    // 0x4cc208: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4cc208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4cc20c:
    // 0x4cc20c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4cc20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4cc210:
    // 0x4cc210: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4cc210u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4cc214:
    // 0x4cc214: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4cc218:
    if (ctx->pc == 0x4CC218u) {
        ctx->pc = 0x4CC218u;
            // 0x4cc218: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CC21Cu;
        goto label_4cc21c;
    }
    ctx->pc = 0x4CC214u;
    {
        const bool branch_taken_0x4cc214 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4cc214) {
            ctx->pc = 0x4CC218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC214u;
            // 0x4cc218: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CC228u;
            goto label_4cc228;
        }
    }
    ctx->pc = 0x4CC21Cu;
label_4cc21c:
    // 0x4cc21c: 0xc0400a8  jal         func_1002A0
label_4cc220:
    if (ctx->pc == 0x4CC220u) {
        ctx->pc = 0x4CC220u;
            // 0x4cc220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CC224u;
        goto label_4cc224;
    }
    ctx->pc = 0x4CC21Cu;
    SET_GPR_U32(ctx, 31, 0x4CC224u);
    ctx->pc = 0x4CC220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC21Cu;
            // 0x4cc220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC224u; }
        if (ctx->pc != 0x4CC224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC224u; }
        if (ctx->pc != 0x4CC224u) { return; }
    }
    ctx->pc = 0x4CC224u;
label_4cc224:
    // 0x4cc224: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4cc224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4cc228:
    // 0x4cc228: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4cc228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4cc22c:
    // 0x4cc22c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cc22cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4cc230:
    // 0x4cc230: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cc230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cc234:
    // 0x4cc234: 0x3e00008  jr          $ra
label_4cc238:
    if (ctx->pc == 0x4CC238u) {
        ctx->pc = 0x4CC238u;
            // 0x4cc238: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4CC23Cu;
        goto label_4cc23c;
    }
    ctx->pc = 0x4CC234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CC238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC234u;
            // 0x4cc238: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CC23Cu;
label_4cc23c:
    // 0x4cc23c: 0x0  nop
    ctx->pc = 0x4cc23cu;
    // NOP
label_4cc240:
    // 0x4cc240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cc240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4cc244:
    // 0x4cc244: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4cc244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4cc248:
    // 0x4cc248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4cc248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4cc24c:
    // 0x4cc24c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4cc24cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4cc250:
    // 0x4cc250: 0x50a30012  beql        $a1, $v1, . + 4 + (0x12 << 2)
label_4cc254:
    if (ctx->pc == 0x4CC254u) {
        ctx->pc = 0x4CC254u;
            // 0x4cc254: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x4CC258u;
        goto label_4cc258;
    }
    ctx->pc = 0x4CC250u;
    {
        const bool branch_taken_0x4cc250 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cc250) {
            ctx->pc = 0x4CC254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC250u;
            // 0x4cc254: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CC29Cu;
            goto label_4cc29c;
        }
    }
    ctx->pc = 0x4CC258u;
label_4cc258:
    // 0x4cc258: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4cc258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4cc25c:
    // 0x4cc25c: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
label_4cc260:
    if (ctx->pc == 0x4CC260u) {
        ctx->pc = 0x4CC264u;
        goto label_4cc264;
    }
    ctx->pc = 0x4CC25Cu;
    {
        const bool branch_taken_0x4cc25c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cc25c) {
            ctx->pc = 0x4CC298u;
            goto label_4cc298;
        }
    }
    ctx->pc = 0x4CC264u;
label_4cc264:
    // 0x4cc264: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4cc264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4cc268:
    // 0x4cc268: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4cc26c:
    if (ctx->pc == 0x4CC26Cu) {
        ctx->pc = 0x4CC270u;
        goto label_4cc270;
    }
    ctx->pc = 0x4CC268u;
    {
        const bool branch_taken_0x4cc268 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cc268) {
            ctx->pc = 0x4CC278u;
            goto label_4cc278;
        }
    }
    ctx->pc = 0x4CC270u;
label_4cc270:
    // 0x4cc270: 0x10000009  b           . + 4 + (0x9 << 2)
label_4cc274:
    if (ctx->pc == 0x4CC274u) {
        ctx->pc = 0x4CC278u;
        goto label_4cc278;
    }
    ctx->pc = 0x4CC270u;
    {
        const bool branch_taken_0x4cc270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc270) {
            ctx->pc = 0x4CC298u;
            goto label_4cc298;
        }
    }
    ctx->pc = 0x4CC278u;
label_4cc278:
    // 0x4cc278: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4cc278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4cc27c:
    // 0x4cc27c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4cc27cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cc280:
    // 0x4cc280: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4cc280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4cc284:
    // 0x4cc284: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4cc284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4cc288:
    // 0x4cc288: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4cc288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4cc28c:
    // 0x4cc28c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4cc28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4cc290:
    // 0x4cc290: 0x320f809  jalr        $t9
label_4cc294:
    if (ctx->pc == 0x4CC294u) {
        ctx->pc = 0x4CC294u;
            // 0x4cc294: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4CC298u;
        goto label_4cc298;
    }
    ctx->pc = 0x4CC290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CC298u);
        ctx->pc = 0x4CC294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC290u;
            // 0x4cc294: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CC298u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CC298u; }
            if (ctx->pc != 0x4CC298u) { return; }
        }
        }
    }
    ctx->pc = 0x4CC298u;
label_4cc298:
    // 0x4cc298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cc298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4cc29c:
    // 0x4cc29c: 0x3e00008  jr          $ra
label_4cc2a0:
    if (ctx->pc == 0x4CC2A0u) {
        ctx->pc = 0x4CC2A0u;
            // 0x4cc2a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4CC2A4u;
        goto label_4cc2a4;
    }
    ctx->pc = 0x4CC29Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CC2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC29Cu;
            // 0x4cc2a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CC2A4u;
label_4cc2a4:
    // 0x4cc2a4: 0x0  nop
    ctx->pc = 0x4cc2a4u;
    // NOP
label_4cc2a8:
    // 0x4cc2a8: 0x0  nop
    ctx->pc = 0x4cc2a8u;
    // NOP
label_4cc2ac:
    // 0x4cc2ac: 0x0  nop
    ctx->pc = 0x4cc2acu;
    // NOP
label_4cc2b0:
    // 0x4cc2b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4cc2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4cc2b4:
    // 0x4cc2b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4cc2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4cc2b8:
    // 0x4cc2b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4cc2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4cc2bc:
    // 0x4cc2bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cc2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cc2c0:
    // 0x4cc2c0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4cc2c0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4cc2c4:
    // 0x4cc2c4: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_4cc2c8:
    if (ctx->pc == 0x4CC2C8u) {
        ctx->pc = 0x4CC2C8u;
            // 0x4cc2c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CC2CCu;
        goto label_4cc2cc;
    }
    ctx->pc = 0x4CC2C4u;
    {
        const bool branch_taken_0x4cc2c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4CC2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC2C4u;
            // 0x4cc2c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc2c4) {
            ctx->pc = 0x4CC2F8u;
            goto label_4cc2f8;
        }
    }
    ctx->pc = 0x4CC2CCu;
label_4cc2cc:
    // 0x4cc2cc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4cc2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4cc2d0:
    // 0x4cc2d0: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_4cc2d4:
    if (ctx->pc == 0x4CC2D4u) {
        ctx->pc = 0x4CC2D4u;
            // 0x4cc2d4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4CC2D8u;
        goto label_4cc2d8;
    }
    ctx->pc = 0x4CC2D0u;
    {
        const bool branch_taken_0x4cc2d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cc2d0) {
            ctx->pc = 0x4CC2D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC2D0u;
            // 0x4cc2d4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CC2ECu;
            goto label_4cc2ec;
        }
    }
    ctx->pc = 0x4CC2D8u;
label_4cc2d8:
    // 0x4cc2d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4cc2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4cc2dc:
    // 0x4cc2dc: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_4cc2e0:
    if (ctx->pc == 0x4CC2E0u) {
        ctx->pc = 0x4CC2E4u;
        goto label_4cc2e4;
    }
    ctx->pc = 0x4CC2DCu;
    {
        const bool branch_taken_0x4cc2dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cc2dc) {
            ctx->pc = 0x4CC340u;
            goto label_4cc340;
        }
    }
    ctx->pc = 0x4CC2E4u;
label_4cc2e4:
    // 0x4cc2e4: 0x10000016  b           . + 4 + (0x16 << 2)
label_4cc2e8:
    if (ctx->pc == 0x4CC2E8u) {
        ctx->pc = 0x4CC2ECu;
        goto label_4cc2ec;
    }
    ctx->pc = 0x4CC2E4u;
    {
        const bool branch_taken_0x4cc2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc2e4) {
            ctx->pc = 0x4CC340u;
            goto label_4cc340;
        }
    }
    ctx->pc = 0x4CC2ECu;
label_4cc2ec:
    // 0x4cc2ec: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4cc2ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4cc2f0:
    // 0x4cc2f0: 0x320f809  jalr        $t9
label_4cc2f4:
    if (ctx->pc == 0x4CC2F4u) {
        ctx->pc = 0x4CC2F8u;
        goto label_4cc2f8;
    }
    ctx->pc = 0x4CC2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CC2F8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CC2F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CC2F8u; }
            if (ctx->pc != 0x4CC2F8u) { return; }
        }
        }
    }
    ctx->pc = 0x4CC2F8u;
label_4cc2f8:
    // 0x4cc2f8: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x4cc2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_4cc2fc:
    // 0x4cc2fc: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_4cc300:
    if (ctx->pc == 0x4CC300u) {
        ctx->pc = 0x4CC304u;
        goto label_4cc304;
    }
    ctx->pc = 0x4CC2FCu;
    {
        const bool branch_taken_0x4cc2fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc2fc) {
            ctx->pc = 0x4CC340u;
            goto label_4cc340;
        }
    }
    ctx->pc = 0x4CC304u;
label_4cc304:
    // 0x4cc304: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4cc304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4cc308:
    // 0x4cc308: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4cc308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4cc30c:
    // 0x4cc30c: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x4cc30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_4cc310:
    // 0x4cc310: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x4cc310u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_4cc314:
    // 0x4cc314: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_4cc318:
    if (ctx->pc == 0x4CC318u) {
        ctx->pc = 0x4CC31Cu;
        goto label_4cc31c;
    }
    ctx->pc = 0x4CC314u;
    {
        const bool branch_taken_0x4cc314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cc314) {
            ctx->pc = 0x4CC340u;
            goto label_4cc340;
        }
    }
    ctx->pc = 0x4CC31Cu;
label_4cc31c:
    // 0x4cc31c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4cc31cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cc320:
    // 0x4cc320: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4cc320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4cc324:
    // 0x4cc324: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x4cc324u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4cc328:
    // 0x4cc328: 0x0  nop
    ctx->pc = 0x4cc328u;
    // NOP
label_4cc32c:
    // 0x4cc32c: 0x0  nop
    ctx->pc = 0x4cc32cu;
    // NOP
label_4cc330:
    // 0x4cc330: 0x0  nop
    ctx->pc = 0x4cc330u;
    // NOP
label_4cc334:
    // 0x4cc334: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4cc338:
    if (ctx->pc == 0x4CC338u) {
        ctx->pc = 0x4CC33Cu;
        goto label_4cc33c;
    }
    ctx->pc = 0x4CC334u;
    {
        const bool branch_taken_0x4cc334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cc334) {
            ctx->pc = 0x4CC320u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4cc320;
        }
    }
    ctx->pc = 0x4CC33Cu;
label_4cc33c:
    // 0x4cc33c: 0x0  nop
    ctx->pc = 0x4cc33cu;
    // NOP
label_4cc340:
    // 0x4cc340: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cc340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4cc344:
    // 0x4cc344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cc344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cc348:
    // 0x4cc348: 0x3e00008  jr          $ra
label_4cc34c:
    if (ctx->pc == 0x4CC34Cu) {
        ctx->pc = 0x4CC34Cu;
            // 0x4cc34c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4CC350u;
        goto label_fallthrough_0x4cc348;
    }
    ctx->pc = 0x4CC348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CC34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC348u;
            // 0x4cc34c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4cc348:
    ctx->pc = 0x4CC350u;
}
