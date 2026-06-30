#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027D200
// Address: 0x27d200 - 0x27d360
void sub_0027D200_0x27d200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D200_0x27d200");
#endif

    switch (ctx->pc) {
        case 0x27d200u: goto label_27d200;
        case 0x27d204u: goto label_27d204;
        case 0x27d208u: goto label_27d208;
        case 0x27d20cu: goto label_27d20c;
        case 0x27d210u: goto label_27d210;
        case 0x27d214u: goto label_27d214;
        case 0x27d218u: goto label_27d218;
        case 0x27d21cu: goto label_27d21c;
        case 0x27d220u: goto label_27d220;
        case 0x27d224u: goto label_27d224;
        case 0x27d228u: goto label_27d228;
        case 0x27d22cu: goto label_27d22c;
        case 0x27d230u: goto label_27d230;
        case 0x27d234u: goto label_27d234;
        case 0x27d238u: goto label_27d238;
        case 0x27d23cu: goto label_27d23c;
        case 0x27d240u: goto label_27d240;
        case 0x27d244u: goto label_27d244;
        case 0x27d248u: goto label_27d248;
        case 0x27d24cu: goto label_27d24c;
        case 0x27d250u: goto label_27d250;
        case 0x27d254u: goto label_27d254;
        case 0x27d258u: goto label_27d258;
        case 0x27d25cu: goto label_27d25c;
        case 0x27d260u: goto label_27d260;
        case 0x27d264u: goto label_27d264;
        case 0x27d268u: goto label_27d268;
        case 0x27d26cu: goto label_27d26c;
        case 0x27d270u: goto label_27d270;
        case 0x27d274u: goto label_27d274;
        case 0x27d278u: goto label_27d278;
        case 0x27d27cu: goto label_27d27c;
        case 0x27d280u: goto label_27d280;
        case 0x27d284u: goto label_27d284;
        case 0x27d288u: goto label_27d288;
        case 0x27d28cu: goto label_27d28c;
        case 0x27d290u: goto label_27d290;
        case 0x27d294u: goto label_27d294;
        case 0x27d298u: goto label_27d298;
        case 0x27d29cu: goto label_27d29c;
        case 0x27d2a0u: goto label_27d2a0;
        case 0x27d2a4u: goto label_27d2a4;
        case 0x27d2a8u: goto label_27d2a8;
        case 0x27d2acu: goto label_27d2ac;
        case 0x27d2b0u: goto label_27d2b0;
        case 0x27d2b4u: goto label_27d2b4;
        case 0x27d2b8u: goto label_27d2b8;
        case 0x27d2bcu: goto label_27d2bc;
        case 0x27d2c0u: goto label_27d2c0;
        case 0x27d2c4u: goto label_27d2c4;
        case 0x27d2c8u: goto label_27d2c8;
        case 0x27d2ccu: goto label_27d2cc;
        case 0x27d2d0u: goto label_27d2d0;
        case 0x27d2d4u: goto label_27d2d4;
        case 0x27d2d8u: goto label_27d2d8;
        case 0x27d2dcu: goto label_27d2dc;
        case 0x27d2e0u: goto label_27d2e0;
        case 0x27d2e4u: goto label_27d2e4;
        case 0x27d2e8u: goto label_27d2e8;
        case 0x27d2ecu: goto label_27d2ec;
        case 0x27d2f0u: goto label_27d2f0;
        case 0x27d2f4u: goto label_27d2f4;
        case 0x27d2f8u: goto label_27d2f8;
        case 0x27d2fcu: goto label_27d2fc;
        case 0x27d300u: goto label_27d300;
        case 0x27d304u: goto label_27d304;
        case 0x27d308u: goto label_27d308;
        case 0x27d30cu: goto label_27d30c;
        case 0x27d310u: goto label_27d310;
        case 0x27d314u: goto label_27d314;
        case 0x27d318u: goto label_27d318;
        case 0x27d31cu: goto label_27d31c;
        case 0x27d320u: goto label_27d320;
        case 0x27d324u: goto label_27d324;
        case 0x27d328u: goto label_27d328;
        case 0x27d32cu: goto label_27d32c;
        case 0x27d330u: goto label_27d330;
        case 0x27d334u: goto label_27d334;
        case 0x27d338u: goto label_27d338;
        case 0x27d33cu: goto label_27d33c;
        case 0x27d340u: goto label_27d340;
        case 0x27d344u: goto label_27d344;
        case 0x27d348u: goto label_27d348;
        case 0x27d34cu: goto label_27d34c;
        case 0x27d350u: goto label_27d350;
        case 0x27d354u: goto label_27d354;
        case 0x27d358u: goto label_27d358;
        case 0x27d35cu: goto label_27d35c;
        default: break;
    }

    ctx->pc = 0x27d200u;

label_27d200:
    // 0x27d200: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x27d200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_27d204:
    // 0x27d204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27d204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27d208:
    // 0x27d208: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x27d208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_27d20c:
    // 0x27d20c: 0x8c870034  lw          $a3, 0x34($a0)
    ctx->pc = 0x27d20cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_27d210:
    // 0x27d210: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x27d210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_27d214:
    // 0x27d214: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x27d214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_27d218:
    // 0x27d218: 0x14e3001d  bne         $a3, $v1, . + 4 + (0x1D << 2)
label_27d21c:
    if (ctx->pc == 0x27D21Cu) {
        ctx->pc = 0x27D220u;
        goto label_27d220;
    }
    ctx->pc = 0x27D218u;
    {
        const bool branch_taken_0x27d218 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x27d218) {
            ctx->pc = 0x27D290u;
            goto label_27d290;
        }
    }
    ctx->pc = 0x27D220u;
label_27d220:
    // 0x27d220: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x27d220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_27d224:
    // 0x27d224: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x27d224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_27d228:
    // 0x27d228: 0xc0a7214  jal         func_29C850
label_27d22c:
    if (ctx->pc == 0x27D22Cu) {
        ctx->pc = 0x27D22Cu;
            // 0x27d22c: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x27D230u;
        goto label_27d230;
    }
    ctx->pc = 0x27D228u;
    SET_GPR_U32(ctx, 31, 0x27D230u);
    ctx->pc = 0x27D22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D228u;
            // 0x27d22c: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C850u;
    if (runtime->hasFunction(0x29C850u)) {
        auto targetFn = runtime->lookupFunction(0x29C850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D230u; }
        if (ctx->pc != 0x27D230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C850_0x29c850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D230u; }
        if (ctx->pc != 0x27D230u) { return; }
    }
    ctx->pc = 0x27D230u;
label_27d230:
    // 0x27d230: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x27d230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_27d234:
    // 0x27d234: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x27d234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_27d238:
    // 0x27d238: 0xc0a7fc0  jal         func_29FF00
label_27d23c:
    if (ctx->pc == 0x27D23Cu) {
        ctx->pc = 0x27D23Cu;
            // 0x27d23c: 0x24a5d580  addiu       $a1, $a1, -0x2A80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956416));
        ctx->pc = 0x27D240u;
        goto label_27d240;
    }
    ctx->pc = 0x27D238u;
    SET_GPR_U32(ctx, 31, 0x27D240u);
    ctx->pc = 0x27D23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D238u;
            // 0x27d23c: 0x24a5d580  addiu       $a1, $a1, -0x2A80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF00u;
    if (runtime->hasFunction(0x29FF00u)) {
        auto targetFn = runtime->lookupFunction(0x29FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D240u; }
        if (ctx->pc != 0x27D240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF00_0x29ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D240u; }
        if (ctx->pc != 0x27D240u) { return; }
    }
    ctx->pc = 0x27D240u;
label_27d240:
    // 0x27d240: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27d240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27d244:
    // 0x27d244: 0x3c02f032  lui         $v0, 0xF032
    ctx->pc = 0x27d244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61490 << 16));
label_27d248:
    // 0x27d248: 0x8c24ea18  lw          $a0, -0x15E8($at)
    ctx->pc = 0x27d248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961688)));
label_27d24c:
    // 0x27d24c: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x27d24cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
label_27d250:
    // 0x27d250: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27d250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d254:
    // 0x27d254: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x27d254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_27d258:
    // 0x27d258: 0x34463454  ori         $a2, $v0, 0x3454
    ctx->pc = 0x27d258u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13396);
label_27d25c:
    // 0x27d25c: 0x2508d610  addiu       $t0, $t0, -0x29F0
    ctx->pc = 0x27d25cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956560));
label_27d260:
    // 0x27d260: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27d260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27d264:
    // 0x27d264: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x27d264u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_27d268:
    // 0x27d268: 0x320f809  jalr        $t9
label_27d26c:
    if (ctx->pc == 0x27D26Cu) {
        ctx->pc = 0x27D26Cu;
            // 0x27d26c: 0x24090398  addiu       $t1, $zero, 0x398 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 920));
        ctx->pc = 0x27D270u;
        goto label_27d270;
    }
    ctx->pc = 0x27D268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27D270u);
        ctx->pc = 0x27D26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D268u;
            // 0x27d26c: 0x24090398  addiu       $t1, $zero, 0x398 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 920));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27D270u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27D270u; }
            if (ctx->pc != 0x27D270u) { return; }
        }
        }
    }
    ctx->pc = 0x27D270u;
label_27d270:
    // 0x27d270: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x27d270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_27d274:
    // 0x27d274: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x27d274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_27d278:
    // 0x27d278: 0x2442e030  addiu       $v0, $v0, -0x1FD0
    ctx->pc = 0x27d278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959152));
label_27d27c:
    // 0x27d27c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27d27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27d280:
    // 0x27d280: 0xc0a7f78  jal         func_29FDE0
label_27d284:
    if (ctx->pc == 0x27D284u) {
        ctx->pc = 0x27D284u;
            // 0x27d284: 0xafa20210  sw          $v0, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
        ctx->pc = 0x27D288u;
        goto label_27d288;
    }
    ctx->pc = 0x27D280u;
    SET_GPR_U32(ctx, 31, 0x27D288u);
    ctx->pc = 0x27D284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D280u;
            // 0x27d284: 0xafa20210  sw          $v0, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FDE0u;
    if (runtime->hasFunction(0x29FDE0u)) {
        auto targetFn = runtime->lookupFunction(0x29FDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D288u; }
        if (ctx->pc != 0x27D288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FDE0_0x29fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D288u; }
        if (ctx->pc != 0x27D288u) { return; }
    }
    ctx->pc = 0x27D288u;
label_27d288:
    // 0x27d288: 0x1000002f  b           . + 4 + (0x2F << 2)
label_27d28c:
    if (ctx->pc == 0x27D28Cu) {
        ctx->pc = 0x27D290u;
        goto label_27d290;
    }
    ctx->pc = 0x27D288u;
    {
        const bool branch_taken_0x27d288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d288) {
            ctx->pc = 0x27D348u;
            goto label_27d348;
        }
    }
    ctx->pc = 0x27D290u;
label_27d290:
    // 0x27d290: 0x8c870034  lw          $a3, 0x34($a0)
    ctx->pc = 0x27d290u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_27d294:
    // 0x27d294: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x27d294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_27d298:
    // 0x27d298: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x27d298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
label_27d29c:
    // 0x27d29c: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x27d29cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_27d2a0:
    // 0x27d2a0: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x27d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_27d2a4:
    // 0x27d2a4: 0xc4a03030  lwc1        $f0, 0x3030($a1)
    ctx->pc = 0x27d2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d2a8:
    // 0x27d2a8: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x27d2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_27d2ac:
    // 0x27d2ac: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x27d2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_27d2b0:
    // 0x27d2b0: 0xc4a03034  lwc1        $f0, 0x3034($a1)
    ctx->pc = 0x27d2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d2b4:
    // 0x27d2b4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x27d2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_27d2b8:
    // 0x27d2b8: 0xc4a03010  lwc1        $f0, 0x3010($a1)
    ctx->pc = 0x27d2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d2bc:
    // 0x27d2bc: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x27d2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_27d2c0:
    // 0x27d2c0: 0xc4a03014  lwc1        $f0, 0x3014($a1)
    ctx->pc = 0x27d2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d2c4:
    // 0x27d2c4: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x27d2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_27d2c8:
    // 0x27d2c8: 0xc4a03018  lwc1        $f0, 0x3018($a1)
    ctx->pc = 0x27d2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d2cc:
    // 0x27d2cc: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x27d2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_27d2d0:
    // 0x27d2d0: 0xc4a0301c  lwc1        $f0, 0x301C($a1)
    ctx->pc = 0x27d2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d2d4:
    // 0x27d2d4: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x27d2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_27d2d8:
    // 0x27d2d8: 0xc4a03020  lwc1        $f0, 0x3020($a1)
    ctx->pc = 0x27d2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d2dc:
    // 0x27d2dc: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x27d2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
label_27d2e0:
    // 0x27d2e0: 0xc4a03024  lwc1        $f0, 0x3024($a1)
    ctx->pc = 0x27d2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d2e4:
    // 0x27d2e4: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x27d2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
label_27d2e8:
    // 0x27d2e8: 0xc4a03028  lwc1        $f0, 0x3028($a1)
    ctx->pc = 0x27d2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d2ec:
    // 0x27d2ec: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x27d2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
label_27d2f0:
    // 0x27d2f0: 0xc4a0302c  lwc1        $f0, 0x302C($a1)
    ctx->pc = 0x27d2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27d2f4:
    // 0x27d2f4: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x27d2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
label_27d2f8:
    // 0x27d2f8: 0x8cc70014  lw          $a3, 0x14($a2)
    ctx->pc = 0x27d2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_27d2fc:
    // 0x27d2fc: 0x80e30010  lb          $v1, 0x10($a3)
    ctx->pc = 0x27d2fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_27d300:
    // 0x27d300: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x27d300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_27d304:
    // 0x27d304: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x27d304u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_27d308:
    // 0x27d308: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x27d308u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_27d30c:
    // 0x27d30c: 0x80e30010  lb          $v1, 0x10($a3)
    ctx->pc = 0x27d30cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_27d310:
    // 0x27d310: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x27d310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_27d314:
    // 0x27d314: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x27d314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_27d318:
    // 0x27d318: 0x8ca33044  lw          $v1, 0x3044($a1)
    ctx->pc = 0x27d318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12356)));
label_27d31c:
    // 0x27d31c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x27d31cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_27d320:
    // 0x27d320: 0x90a33048  lbu         $v1, 0x3048($a1)
    ctx->pc = 0x27d320u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12360)));
label_27d324:
    // 0x27d324: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x27d324u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
label_27d328:
    // 0x27d328: 0x90a33049  lbu         $v1, 0x3049($a1)
    ctx->pc = 0x27d328u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12361)));
label_27d32c:
    // 0x27d32c: 0xa0830015  sb          $v1, 0x15($a0)
    ctx->pc = 0x27d32cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 3));
label_27d330:
    // 0x27d330: 0x90a3304a  lbu         $v1, 0x304A($a1)
    ctx->pc = 0x27d330u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12362)));
label_27d334:
    // 0x27d334: 0xa0830016  sb          $v1, 0x16($a0)
    ctx->pc = 0x27d334u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 3));
label_27d338:
    // 0x27d338: 0x90a3304b  lbu         $v1, 0x304B($a1)
    ctx->pc = 0x27d338u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12363)));
label_27d33c:
    // 0x27d33c: 0xa0830017  sb          $v1, 0x17($a0)
    ctx->pc = 0x27d33cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 3));
label_27d340:
    // 0x27d340: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x27d340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_27d344:
    // 0x27d344: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x27d344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_27d348:
    // 0x27d348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27d348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27d34c:
    // 0x27d34c: 0x3e00008  jr          $ra
label_27d350:
    if (ctx->pc == 0x27D350u) {
        ctx->pc = 0x27D350u;
            // 0x27d350: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x27D354u;
        goto label_27d354;
    }
    ctx->pc = 0x27D34Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D34Cu;
            // 0x27d350: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D354u;
label_27d354:
    // 0x27d354: 0x0  nop
    ctx->pc = 0x27d354u;
    // NOP
label_27d358:
    // 0x27d358: 0x0  nop
    ctx->pc = 0x27d358u;
    // NOP
label_27d35c:
    // 0x27d35c: 0x0  nop
    ctx->pc = 0x27d35cu;
    // NOP
}
