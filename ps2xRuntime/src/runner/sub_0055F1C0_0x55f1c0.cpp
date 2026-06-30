#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055F1C0
// Address: 0x55f1c0 - 0x55f3a0
void sub_0055F1C0_0x55f1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055F1C0_0x55f1c0");
#endif

    switch (ctx->pc) {
        case 0x55f1c0u: goto label_55f1c0;
        case 0x55f1c4u: goto label_55f1c4;
        case 0x55f1c8u: goto label_55f1c8;
        case 0x55f1ccu: goto label_55f1cc;
        case 0x55f1d0u: goto label_55f1d0;
        case 0x55f1d4u: goto label_55f1d4;
        case 0x55f1d8u: goto label_55f1d8;
        case 0x55f1dcu: goto label_55f1dc;
        case 0x55f1e0u: goto label_55f1e0;
        case 0x55f1e4u: goto label_55f1e4;
        case 0x55f1e8u: goto label_55f1e8;
        case 0x55f1ecu: goto label_55f1ec;
        case 0x55f1f0u: goto label_55f1f0;
        case 0x55f1f4u: goto label_55f1f4;
        case 0x55f1f8u: goto label_55f1f8;
        case 0x55f1fcu: goto label_55f1fc;
        case 0x55f200u: goto label_55f200;
        case 0x55f204u: goto label_55f204;
        case 0x55f208u: goto label_55f208;
        case 0x55f20cu: goto label_55f20c;
        case 0x55f210u: goto label_55f210;
        case 0x55f214u: goto label_55f214;
        case 0x55f218u: goto label_55f218;
        case 0x55f21cu: goto label_55f21c;
        case 0x55f220u: goto label_55f220;
        case 0x55f224u: goto label_55f224;
        case 0x55f228u: goto label_55f228;
        case 0x55f22cu: goto label_55f22c;
        case 0x55f230u: goto label_55f230;
        case 0x55f234u: goto label_55f234;
        case 0x55f238u: goto label_55f238;
        case 0x55f23cu: goto label_55f23c;
        case 0x55f240u: goto label_55f240;
        case 0x55f244u: goto label_55f244;
        case 0x55f248u: goto label_55f248;
        case 0x55f24cu: goto label_55f24c;
        case 0x55f250u: goto label_55f250;
        case 0x55f254u: goto label_55f254;
        case 0x55f258u: goto label_55f258;
        case 0x55f25cu: goto label_55f25c;
        case 0x55f260u: goto label_55f260;
        case 0x55f264u: goto label_55f264;
        case 0x55f268u: goto label_55f268;
        case 0x55f26cu: goto label_55f26c;
        case 0x55f270u: goto label_55f270;
        case 0x55f274u: goto label_55f274;
        case 0x55f278u: goto label_55f278;
        case 0x55f27cu: goto label_55f27c;
        case 0x55f280u: goto label_55f280;
        case 0x55f284u: goto label_55f284;
        case 0x55f288u: goto label_55f288;
        case 0x55f28cu: goto label_55f28c;
        case 0x55f290u: goto label_55f290;
        case 0x55f294u: goto label_55f294;
        case 0x55f298u: goto label_55f298;
        case 0x55f29cu: goto label_55f29c;
        case 0x55f2a0u: goto label_55f2a0;
        case 0x55f2a4u: goto label_55f2a4;
        case 0x55f2a8u: goto label_55f2a8;
        case 0x55f2acu: goto label_55f2ac;
        case 0x55f2b0u: goto label_55f2b0;
        case 0x55f2b4u: goto label_55f2b4;
        case 0x55f2b8u: goto label_55f2b8;
        case 0x55f2bcu: goto label_55f2bc;
        case 0x55f2c0u: goto label_55f2c0;
        case 0x55f2c4u: goto label_55f2c4;
        case 0x55f2c8u: goto label_55f2c8;
        case 0x55f2ccu: goto label_55f2cc;
        case 0x55f2d0u: goto label_55f2d0;
        case 0x55f2d4u: goto label_55f2d4;
        case 0x55f2d8u: goto label_55f2d8;
        case 0x55f2dcu: goto label_55f2dc;
        case 0x55f2e0u: goto label_55f2e0;
        case 0x55f2e4u: goto label_55f2e4;
        case 0x55f2e8u: goto label_55f2e8;
        case 0x55f2ecu: goto label_55f2ec;
        case 0x55f2f0u: goto label_55f2f0;
        case 0x55f2f4u: goto label_55f2f4;
        case 0x55f2f8u: goto label_55f2f8;
        case 0x55f2fcu: goto label_55f2fc;
        case 0x55f300u: goto label_55f300;
        case 0x55f304u: goto label_55f304;
        case 0x55f308u: goto label_55f308;
        case 0x55f30cu: goto label_55f30c;
        case 0x55f310u: goto label_55f310;
        case 0x55f314u: goto label_55f314;
        case 0x55f318u: goto label_55f318;
        case 0x55f31cu: goto label_55f31c;
        case 0x55f320u: goto label_55f320;
        case 0x55f324u: goto label_55f324;
        case 0x55f328u: goto label_55f328;
        case 0x55f32cu: goto label_55f32c;
        case 0x55f330u: goto label_55f330;
        case 0x55f334u: goto label_55f334;
        case 0x55f338u: goto label_55f338;
        case 0x55f33cu: goto label_55f33c;
        case 0x55f340u: goto label_55f340;
        case 0x55f344u: goto label_55f344;
        case 0x55f348u: goto label_55f348;
        case 0x55f34cu: goto label_55f34c;
        case 0x55f350u: goto label_55f350;
        case 0x55f354u: goto label_55f354;
        case 0x55f358u: goto label_55f358;
        case 0x55f35cu: goto label_55f35c;
        case 0x55f360u: goto label_55f360;
        case 0x55f364u: goto label_55f364;
        case 0x55f368u: goto label_55f368;
        case 0x55f36cu: goto label_55f36c;
        case 0x55f370u: goto label_55f370;
        case 0x55f374u: goto label_55f374;
        case 0x55f378u: goto label_55f378;
        case 0x55f37cu: goto label_55f37c;
        case 0x55f380u: goto label_55f380;
        case 0x55f384u: goto label_55f384;
        case 0x55f388u: goto label_55f388;
        case 0x55f38cu: goto label_55f38c;
        case 0x55f390u: goto label_55f390;
        case 0x55f394u: goto label_55f394;
        case 0x55f398u: goto label_55f398;
        case 0x55f39cu: goto label_55f39c;
        default: break;
    }

    ctx->pc = 0x55f1c0u;

label_55f1c0:
    // 0x55f1c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x55f1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_55f1c4:
    // 0x55f1c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x55f1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_55f1c8:
    // 0x55f1c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55f1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_55f1cc:
    // 0x55f1cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x55f1ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55f1d0:
    // 0x55f1d0: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x55f1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_55f1d4:
    // 0x55f1d4: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x55f1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_55f1d8:
    // 0x55f1d8: 0xc075128  jal         func_1D44A0
label_55f1dc:
    if (ctx->pc == 0x55F1DCu) {
        ctx->pc = 0x55F1DCu;
            // 0x55f1dc: 0x2484b7e0  addiu       $a0, $a0, -0x4820 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948832));
        ctx->pc = 0x55F1E0u;
        goto label_55f1e0;
    }
    ctx->pc = 0x55F1D8u;
    SET_GPR_U32(ctx, 31, 0x55F1E0u);
    ctx->pc = 0x55F1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F1D8u;
            // 0x55f1dc: 0x2484b7e0  addiu       $a0, $a0, -0x4820 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F1E0u; }
        if (ctx->pc != 0x55F1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F1E0u; }
        if (ctx->pc != 0x55F1E0u) { return; }
    }
    ctx->pc = 0x55F1E0u;
label_55f1e0:
    // 0x55f1e0: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x55f1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_55f1e4:
    // 0x55f1e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55f1e8:
    // 0x55f1e8: 0x8c65b7e0  lw          $a1, -0x4820($v1)
    ctx->pc = 0x55f1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948832)));
label_55f1ec:
    // 0x55f1ec: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x55f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_55f1f0:
    // 0x55f1f0: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x55f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_55f1f4:
    // 0x55f1f4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x55f1f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_55f1f8:
    // 0x55f1f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_55f1fc:
    if (ctx->pc == 0x55F1FCu) {
        ctx->pc = 0x55F200u;
        goto label_55f200;
    }
    ctx->pc = 0x55F1F8u;
    {
        const bool branch_taken_0x55f1f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x55f1f8) {
            ctx->pc = 0x55F208u;
            goto label_55f208;
        }
    }
    ctx->pc = 0x55F200u;
label_55f200:
    // 0x55f200: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55f200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55f204:
    // 0x55f204: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x55f204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_55f208:
    // 0x55f208: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55f208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55f20c:
    // 0x55f20c: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x55f20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_55f210:
    // 0x55f210: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x55f210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_55f214:
    // 0x55f214: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x55f214u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_55f218:
    // 0x55f218: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_55f21c:
    if (ctx->pc == 0x55F21Cu) {
        ctx->pc = 0x55F21Cu;
            // 0x55f21c: 0x24a40028  addiu       $a0, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->pc = 0x55F220u;
        goto label_55f220;
    }
    ctx->pc = 0x55F218u;
    {
        const bool branch_taken_0x55f218 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x55F21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55F218u;
            // 0x55f21c: 0x24a40028  addiu       $a0, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55f218) {
            ctx->pc = 0x55F228u;
            goto label_55f228;
        }
    }
    ctx->pc = 0x55F220u;
label_55f220:
    // 0x55f220: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55f220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55f224:
    // 0x55f224: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x55f224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_55f228:
    // 0x55f228: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55f228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55f22c:
    // 0x55f22c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x55f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55f230:
    // 0x55f230: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x55f230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_55f234:
    // 0x55f234: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x55f234u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_55f238:
    // 0x55f238: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_55f23c:
    if (ctx->pc == 0x55F23Cu) {
        ctx->pc = 0x55F240u;
        goto label_55f240;
    }
    ctx->pc = 0x55F238u;
    {
        const bool branch_taken_0x55f238 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x55f238) {
            ctx->pc = 0x55F248u;
            goto label_55f248;
        }
    }
    ctx->pc = 0x55F240u;
label_55f240:
    // 0x55f240: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55f240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55f244:
    // 0x55f244: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x55f244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_55f248:
    // 0x55f248: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55f248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55f24c:
    // 0x55f24c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x55f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55f250:
    // 0x55f250: 0x8c42e3a0  lw          $v0, -0x1C60($v0)
    ctx->pc = 0x55f250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960032)));
label_55f254:
    // 0x55f254: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x55f254u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_55f258:
    // 0x55f258: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_55f25c:
    if (ctx->pc == 0x55F25Cu) {
        ctx->pc = 0x55F25Cu;
            // 0x55f25c: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x55F260u;
        goto label_55f260;
    }
    ctx->pc = 0x55F258u;
    {
        const bool branch_taken_0x55f258 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x55f258) {
            ctx->pc = 0x55F25Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55F258u;
            // 0x55f25c: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55F26Cu;
            goto label_55f26c;
        }
    }
    ctx->pc = 0x55F260u;
label_55f260:
    // 0x55f260: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55f260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55f264:
    // 0x55f264: 0xac43e3a0  sw          $v1, -0x1C60($v0)
    ctx->pc = 0x55f264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960032), GPR_U32(ctx, 3));
label_55f268:
    // 0x55f268: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x55f268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_55f26c:
    // 0x55f26c: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x55f26cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_55f270:
    // 0x55f270: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x55f270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_55f274:
    // 0x55f274: 0xc0750c4  jal         func_1D4310
label_55f278:
    if (ctx->pc == 0x55F278u) {
        ctx->pc = 0x55F278u;
            // 0x55f278: 0x2484b810  addiu       $a0, $a0, -0x47F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948880));
        ctx->pc = 0x55F27Cu;
        goto label_55f27c;
    }
    ctx->pc = 0x55F274u;
    SET_GPR_U32(ctx, 31, 0x55F27Cu);
    ctx->pc = 0x55F278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F274u;
            // 0x55f278: 0x2484b810  addiu       $a0, $a0, -0x47F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4310u;
    if (runtime->hasFunction(0x1D4310u)) {
        auto targetFn = runtime->lookupFunction(0x1D4310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F27Cu; }
        if (ctx->pc != 0x55F27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4310_0x1d4310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F27Cu; }
        if (ctx->pc != 0x55F27Cu) { return; }
    }
    ctx->pc = 0x55F27Cu;
label_55f27c:
    // 0x55f27c: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x55f27cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_55f280:
    // 0x55f280: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x55f280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_55f284:
    // 0x55f284: 0x8c86b810  lw          $a2, -0x47F0($a0)
    ctx->pc = 0x55f284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948880)));
label_55f288:
    // 0x55f288: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x55f288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_55f28c:
    // 0x55f28c: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x55f28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_55f290:
    // 0x55f290: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x55f290u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_55f294:
    // 0x55f294: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_55f298:
    if (ctx->pc == 0x55F298u) {
        ctx->pc = 0x55F29Cu;
        goto label_55f29c;
    }
    ctx->pc = 0x55F294u;
    {
        const bool branch_taken_0x55f294 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x55f294) {
            ctx->pc = 0x55F2A4u;
            goto label_55f2a4;
        }
    }
    ctx->pc = 0x55F29Cu;
label_55f29c:
    // 0x55f29c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x55f29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_55f2a0:
    // 0x55f2a0: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x55f2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_55f2a4:
    // 0x55f2a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x55f2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_55f2a8:
    // 0x55f2a8: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x55f2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_55f2ac:
    // 0x55f2ac: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x55f2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_55f2b0:
    // 0x55f2b0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x55f2b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_55f2b4:
    // 0x55f2b4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_55f2b8:
    if (ctx->pc == 0x55F2B8u) {
        ctx->pc = 0x55F2B8u;
            // 0x55f2b8: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->pc = 0x55F2BCu;
        goto label_55f2bc;
    }
    ctx->pc = 0x55F2B4u;
    {
        const bool branch_taken_0x55f2b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x55F2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55F2B4u;
            // 0x55f2b8: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55f2b4) {
            ctx->pc = 0x55F2C4u;
            goto label_55f2c4;
        }
    }
    ctx->pc = 0x55F2BCu;
label_55f2bc:
    // 0x55f2bc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x55f2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_55f2c0:
    // 0x55f2c0: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x55f2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_55f2c4:
    // 0x55f2c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x55f2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_55f2c8:
    // 0x55f2c8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x55f2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_55f2cc:
    // 0x55f2cc: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x55f2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_55f2d0:
    // 0x55f2d0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x55f2d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_55f2d4:
    // 0x55f2d4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_55f2d8:
    if (ctx->pc == 0x55F2D8u) {
        ctx->pc = 0x55F2DCu;
        goto label_55f2dc;
    }
    ctx->pc = 0x55F2D4u;
    {
        const bool branch_taken_0x55f2d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x55f2d4) {
            ctx->pc = 0x55F2E4u;
            goto label_55f2e4;
        }
    }
    ctx->pc = 0x55F2DCu;
label_55f2dc:
    // 0x55f2dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x55f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_55f2e0:
    // 0x55f2e0: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x55f2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_55f2e4:
    // 0x55f2e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x55f2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_55f2e8:
    // 0x55f2e8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x55f2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_55f2ec:
    // 0x55f2ec: 0x8c63e3a0  lw          $v1, -0x1C60($v1)
    ctx->pc = 0x55f2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960032)));
label_55f2f0:
    // 0x55f2f0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x55f2f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_55f2f4:
    // 0x55f2f4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_55f2f8:
    if (ctx->pc == 0x55F2F8u) {
        ctx->pc = 0x55F2F8u;
            // 0x55f2f8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x55F2FCu;
        goto label_55f2fc;
    }
    ctx->pc = 0x55F2F4u;
    {
        const bool branch_taken_0x55f2f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x55f2f4) {
            ctx->pc = 0x55F2F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55F2F4u;
            // 0x55f2f8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55F308u;
            goto label_55f308;
        }
    }
    ctx->pc = 0x55F2FCu;
label_55f2fc:
    // 0x55f2fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x55f2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_55f300:
    // 0x55f300: 0xac64e3a0  sw          $a0, -0x1C60($v1)
    ctx->pc = 0x55f300u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960032), GPR_U32(ctx, 4));
label_55f304:
    // 0x55f304: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x55f304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_55f308:
    // 0x55f308: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55f308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_55f30c:
    // 0x55f30c: 0x3e00008  jr          $ra
label_55f310:
    if (ctx->pc == 0x55F310u) {
        ctx->pc = 0x55F310u;
            // 0x55f310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x55F314u;
        goto label_55f314;
    }
    ctx->pc = 0x55F30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55F310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55F30Cu;
            // 0x55f310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55F314u;
label_55f314:
    // 0x55f314: 0x0  nop
    ctx->pc = 0x55f314u;
    // NOP
label_55f318:
    // 0x55f318: 0x0  nop
    ctx->pc = 0x55f318u;
    // NOP
label_55f31c:
    // 0x55f31c: 0x0  nop
    ctx->pc = 0x55f31cu;
    // NOP
label_55f320:
    // 0x55f320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x55f320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_55f324:
    // 0x55f324: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55f324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55f328:
    // 0x55f328: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x55f328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_55f32c:
    // 0x55f32c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x55f32cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55f330:
    // 0x55f330: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55f330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_55f334:
    // 0x55f334: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x55f334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_55f338:
    // 0x55f338: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x55f338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55f33c:
    // 0x55f33c: 0x8c650050  lw          $a1, 0x50($v1)
    ctx->pc = 0x55f33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_55f340:
    // 0x55f340: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x55f340u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_55f344:
    // 0x55f344: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x55f344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_55f348:
    // 0x55f348: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x55f348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_55f34c:
    // 0x55f34c: 0xc08bff0  jal         func_22FFC0
label_55f350:
    if (ctx->pc == 0x55F350u) {
        ctx->pc = 0x55F350u;
            // 0x55f350: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55F354u;
        goto label_55f354;
    }
    ctx->pc = 0x55F34Cu;
    SET_GPR_U32(ctx, 31, 0x55F354u);
    ctx->pc = 0x55F350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F34Cu;
            // 0x55f350: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F354u; }
        if (ctx->pc != 0x55F354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F354u; }
        if (ctx->pc != 0x55F354u) { return; }
    }
    ctx->pc = 0x55F354u;
label_55f354:
    // 0x55f354: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x55f354u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_55f358:
    // 0x55f358: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x55f358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_55f35c:
    // 0x55f35c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x55f35cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_55f360:
    // 0x55f360: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
label_55f364:
    if (ctx->pc == 0x55F364u) {
        ctx->pc = 0x55F364u;
            // 0x55f364: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x55F368u;
        goto label_55f368;
    }
    ctx->pc = 0x55F360u;
    {
        const bool branch_taken_0x55f360 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x55f360) {
            ctx->pc = 0x55F364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55F360u;
            // 0x55f364: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55F388u;
            goto label_55f388;
        }
    }
    ctx->pc = 0x55F368u;
label_55f368:
    // 0x55f368: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x55f368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_55f36c:
    // 0x55f36c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x55f36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55f370:
    // 0x55f370: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x55f370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_55f374:
    // 0x55f374: 0x320f809  jalr        $t9
label_55f378:
    if (ctx->pc == 0x55F378u) {
        ctx->pc = 0x55F378u;
            // 0x55f378: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x55F37Cu;
        goto label_55f37c;
    }
    ctx->pc = 0x55F374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55F37Cu);
        ctx->pc = 0x55F378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55F374u;
            // 0x55f378: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55F37Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55F37Cu; }
            if (ctx->pc != 0x55F37Cu) { return; }
        }
        }
    }
    ctx->pc = 0x55F37Cu;
label_55f37c:
    // 0x55f37c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x55f37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_55f380:
    // 0x55f380: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x55f380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_55f384:
    // 0x55f384: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x55f384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_55f388:
    // 0x55f388: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55f388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_55f38c:
    // 0x55f38c: 0x3e00008  jr          $ra
label_55f390:
    if (ctx->pc == 0x55F390u) {
        ctx->pc = 0x55F390u;
            // 0x55f390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x55F394u;
        goto label_55f394;
    }
    ctx->pc = 0x55F38Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55F390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55F38Cu;
            // 0x55f390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55F394u;
label_55f394:
    // 0x55f394: 0x0  nop
    ctx->pc = 0x55f394u;
    // NOP
label_55f398:
    // 0x55f398: 0x0  nop
    ctx->pc = 0x55f398u;
    // NOP
label_55f39c:
    // 0x55f39c: 0x0  nop
    ctx->pc = 0x55f39cu;
    // NOP
}
