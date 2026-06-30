#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CE188
// Address: 0x1ce188 - 0x1ce3f8
void sub_001CE188_0x1ce188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE188_0x1ce188");
#endif

    switch (ctx->pc) {
        case 0x1ce1e4u: goto label_1ce1e4;
        case 0x1ce1f4u: goto label_1ce1f4;
        case 0x1ce238u: goto label_1ce238;
        case 0x1ce24cu: goto label_1ce24c;
        case 0x1ce2b0u: goto label_1ce2b0;
        case 0x1ce2c8u: goto label_1ce2c8;
        case 0x1ce2d8u: goto label_1ce2d8;
        case 0x1ce320u: goto label_1ce320;
        case 0x1ce330u: goto label_1ce330;
        case 0x1ce354u: goto label_1ce354;
        case 0x1ce368u: goto label_1ce368;
        case 0x1ce394u: goto label_1ce394;
        case 0x1ce3a4u: goto label_1ce3a4;
        case 0x1ce3acu: goto label_1ce3ac;
        case 0x1ce3bcu: goto label_1ce3bc;
        case 0x1ce3c4u: goto label_1ce3c4;
        default: break;
    }

    ctx->pc = 0x1ce188u;

    // 0x1ce188: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1ce188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1ce18c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x1ce18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1ce190: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x1ce190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x1ce194: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1ce194u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce198: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1ce198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1ce19c: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x1ce19cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce1a0: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1ce1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1ce1a4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1ce1a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce1a8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1ce1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1ce1ac: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x1ce1acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce1b0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1ce1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1ce1b4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1ce1b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce1b8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1ce1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1ce1bc: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1ce1bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce1c0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1ce1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1ce1c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ce1c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce1c8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1ce1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1ce1cc: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x1ce1ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce1d0: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE1D0u;
    {
        const bool branch_taken_0x1ce1d0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE1D0u;
            // 0x1ce1d4: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce1d0) {
            ctx->pc = 0x1CE1ECu;
            goto label_1ce1ec;
        }
    }
    ctx->pc = 0x1CE1D8u;
    // 0x1ce1d8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1ce1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1ce1dc: 0xc043c12  jal         func_10F048
    ctx->pc = 0x1CE1DCu;
    SET_GPR_U32(ctx, 31, 0x1CE1E4u);
    ctx->pc = 0x1CE1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE1DCu;
            // 0x1ce1e0: 0x2484c1a0  addiu       $a0, $a0, -0x3E60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE1E4u; }
        if (ctx->pc != 0x1CE1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE1E4u; }
        if (ctx->pc != 0x1CE1E4u) { return; }
    }
    ctx->pc = 0x1CE1E4u;
label_1ce1e4:
    // 0x1ce1e4: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1CE1E4u;
    {
        const bool branch_taken_0x1ce1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE1E4u;
            // 0x1ce1e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce1e4) {
            ctx->pc = 0x1CE3C8u;
            goto label_1ce3c8;
        }
    }
    ctx->pc = 0x1CE1ECu;
label_1ce1ec:
    // 0x1ce1ec: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x1CE1ECu;
    SET_GPR_U32(ctx, 31, 0x1CE1F4u);
    ctx->pc = 0x1CE1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE1ECu;
            // 0x1ce1f0: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE1F4u; }
        if (ctx->pc != 0x1CE1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE1F4u; }
        if (ctx->pc != 0x1CE1F4u) { return; }
    }
    ctx->pc = 0x1CE1F4u;
label_1ce1f4:
    // 0x1ce1f4: 0x3283003f  andi        $v1, $s4, 0x3F
    ctx->pc = 0x1ce1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)63);
    // 0x1ce1f8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE1F8u;
    {
        const bool branch_taken_0x1ce1f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE1F8u;
            // 0x1ce1fc: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce1f8) {
            ctx->pc = 0x1CE214u;
            goto label_1ce214;
        }
    }
    ctx->pc = 0x1CE200u;
    // 0x1ce200: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1ce200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1ce204: 0x2484c1f8  addiu       $a0, $a0, -0x3E08
    ctx->pc = 0x1ce204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951416));
    // 0x1ce208: 0x24a5c230  addiu       $a1, $a1, -0x3DD0
    ctx->pc = 0x1ce208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951472));
    // 0x1ce20c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CE20Cu;
    {
        const bool branch_taken_0x1ce20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE20Cu;
            // 0x1ce210: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce20c) {
            ctx->pc = 0x1CE230u;
            goto label_1ce230;
        }
    }
    ctx->pc = 0x1CE214u;
label_1ce214:
    // 0x1ce214: 0x32a2003f  andi        $v0, $s5, 0x3F
    ctx->pc = 0x1ce214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)63);
    // 0x1ce218: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE218u;
    {
        const bool branch_taken_0x1ce218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE218u;
            // 0x1ce21c: 0x3c050064  lui         $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce218) {
            ctx->pc = 0x1CE240u;
            goto label_1ce240;
        }
    }
    ctx->pc = 0x1CE220u;
    // 0x1ce220: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1ce220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1ce224: 0x2484c240  addiu       $a0, $a0, -0x3DC0
    ctx->pc = 0x1ce224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951488));
    // 0x1ce228: 0x24a5c230  addiu       $a1, $a1, -0x3DD0
    ctx->pc = 0x1ce228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951472));
    // 0x1ce22c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1ce22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ce230:
    // 0x1ce230: 0xc043c12  jal         func_10F048
    ctx->pc = 0x1CE230u;
    SET_GPR_U32(ctx, 31, 0x1CE238u);
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE238u; }
        if (ctx->pc != 0x1CE238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE238u; }
        if (ctx->pc != 0x1CE238u) { return; }
    }
    ctx->pc = 0x1CE238u;
label_1ce238:
    // 0x1ce238: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1CE238u;
    {
        const bool branch_taken_0x1ce238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE238u;
            // 0x1ce23c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce238) {
            ctx->pc = 0x1CE3C8u;
            goto label_1ce3c8;
        }
    }
    ctx->pc = 0x1CE240u;
label_1ce240:
    // 0x1ce240: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1ce240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x1ce244: 0xc07371a  jal         func_1CDC68
    ctx->pc = 0x1CE244u;
    SET_GPR_U32(ctx, 31, 0x1CE24Cu);
    ctx->pc = 0x1CE248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE244u;
            // 0x1ce248: 0x24849740  addiu       $a0, $a0, -0x68C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDC68u;
    if (runtime->hasFunction(0x1CDC68u)) {
        auto targetFn = runtime->lookupFunction(0x1CDC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE24Cu; }
        if (ctx->pc != 0x1CE24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDC68_0x1cdc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE24Cu; }
        if (ctx->pc != 0x1CE24Cu) { return; }
    }
    ctx->pc = 0x1CE24Cu;
label_1ce24c:
    // 0x1ce24c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ce24cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce250: 0x1200005d  beqz        $s0, . + 4 + (0x5D << 2)
    ctx->pc = 0x1CE250u;
    {
        const bool branch_taken_0x1ce250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE250u;
            // 0x1ce254: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce250) {
            ctx->pc = 0x1CE3C8u;
            goto label_1ce3c8;
        }
    }
    ctx->pc = 0x1CE258u;
    // 0x1ce258: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1ce258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ce25c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1ce25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1ce260: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x1ce260u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x1ce264: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1ce264u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1ce268: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x1ce268u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x1ce26c: 0xae57001c  sw          $s7, 0x1C($s2)
    ctx->pc = 0x1ce26cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 23));
    // 0x1ce270: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x1ce270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce274: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x1ce274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x1ce278: 0xae160020  sw          $s6, 0x20($s0)
    ctx->pc = 0x1ce278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 22));
    // 0x1ce27c: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x1ce27cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x1ce280: 0xae130024  sw          $s3, 0x24($s0)
    ctx->pc = 0x1ce280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 19));
    // 0x1ce284: 0xae150028  sw          $s5, 0x28($s0)
    ctx->pc = 0x1ce284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 21));
    // 0x1ce288: 0xae11002c  sw          $s1, 0x2C($s0)
    ctx->pc = 0x1ce288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 17));
    // 0x1ce28c: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x1ce28cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x1ce290: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1ce290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1ce294: 0x16950008  bne         $s4, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CE294u;
    {
        const bool branch_taken_0x1ce294 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 21));
        ctx->pc = 0x1CE298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE294u;
            // 0x1ce298: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce294) {
            ctx->pc = 0x1CE2B8u;
            goto label_1ce2b8;
        }
    }
    ctx->pc = 0x1CE29Cu;
    // 0x1ce29c: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x1ce29cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1ce2a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ce2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce2a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ce2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce2a8: 0xc043e7e  jal         func_10F9F8
    ctx->pc = 0x1CE2A8u;
    SET_GPR_U32(ctx, 31, 0x1CE2B0u);
    ctx->pc = 0x1CE2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE2A8u;
            // 0x1ce2ac: 0x262280a  movz        $a1, $s3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F9F8u;
    if (runtime->hasFunction(0x10F9F8u)) {
        auto targetFn = runtime->lookupFunction(0x10F9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2B0u; }
        if (ctx->pc != 0x1CE2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F9F8_0x10f9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2B0u; }
        if (ctx->pc != 0x1CE2B0u) { return; }
    }
    ctx->pc = 0x1CE2B0u;
label_1ce2b0:
    // 0x1ce2b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1CE2B0u;
    {
        const bool branch_taken_0x1ce2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE2B0u;
            // 0x1ce2b4: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce2b0) {
            ctx->pc = 0x1CE2DCu;
            goto label_1ce2dc;
        }
    }
    ctx->pc = 0x1CE2B8u;
label_1ce2b8:
    // 0x1ce2b8: 0x1a600003  blez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE2B8u;
    {
        const bool branch_taken_0x1ce2b8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1CE2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE2B8u;
            // 0x1ce2bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce2b8) {
            ctx->pc = 0x1CE2C8u;
            goto label_1ce2c8;
        }
    }
    ctx->pc = 0x1CE2C0u;
    // 0x1ce2c0: 0xc043e7e  jal         func_10F9F8
    ctx->pc = 0x1CE2C0u;
    SET_GPR_U32(ctx, 31, 0x1CE2C8u);
    ctx->pc = 0x1CE2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE2C0u;
            // 0x1ce2c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F9F8u;
    if (runtime->hasFunction(0x10F9F8u)) {
        auto targetFn = runtime->lookupFunction(0x10F9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2C8u; }
        if (ctx->pc != 0x1CE2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F9F8_0x10f9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2C8u; }
        if (ctx->pc != 0x1CE2C8u) { return; }
    }
    ctx->pc = 0x1CE2C8u;
label_1ce2c8:
    // 0x1ce2c8: 0x1a200003  blez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE2C8u;
    {
        const bool branch_taken_0x1ce2c8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1CE2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE2C8u;
            // 0x1ce2cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce2c8) {
            ctx->pc = 0x1CE2D8u;
            goto label_1ce2d8;
        }
    }
    ctx->pc = 0x1CE2D0u;
    // 0x1ce2d0: 0xc043e7e  jal         func_10F9F8
    ctx->pc = 0x1CE2D0u;
    SET_GPR_U32(ctx, 31, 0x1CE2D8u);
    ctx->pc = 0x1CE2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE2D0u;
            // 0x1ce2d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F9F8u;
    if (runtime->hasFunction(0x10F9F8u)) {
        auto targetFn = runtime->lookupFunction(0x10F9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2D8u; }
        if (ctx->pc != 0x1CE2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F9F8_0x10f9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2D8u; }
        if (ctx->pc != 0x1CE2D8u) { return; }
    }
    ctx->pc = 0x1CE2D8u;
label_1ce2d8:
    // 0x1ce2d8: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x1ce2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_1ce2dc:
    // 0x1ce2dc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CE2DCu;
    {
        const bool branch_taken_0x1ce2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE2DCu;
            // 0x1ce2e0: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce2dc) {
            ctx->pc = 0x1CE338u;
            goto label_1ce338;
        }
    }
    ctx->pc = 0x1CE2E4u;
    // 0x1ce2e4: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE2E4u;
    {
        const bool branch_taken_0x1ce2e4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE2E4u;
            // 0x1ce2e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce2e4) {
            ctx->pc = 0x1CE2F4u;
            goto label_1ce2f4;
        }
    }
    ctx->pc = 0x1CE2ECu;
    // 0x1ce2ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CE2ECu;
    {
        const bool branch_taken_0x1ce2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE2ECu;
            // 0x1ce2f0: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce2ec) {
            ctx->pc = 0x1CE2F8u;
            goto label_1ce2f8;
        }
    }
    ctx->pc = 0x1CE2F4u;
label_1ce2f4:
    // 0x1ce2f4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1ce2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1ce2f8:
    // 0x1ce2f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ce2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce2fc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ce2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ce300: 0x8e480014  lw          $t0, 0x14($s2)
    ctx->pc = 0x1ce300u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1ce304: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1ce304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce308: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1ce308u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1ce30c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1ce30cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce310: 0x3484001a  ori         $a0, $a0, 0x1A
    ctx->pc = 0x1ce310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    // 0x1ce314: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ce314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce318: 0xc043e0c  jal         func_10F830
    ctx->pc = 0x1CE318u;
    SET_GPR_U32(ctx, 31, 0x1CE320u);
    ctx->pc = 0x1CE31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE318u;
            // 0x1ce31c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F830u;
    if (runtime->hasFunction(0x10F830u)) {
        auto targetFn = runtime->lookupFunction(0x10F830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE320u; }
        if (ctx->pc != 0x1CE320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F830_0x10f830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE320u; }
        if (ctx->pc != 0x1CE320u) { return; }
    }
    ctx->pc = 0x1CE320u;
label_1ce320:
    // 0x1ce320: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1CE320u;
    {
        const bool branch_taken_0x1ce320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE320u;
            // 0x1ce324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce320) {
            ctx->pc = 0x1CE3C8u;
            goto label_1ce3c8;
        }
    }
    ctx->pc = 0x1CE328u;
    // 0x1ce328: 0xc073744  jal         func_1CDD10
    ctx->pc = 0x1CE328u;
    SET_GPR_U32(ctx, 31, 0x1CE330u);
    ctx->pc = 0x1CE32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE328u;
            // 0x1ce32c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD10u;
    if (runtime->hasFunction(0x1CDD10u)) {
        auto targetFn = runtime->lookupFunction(0x1CDD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE330u; }
        if (ctx->pc != 0x1CE330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDD10_0x1cdd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE330u; }
        if (ctx->pc != 0x1CE330u) { return; }
    }
    ctx->pc = 0x1CE330u;
label_1ce330:
    // 0x1ce330: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1CE330u;
    {
        const bool branch_taken_0x1ce330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE330u;
            // 0x1ce334: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce330) {
            ctx->pc = 0x1CE3C8u;
            goto label_1ce3c8;
        }
    }
    ctx->pc = 0x1CE338u;
label_1ce338:
    // 0x1ce338: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1ce338u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce33c: 0x2442c278  addiu       $v0, $v0, -0x3D88
    ctx->pc = 0x1ce33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951544));
    // 0x1ce340: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1ce340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1ce344: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1ce344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1ce348: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ce348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce34c: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x1CE34Cu;
    SET_GPR_U32(ctx, 31, 0x1CE354u);
    ctx->pc = 0x1CE350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE34Cu;
            // 0x1ce350: 0xafb50004  sw          $s5, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE354u; }
        if (ctx->pc != 0x1CE354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE354u; }
        if (ctx->pc != 0x1CE354u) { return; }
    }
    ctx->pc = 0x1CE354u;
label_1ce354:
    // 0x1ce354: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ce354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce358: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE358u;
    {
        const bool branch_taken_0x1ce358 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1CE35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE358u;
            // 0x1ce35c: 0xae510008  sw          $s1, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce358) {
            ctx->pc = 0x1CE370u;
            goto label_1ce370;
        }
    }
    ctx->pc = 0x1CE360u;
    // 0x1ce360: 0xc073744  jal         func_1CDD10
    ctx->pc = 0x1CE360u;
    SET_GPR_U32(ctx, 31, 0x1CE368u);
    ctx->pc = 0x1CE364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE360u;
            // 0x1ce364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD10u;
    if (runtime->hasFunction(0x1CDD10u)) {
        auto targetFn = runtime->lookupFunction(0x1CDD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE368u; }
        if (ctx->pc != 0x1CE368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDD10_0x1cdd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE368u; }
        if (ctx->pc != 0x1CE368u) { return; }
    }
    ctx->pc = 0x1CE368u;
label_1ce368:
    // 0x1ce368: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1CE368u;
    {
        const bool branch_taken_0x1ce368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE368u;
            // 0x1ce36c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce368) {
            ctx->pc = 0x1CE3C8u;
            goto label_1ce3c8;
        }
    }
    ctx->pc = 0x1CE370u;
label_1ce370:
    // 0x1ce370: 0xae150030  sw          $s5, 0x30($s0)
    ctx->pc = 0x1ce370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 21));
    // 0x1ce374: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ce374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ce378: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1ce378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce37c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1ce37cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce380: 0x8e480014  lw          $t0, 0x14($s2)
    ctx->pc = 0x1ce380u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1ce384: 0x3484001a  ori         $a0, $a0, 0x1A
    ctx->pc = 0x1ce384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    // 0x1ce388: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ce388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce38c: 0xc043e0c  jal         func_10F830
    ctx->pc = 0x1CE38Cu;
    SET_GPR_U32(ctx, 31, 0x1CE394u);
    ctx->pc = 0x1CE390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE38Cu;
            // 0x1ce390: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F830u;
    if (runtime->hasFunction(0x10F830u)) {
        auto targetFn = runtime->lookupFunction(0x10F830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE394u; }
        if (ctx->pc != 0x1CE394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F830_0x10f830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE394u; }
        if (ctx->pc != 0x1CE394u) { return; }
    }
    ctx->pc = 0x1CE394u;
label_1ce394:
    // 0x1ce394: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE394u;
    {
        const bool branch_taken_0x1ce394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce394) {
            ctx->pc = 0x1CE3B4u;
            goto label_1ce3b4;
        }
    }
    ctx->pc = 0x1CE39Cu;
    // 0x1ce39c: 0xc073744  jal         func_1CDD10
    ctx->pc = 0x1CE39Cu;
    SET_GPR_U32(ctx, 31, 0x1CE3A4u);
    ctx->pc = 0x1CE3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE39Cu;
            // 0x1ce3a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD10u;
    if (runtime->hasFunction(0x1CDD10u)) {
        auto targetFn = runtime->lookupFunction(0x1CDD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3A4u; }
        if (ctx->pc != 0x1CE3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDD10_0x1cdd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3A4u; }
        if (ctx->pc != 0x1CE3A4u) { return; }
    }
    ctx->pc = 0x1CE3A4u;
label_1ce3a4:
    // 0x1ce3a4: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x1CE3A4u;
    SET_GPR_U32(ctx, 31, 0x1CE3ACu);
    ctx->pc = 0x1CE3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE3A4u;
            // 0x1ce3a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3ACu; }
        if (ctx->pc != 0x1CE3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3ACu; }
        if (ctx->pc != 0x1CE3ACu) { return; }
    }
    ctx->pc = 0x1CE3ACu;
label_1ce3ac:
    // 0x1ce3ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE3ACu;
    {
        const bool branch_taken_0x1ce3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE3ACu;
            // 0x1ce3b0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce3ac) {
            ctx->pc = 0x1CE3C8u;
            goto label_1ce3c8;
        }
    }
    ctx->pc = 0x1CE3B4u;
label_1ce3b4:
    // 0x1ce3b4: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x1CE3B4u;
    SET_GPR_U32(ctx, 31, 0x1CE3BCu);
    ctx->pc = 0x1CE3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE3B4u;
            // 0x1ce3b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3BCu; }
        if (ctx->pc != 0x1CE3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3BCu; }
        if (ctx->pc != 0x1CE3BCu) { return; }
    }
    ctx->pc = 0x1CE3BCu;
label_1ce3bc:
    // 0x1ce3bc: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x1CE3BCu;
    SET_GPR_U32(ctx, 31, 0x1CE3C4u);
    ctx->pc = 0x1CE3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE3BCu;
            // 0x1ce3c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3C4u; }
        if (ctx->pc != 0x1CE3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3C4u; }
        if (ctx->pc != 0x1CE3C4u) { return; }
    }
    ctx->pc = 0x1CE3C4u;
label_1ce3c4:
    // 0x1ce3c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ce3c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ce3c8:
    // 0x1ce3c8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1ce3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ce3cc: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1ce3ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ce3d0: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x1ce3d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ce3d4: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1ce3d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ce3d8: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1ce3d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ce3dc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1ce3dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ce3e0: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1ce3e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce3e4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1ce3e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ce3e8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1ce3e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce3ec: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ce3ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE3F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE3F0u;
            // 0x1ce3f4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE3F8u;
}
