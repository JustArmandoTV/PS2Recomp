#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00369340
// Address: 0x369340 - 0x369600
void sub_00369340_0x369340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369340_0x369340");
#endif

    switch (ctx->pc) {
        case 0x3693a8u: goto label_3693a8;
        case 0x36941cu: goto label_36941c;
        case 0x3694e8u: goto label_3694e8;
        case 0x3694fcu: goto label_3694fc;
        case 0x36951cu: goto label_36951c;
        case 0x36953cu: goto label_36953c;
        default: break;
    }

    ctx->pc = 0x369340u;

    // 0x369340: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x369340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x369344: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x369344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x369348: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x369348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36934c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x36934cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x369350: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x369350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x369354: 0xa24821  addu        $t1, $a1, $v0
    ctx->pc = 0x369354u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x369358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x369358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36935c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x36935cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x369360: 0xc4621910  lwc1        $f2, 0x1910($v1)
    ctx->pc = 0x369360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x369364: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x369364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x369368: 0xc4411914  lwc1        $f1, 0x1914($v0)
    ctx->pc = 0x369368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36936c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36936cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369370: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x369370u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x369374: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x369374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x369378: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x369378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x36937c: 0x8c454030  lw          $a1, 0x4030($v0)
    ctx->pc = 0x36937cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16432)));
    // 0x369380: 0xc4601918  lwc1        $f0, 0x1918($v1)
    ctx->pc = 0x369380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369384: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x369384u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x369388: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x369388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x36938c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x36938cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x369390: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x369390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x369394: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x369394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x369398: 0x24424080  addiu       $v0, $v0, 0x4080
    ctx->pc = 0x369398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16512));
    // 0x36939c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x36939cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3693a0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3693a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3693a4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x3693a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3693a8:
    // 0x3693a8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x3693a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3693ac: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3693acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3693b0: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x3693b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3693b4: 0x147102b  sltu        $v0, $t2, $a3
    ctx->pc = 0x3693b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3693b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3693b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3693bc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3693bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3693c0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x3693c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3693c4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3693c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3693c8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x3693c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x3693cc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3693CCu;
    {
        const bool branch_taken_0x3693cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3693D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3693CCu;
            // 0x3693d0: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3693cc) {
            ctx->pc = 0x3693A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3693a8;
        }
    }
    ctx->pc = 0x3693D4u;
    // 0x3693d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3693d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3693d8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3693d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x3693dc: 0x8c474030  lw          $a3, 0x4030($v0)
    ctx->pc = 0x3693dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16432)));
    // 0x3693e0: 0x24844080  addiu       $a0, $a0, 0x4080
    ctx->pc = 0x3693e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16512));
    // 0x3693e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3693e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3693e8: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x3693e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3693ec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3693ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3693f0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3693f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3693f4: 0x24424710  addiu       $v0, $v0, 0x4710
    ctx->pc = 0x3693f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18192));
    // 0x3693f8: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x3693f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3693fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3693fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x369400: 0x868021  addu        $s0, $a0, $a2
    ctx->pc = 0x369400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x369404: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x369404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x369408: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x369408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36940c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36940cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x369410: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x369410u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x369414: 0xc074f30  jal         func_1D3CC0
    ctx->pc = 0x369414u;
    SET_GPR_U32(ctx, 31, 0x36941Cu);
    ctx->pc = 0x369418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x369414u;
            // 0x369418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36941Cu; }
        if (ctx->pc != 0x36941Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36941Cu; }
        if (ctx->pc != 0x36941Cu) { return; }
    }
    ctx->pc = 0x36941Cu;
label_36941c:
    // 0x36941c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x36941cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x369420: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369424: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x369424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x369428: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x369428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x36942c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36942cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369430: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369430u;
    {
        const bool branch_taken_0x369430 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369430) {
            ctx->pc = 0x369434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369430u;
            // 0x369434: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369444u;
            goto label_369444;
        }
    }
    ctx->pc = 0x369438u;
    // 0x369438: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36943c: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x36943cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x369440: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x369440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_369444:
    // 0x369444: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369448: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x369448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x36944c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x36944cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x369450: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369450u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369454: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369454u;
    {
        const bool branch_taken_0x369454 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369454) {
            ctx->pc = 0x369458u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369454u;
            // 0x369458: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369468u;
            goto label_369468;
        }
    }
    ctx->pc = 0x36945Cu;
    // 0x36945c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36945cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369460: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x369460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x369464: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x369464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_369468:
    // 0x369468: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36946c: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x36946cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x369470: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x369470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x369474: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369474u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369478: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369478u;
    {
        const bool branch_taken_0x369478 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369478) {
            ctx->pc = 0x36947Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369478u;
            // 0x36947c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36948Cu;
            goto label_36948c;
        }
    }
    ctx->pc = 0x369480u;
    // 0x369480: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369484: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x369484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x369488: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x369488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36948c:
    // 0x36948c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36948cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369490: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x369490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x369494: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x369494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x369498: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369498u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36949c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36949Cu;
    {
        const bool branch_taken_0x36949c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36949c) {
            ctx->pc = 0x3694A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36949Cu;
            // 0x3694a0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3694B0u;
            goto label_3694b0;
        }
    }
    ctx->pc = 0x3694A4u;
    // 0x3694a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3694a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3694a8: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3694a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x3694ac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3694acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3694b0:
    // 0x3694b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3694b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3694b4: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3694b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x3694b8: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3694b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3694bc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3694bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3694c0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3694C0u;
    {
        const bool branch_taken_0x3694c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3694c0) {
            ctx->pc = 0x3694C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3694C0u;
            // 0x3694c4: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3694D4u;
            goto label_3694d4;
        }
    }
    ctx->pc = 0x3694C8u;
    // 0x3694c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3694c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3694cc: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3694ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x3694d0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3694d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3694d4:
    // 0x3694d4: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3694D4u;
    {
        const bool branch_taken_0x3694d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3694d4) {
            ctx->pc = 0x3694D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3694D4u;
            // 0x3694d8: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3694ECu;
            goto label_3694ec;
        }
    }
    ctx->pc = 0x3694DCu;
    // 0x3694dc: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x3694dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3694e0: 0xc0751b8  jal         func_1D46E0
    ctx->pc = 0x3694E0u;
    SET_GPR_U32(ctx, 31, 0x3694E8u);
    ctx->pc = 0x3694E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3694E0u;
            // 0x3694e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3694E8u; }
        if (ctx->pc != 0x3694E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3694E8u; }
        if (ctx->pc != 0x3694E8u) { return; }
    }
    ctx->pc = 0x3694E8u;
label_3694e8:
    // 0x3694e8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3694e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3694ec:
    // 0x3694ec: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3694ECu;
    {
        const bool branch_taken_0x3694ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3694ec) {
            ctx->pc = 0x3694F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3694ECu;
            // 0x3694f0: 0x8e08000c  lw          $t0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369500u;
            goto label_369500;
        }
    }
    ctx->pc = 0x3694F4u;
    // 0x3694f4: 0xc074ea0  jal         func_1D3A80
    ctx->pc = 0x3694F4u;
    SET_GPR_U32(ctx, 31, 0x3694FCu);
    ctx->pc = 0x3694F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3694F4u;
            // 0x3694f8: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3694FCu; }
        if (ctx->pc != 0x3694FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3694FCu; }
        if (ctx->pc != 0x3694FCu) { return; }
    }
    ctx->pc = 0x3694FCu;
label_3694fc:
    // 0x3694fc: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x3694fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_369500:
    // 0x369500: 0x51000007  beql        $t0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x369500u;
    {
        const bool branch_taken_0x369500 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x369500) {
            ctx->pc = 0x369504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369500u;
            // 0x369504: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369520u;
            goto label_369520;
        }
    }
    ctx->pc = 0x369508u;
    // 0x369508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x369508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36950c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x36950cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x369510: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x369510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x369514: 0xc075188  jal         func_1D4620
    ctx->pc = 0x369514u;
    SET_GPR_U32(ctx, 31, 0x36951Cu);
    ctx->pc = 0x369518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x369514u;
            // 0x369518: 0x26270018  addiu       $a3, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4620u;
    if (runtime->hasFunction(0x1D4620u)) {
        auto targetFn = runtime->lookupFunction(0x1D4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36951Cu; }
        if (ctx->pc != 0x36951Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4620_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36951Cu; }
        if (ctx->pc != 0x36951Cu) { return; }
    }
    ctx->pc = 0x36951Cu;
label_36951c:
    // 0x36951c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x36951cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_369520:
    // 0x369520: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x369520u;
    {
        const bool branch_taken_0x369520 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x369520) {
            ctx->pc = 0x36953Cu;
            goto label_36953c;
        }
    }
    ctx->pc = 0x369528u;
    // 0x369528: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x369528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x36952c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36952Cu;
    {
        const bool branch_taken_0x36952c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36952c) {
            ctx->pc = 0x36953Cu;
            goto label_36953c;
        }
    }
    ctx->pc = 0x369534u;
    // 0x369534: 0xc074da8  jal         func_1D36A0
    ctx->pc = 0x369534u;
    SET_GPR_U32(ctx, 31, 0x36953Cu);
    ctx->pc = 0x369538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x369534u;
            // 0x369538: 0x26240024  addiu       $a0, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D36A0u;
    if (runtime->hasFunction(0x1D36A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D36A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36953Cu; }
        if (ctx->pc != 0x36953Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D36A0_0x1d36a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36953Cu; }
        if (ctx->pc != 0x36953Cu) { return; }
    }
    ctx->pc = 0x36953Cu;
label_36953c:
    // 0x36953c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36953cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x369540: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x369540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x369544: 0x8c664030  lw          $a2, 0x4030($v1)
    ctx->pc = 0x369544u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16432)));
    // 0x369548: 0x24844710  addiu       $a0, $a0, 0x4710
    ctx->pc = 0x369548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18192));
    // 0x36954c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x36954cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x369550: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369554: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x369554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x369558: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x369558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x36955c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x36955cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x369560: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x369560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x369564: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x369564u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x369568: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x369568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x36956c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x36956cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x369570: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x369570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x369574: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369574u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369578: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369578u;
    {
        const bool branch_taken_0x369578 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369578) {
            ctx->pc = 0x36957Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369578u;
            // 0x36957c: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36958Cu;
            goto label_36958c;
        }
    }
    ctx->pc = 0x369580u;
    // 0x369580: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369584: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x369584u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x369588: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x369588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_36958c:
    // 0x36958c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36958cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369590: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x369590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x369594: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x369594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x369598: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369598u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36959c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36959Cu;
    {
        const bool branch_taken_0x36959c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36959c) {
            ctx->pc = 0x3695A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36959Cu;
            // 0x3695a0: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3695B0u;
            goto label_3695b0;
        }
    }
    ctx->pc = 0x3695A4u;
    // 0x3695a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3695a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3695a8: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3695a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x3695ac: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3695acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3695b0:
    // 0x3695b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3695b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3695b4: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3695b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x3695b8: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3695b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3695bc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3695bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3695c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3695C0u;
    {
        const bool branch_taken_0x3695c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3695c0) {
            ctx->pc = 0x3695D0u;
            goto label_3695d0;
        }
    }
    ctx->pc = 0x3695C8u;
    // 0x3695c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3695c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3695cc: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3695ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_3695d0:
    // 0x3695d0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3695d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x3695d4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3695d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3695d8: 0x8c844030  lw          $a0, 0x4030($a0)
    ctx->pc = 0x3695d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16432)));
    // 0x3695dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3695dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3695e0: 0xac644030  sw          $a0, 0x4030($v1)
    ctx->pc = 0x3695e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16432), GPR_U32(ctx, 4));
    // 0x3695e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3695e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3695e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3695e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3695ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3695ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3695f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3695F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3695F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3695F0u;
            // 0x3695f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3695F8u;
    // 0x3695f8: 0x0  nop
    ctx->pc = 0x3695f8u;
    // NOP
    // 0x3695fc: 0x0  nop
    ctx->pc = 0x3695fcu;
    // NOP
}
