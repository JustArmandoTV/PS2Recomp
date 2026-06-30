#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023E1B0
// Address: 0x23e1b0 - 0x23e320
void sub_0023E1B0_0x23e1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E1B0_0x23e1b0");
#endif

    switch (ctx->pc) {
        case 0x23e1b0u: goto label_23e1b0;
        case 0x23e1b4u: goto label_23e1b4;
        case 0x23e1b8u: goto label_23e1b8;
        case 0x23e1bcu: goto label_23e1bc;
        case 0x23e1c0u: goto label_23e1c0;
        case 0x23e1c4u: goto label_23e1c4;
        case 0x23e1c8u: goto label_23e1c8;
        case 0x23e1ccu: goto label_23e1cc;
        case 0x23e1d0u: goto label_23e1d0;
        case 0x23e1d4u: goto label_23e1d4;
        case 0x23e1d8u: goto label_23e1d8;
        case 0x23e1dcu: goto label_23e1dc;
        case 0x23e1e0u: goto label_23e1e0;
        case 0x23e1e4u: goto label_23e1e4;
        case 0x23e1e8u: goto label_23e1e8;
        case 0x23e1ecu: goto label_23e1ec;
        case 0x23e1f0u: goto label_23e1f0;
        case 0x23e1f4u: goto label_23e1f4;
        case 0x23e1f8u: goto label_23e1f8;
        case 0x23e1fcu: goto label_23e1fc;
        case 0x23e200u: goto label_23e200;
        case 0x23e204u: goto label_23e204;
        case 0x23e208u: goto label_23e208;
        case 0x23e20cu: goto label_23e20c;
        case 0x23e210u: goto label_23e210;
        case 0x23e214u: goto label_23e214;
        case 0x23e218u: goto label_23e218;
        case 0x23e21cu: goto label_23e21c;
        case 0x23e220u: goto label_23e220;
        case 0x23e224u: goto label_23e224;
        case 0x23e228u: goto label_23e228;
        case 0x23e22cu: goto label_23e22c;
        case 0x23e230u: goto label_23e230;
        case 0x23e234u: goto label_23e234;
        case 0x23e238u: goto label_23e238;
        case 0x23e23cu: goto label_23e23c;
        case 0x23e240u: goto label_23e240;
        case 0x23e244u: goto label_23e244;
        case 0x23e248u: goto label_23e248;
        case 0x23e24cu: goto label_23e24c;
        case 0x23e250u: goto label_23e250;
        case 0x23e254u: goto label_23e254;
        case 0x23e258u: goto label_23e258;
        case 0x23e25cu: goto label_23e25c;
        case 0x23e260u: goto label_23e260;
        case 0x23e264u: goto label_23e264;
        case 0x23e268u: goto label_23e268;
        case 0x23e26cu: goto label_23e26c;
        case 0x23e270u: goto label_23e270;
        case 0x23e274u: goto label_23e274;
        case 0x23e278u: goto label_23e278;
        case 0x23e27cu: goto label_23e27c;
        case 0x23e280u: goto label_23e280;
        case 0x23e284u: goto label_23e284;
        case 0x23e288u: goto label_23e288;
        case 0x23e28cu: goto label_23e28c;
        case 0x23e290u: goto label_23e290;
        case 0x23e294u: goto label_23e294;
        case 0x23e298u: goto label_23e298;
        case 0x23e29cu: goto label_23e29c;
        case 0x23e2a0u: goto label_23e2a0;
        case 0x23e2a4u: goto label_23e2a4;
        case 0x23e2a8u: goto label_23e2a8;
        case 0x23e2acu: goto label_23e2ac;
        case 0x23e2b0u: goto label_23e2b0;
        case 0x23e2b4u: goto label_23e2b4;
        case 0x23e2b8u: goto label_23e2b8;
        case 0x23e2bcu: goto label_23e2bc;
        case 0x23e2c0u: goto label_23e2c0;
        case 0x23e2c4u: goto label_23e2c4;
        case 0x23e2c8u: goto label_23e2c8;
        case 0x23e2ccu: goto label_23e2cc;
        case 0x23e2d0u: goto label_23e2d0;
        case 0x23e2d4u: goto label_23e2d4;
        case 0x23e2d8u: goto label_23e2d8;
        case 0x23e2dcu: goto label_23e2dc;
        case 0x23e2e0u: goto label_23e2e0;
        case 0x23e2e4u: goto label_23e2e4;
        case 0x23e2e8u: goto label_23e2e8;
        case 0x23e2ecu: goto label_23e2ec;
        case 0x23e2f0u: goto label_23e2f0;
        case 0x23e2f4u: goto label_23e2f4;
        case 0x23e2f8u: goto label_23e2f8;
        case 0x23e2fcu: goto label_23e2fc;
        case 0x23e300u: goto label_23e300;
        case 0x23e304u: goto label_23e304;
        case 0x23e308u: goto label_23e308;
        case 0x23e30cu: goto label_23e30c;
        case 0x23e310u: goto label_23e310;
        case 0x23e314u: goto label_23e314;
        case 0x23e318u: goto label_23e318;
        case 0x23e31cu: goto label_23e31c;
        default: break;
    }

    ctx->pc = 0x23e1b0u;

label_23e1b0:
    // 0x23e1b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x23e1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_23e1b4:
    // 0x23e1b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23e1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_23e1b8:
    // 0x23e1b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23e1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23e1bc:
    // 0x23e1bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23e1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23e1c0:
    // 0x23e1c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23e1c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23e1c4:
    // 0x23e1c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23e1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23e1c8:
    // 0x23e1c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23e1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23e1cc:
    // 0x23e1cc: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x23e1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
label_23e1d0:
    // 0x23e1d0: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x23e1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_23e1d4:
    // 0x23e1d4: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
label_23e1d8:
    if (ctx->pc == 0x23E1D8u) {
        ctx->pc = 0x23E1D8u;
            // 0x23e1d8: 0x24b10010  addiu       $s1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x23E1DCu;
        goto label_23e1dc;
    }
    ctx->pc = 0x23E1D4u;
    {
        const bool branch_taken_0x23e1d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E1D4u;
            // 0x23e1d8: 0x24b10010  addiu       $s1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e1d4) {
            ctx->pc = 0x23E304u;
            goto label_23e304;
        }
    }
    ctx->pc = 0x23E1DCu;
label_23e1dc:
    // 0x23e1dc: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x23e1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_23e1e0:
    // 0x23e1e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23e1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23e1e4:
    // 0x23e1e4: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x23e1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_23e1e8:
    // 0x23e1e8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23e1e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23e1ec:
    // 0x23e1ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23e1ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23e1f0:
    // 0x23e1f0: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x23e1f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_23e1f4:
    // 0x23e1f4: 0x320f809  jalr        $t9
label_23e1f8:
    if (ctx->pc == 0x23E1F8u) {
        ctx->pc = 0x23E1F8u;
            // 0x23e1f8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23E1FCu;
        goto label_23e1fc;
    }
    ctx->pc = 0x23E1F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23E1FCu);
        ctx->pc = 0x23E1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E1F4u;
            // 0x23e1f8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23E1FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23E1FCu; }
            if (ctx->pc != 0x23E1FCu) { return; }
        }
        }
    }
    ctx->pc = 0x23E1FCu;
label_23e1fc:
    // 0x23e1fc: 0x8e700318  lw          $s0, 0x318($s3)
    ctx->pc = 0x23e1fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 792)));
label_23e200:
    // 0x23e200: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23e200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23e204:
    // 0x23e204: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x23e204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_23e208:
    // 0x23e208: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23e208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23e20c:
    // 0x23e20c: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x23e20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_23e210:
    // 0x23e210: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x23e210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_23e214:
    // 0x23e214: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x23e214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_23e218:
    // 0x23e218: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23e218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_23e21c:
    // 0x23e21c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x23e21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_23e220:
    // 0x23e220: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x23e220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23e224:
    // 0x23e224: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x23e224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_23e228:
    // 0x23e228: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x23e228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_23e22c:
    // 0x23e22c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x23e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_23e230:
    // 0x23e230: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x23e230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_23e234:
    // 0x23e234: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x23e234u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_23e238:
    // 0x23e238: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_23e23c:
    if (ctx->pc == 0x23E23Cu) {
        ctx->pc = 0x23E23Cu;
            // 0x23e23c: 0x27b20060  addiu       $s2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x23E240u;
        goto label_23e240;
    }
    ctx->pc = 0x23E238u;
    {
        const bool branch_taken_0x23e238 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E238u;
            // 0x23e23c: 0x27b20060  addiu       $s2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e238) {
            ctx->pc = 0x23E248u;
            goto label_23e248;
        }
    }
    ctx->pc = 0x23E240u;
label_23e240:
    // 0x23e240: 0x10000005  b           . + 4 + (0x5 << 2)
label_23e244:
    if (ctx->pc == 0x23E244u) {
        ctx->pc = 0x23E244u;
            // 0x23e244: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x23E248u;
        goto label_23e248;
    }
    ctx->pc = 0x23E240u;
    {
        const bool branch_taken_0x23e240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E240u;
            // 0x23e244: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e240) {
            ctx->pc = 0x23E258u;
            goto label_23e258;
        }
    }
    ctx->pc = 0x23E248u;
label_23e248:
    // 0x23e248: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23e248u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23e24c:
    // 0x23e24c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x23e24cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_23e250:
    // 0x23e250: 0x320f809  jalr        $t9
label_23e254:
    if (ctx->pc == 0x23E254u) {
        ctx->pc = 0x23E258u;
        goto label_23e258;
    }
    ctx->pc = 0x23E250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23E258u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23E258u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23E258u; }
            if (ctx->pc != 0x23E258u) { return; }
        }
        }
    }
    ctx->pc = 0x23E258u;
label_23e258:
    // 0x23e258: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x23e258u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_23e25c:
    // 0x23e25c: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x23e25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_23e260:
    // 0x23e260: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x23e260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_23e264:
    // 0x23e264: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x23e264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_23e268:
    // 0x23e268: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x23e268u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_23e26c:
    // 0x23e26c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x23e26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_23e270:
    // 0x23e270: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x23e270u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_23e274:
    // 0x23e274: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x23e274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_23e278:
    // 0x23e278: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23e278u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23e27c:
    // 0x23e27c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x23e27cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_23e280:
    // 0x23e280: 0x320f809  jalr        $t9
label_23e284:
    if (ctx->pc == 0x23E284u) {
        ctx->pc = 0x23E284u;
            // 0x23e284: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x23E288u;
        goto label_23e288;
    }
    ctx->pc = 0x23E280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23E288u);
        ctx->pc = 0x23E284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E280u;
            // 0x23e284: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23E288u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23E288u; }
            if (ctx->pc != 0x23E288u) { return; }
        }
        }
    }
    ctx->pc = 0x23E288u;
label_23e288:
    // 0x23e288: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x23e288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_23e28c:
    // 0x23e28c: 0x18c00004  blez        $a2, . + 4 + (0x4 << 2)
label_23e290:
    if (ctx->pc == 0x23E290u) {
        ctx->pc = 0x23E294u;
        goto label_23e294;
    }
    ctx->pc = 0x23E28Cu;
    {
        const bool branch_taken_0x23e28c = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x23e28c) {
            ctx->pc = 0x23E2A0u;
            goto label_23e2a0;
        }
    }
    ctx->pc = 0x23E294u;
label_23e294:
    // 0x23e294: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x23e294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_23e298:
    // 0x23e298: 0xc07fb6c  jal         func_1FEDB0
label_23e29c:
    if (ctx->pc == 0x23E29Cu) {
        ctx->pc = 0x23E29Cu;
            // 0x23e29c: 0x8e640058  lw          $a0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->pc = 0x23E2A0u;
        goto label_23e2a0;
    }
    ctx->pc = 0x23E298u;
    SET_GPR_U32(ctx, 31, 0x23E2A0u);
    ctx->pc = 0x23E29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E298u;
            // 0x23e29c: 0x8e640058  lw          $a0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEDB0u;
    if (runtime->hasFunction(0x1FEDB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E2A0u; }
        if (ctx->pc != 0x23E2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEDB0_0x1fedb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E2A0u; }
        if (ctx->pc != 0x23E2A0u) { return; }
    }
    ctx->pc = 0x23E2A0u;
label_23e2a0:
    // 0x23e2a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23e2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23e2a4:
    // 0x23e2a4: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x23e2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_23e2a8:
    // 0x23e2a8: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x23e2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_23e2ac:
    // 0x23e2ac: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x23e2acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_23e2b0:
    // 0x23e2b0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x23e2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_23e2b4:
    // 0x23e2b4: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_23e2b8:
    if (ctx->pc == 0x23E2B8u) {
        ctx->pc = 0x23E2B8u;
            // 0x23e2b8: 0x8fa40068  lw          $a0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->pc = 0x23E2BCu;
        goto label_23e2bc;
    }
    ctx->pc = 0x23E2B4u;
    {
        const bool branch_taken_0x23e2b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x23e2b4) {
            ctx->pc = 0x23E2B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23E2B4u;
            // 0x23e2b8: 0x8fa40068  lw          $a0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23E2D0u;
            goto label_23e2d0;
        }
    }
    ctx->pc = 0x23E2BCu;
label_23e2bc:
    // 0x23e2bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23e2bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23e2c0:
    // 0x23e2c0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x23e2c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_23e2c4:
    // 0x23e2c4: 0x320f809  jalr        $t9
label_23e2c8:
    if (ctx->pc == 0x23E2C8u) {
        ctx->pc = 0x23E2CCu;
        goto label_23e2cc;
    }
    ctx->pc = 0x23E2C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23E2CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23E2CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23E2CCu; }
            if (ctx->pc != 0x23E2CCu) { return; }
        }
        }
    }
    ctx->pc = 0x23E2CCu;
label_23e2cc:
    // 0x23e2cc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23e2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23e2d0:
    // 0x23e2d0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x23e2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_23e2d4:
    // 0x23e2d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23e2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_23e2d8:
    // 0x23e2d8: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_23e2dc:
    if (ctx->pc == 0x23E2DCu) {
        ctx->pc = 0x23E2DCu;
            // 0x23e2dc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x23E2E0u;
        goto label_23e2e0;
    }
    ctx->pc = 0x23E2D8u;
    {
        const bool branch_taken_0x23e2d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e2d8) {
            ctx->pc = 0x23E2DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23E2D8u;
            // 0x23e2dc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23E308u;
            goto label_23e308;
        }
    }
    ctx->pc = 0x23E2E0u;
label_23e2e0:
    // 0x23e2e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23e2e4:
    // 0x23e2e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23e2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23e2e8:
    // 0x23e2e8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23e2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23e2ec:
    // 0x23e2ec: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x23e2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_23e2f0:
    // 0x23e2f0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x23e2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_23e2f4:
    // 0x23e2f4: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x23e2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_23e2f8:
    // 0x23e2f8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x23e2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_23e2fc:
    // 0x23e2fc: 0xc0a7ab4  jal         func_29EAD0
label_23e300:
    if (ctx->pc == 0x23E300u) {
        ctx->pc = 0x23E300u;
            // 0x23e300: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x23E304u;
        goto label_23e304;
    }
    ctx->pc = 0x23E2FCu;
    SET_GPR_U32(ctx, 31, 0x23E304u);
    ctx->pc = 0x23E300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E2FCu;
            // 0x23e300: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E304u; }
        if (ctx->pc != 0x23E304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E304u; }
        if (ctx->pc != 0x23E304u) { return; }
    }
    ctx->pc = 0x23E304u;
label_23e304:
    // 0x23e304: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23e304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23e308:
    // 0x23e308: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23e308u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23e30c:
    // 0x23e30c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23e30cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23e310:
    // 0x23e310: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23e310u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23e314:
    // 0x23e314: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23e314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23e318:
    // 0x23e318: 0x3e00008  jr          $ra
label_23e31c:
    if (ctx->pc == 0x23E31Cu) {
        ctx->pc = 0x23E31Cu;
            // 0x23e31c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x23E320u;
        goto label_fallthrough_0x23e318;
    }
    ctx->pc = 0x23E318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E318u;
            // 0x23e31c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x23e318:
    ctx->pc = 0x23E320u;
}
