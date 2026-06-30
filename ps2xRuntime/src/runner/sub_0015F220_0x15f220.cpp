#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015F220
// Address: 0x15f220 - 0x15f5d0
void sub_0015F220_0x15f220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F220_0x15f220");
#endif

    switch (ctx->pc) {
        case 0x15f25cu: goto label_15f25c;
        case 0x15f294u: goto label_15f294;
        case 0x15f2ecu: goto label_15f2ec;
        case 0x15f340u: goto label_15f340;
        case 0x15f370u: goto label_15f370;
        case 0x15f394u: goto label_15f394;
        case 0x15f3ccu: goto label_15f3cc;
        case 0x15f3e0u: goto label_15f3e0;
        case 0x15f3f0u: goto label_15f3f0;
        case 0x15f3fcu: goto label_15f3fc;
        case 0x15f410u: goto label_15f410;
        case 0x15f42cu: goto label_15f42c;
        case 0x15f438u: goto label_15f438;
        case 0x15f440u: goto label_15f440;
        case 0x15f450u: goto label_15f450;
        case 0x15f458u: goto label_15f458;
        case 0x15f464u: goto label_15f464;
        case 0x15f470u: goto label_15f470;
        case 0x15f47cu: goto label_15f47c;
        case 0x15f488u: goto label_15f488;
        case 0x15f490u: goto label_15f490;
        case 0x15f498u: goto label_15f498;
        case 0x15f4c0u: goto label_15f4c0;
        case 0x15f4d4u: goto label_15f4d4;
        case 0x15f4e0u: goto label_15f4e0;
        case 0x15f4f0u: goto label_15f4f0;
        case 0x15f4fcu: goto label_15f4fc;
        case 0x15f508u: goto label_15f508;
        case 0x15f51cu: goto label_15f51c;
        case 0x15f528u: goto label_15f528;
        case 0x15f53cu: goto label_15f53c;
        case 0x15f550u: goto label_15f550;
        case 0x15f55cu: goto label_15f55c;
        case 0x15f574u: goto label_15f574;
        case 0x15f580u: goto label_15f580;
        case 0x15f594u: goto label_15f594;
        default: break;
    }

    ctx->pc = 0x15f220u;

    // 0x15f220: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x15f220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x15f224: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15f224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15f228: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15f228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15f22c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15f22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15f230: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15f230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15f234: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15f234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15f238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15f238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15f23c: 0xafa5006c  sw          $a1, 0x6C($sp)
    ctx->pc = 0x15f23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 5));
    // 0x15f240: 0x8c83011c  lw          $v1, 0x11C($a0)
    ctx->pc = 0x15f240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
    // 0x15f244: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x15F244u;
    {
        const bool branch_taken_0x15f244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F244u;
            // 0x15f248: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f244) {
            ctx->pc = 0x15F378u;
            goto label_15f378;
        }
    }
    ctx->pc = 0x15F24Cu;
    // 0x15f24c: 0x90620030  lbu         $v0, 0x30($v1)
    ctx->pc = 0x15f24cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x15f250: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x15F250u;
    {
        const bool branch_taken_0x15f250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f250) {
            ctx->pc = 0x15F308u;
            goto label_15f308;
        }
    }
    ctx->pc = 0x15F258u;
    // 0x15f258: 0x8c660018  lw          $a2, 0x18($v1)
    ctx->pc = 0x15f258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_15f25c:
    // 0x15f25c: 0x54c00013  bnel        $a2, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x15F25Cu;
    {
        const bool branch_taken_0x15f25c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f25c) {
            ctx->pc = 0x15F260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F25Cu;
            // 0x15f260: 0x90c20030  lbu         $v0, 0x30($a2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F2ACu;
            goto label_15f2ac;
        }
    }
    ctx->pc = 0x15F264u;
    // 0x15f264: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x15f264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x15f268: 0x268200e8  addiu       $v0, $s4, 0xE8
    ctx->pc = 0x15f268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 232));
    // 0x15f26c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x15f26cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x15f270: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x15f270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x15f274: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x15f274u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x15f278: 0x268500dc  addiu       $a1, $s4, 0xDC
    ctx->pc = 0x15f278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 220));
    // 0x15f27c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x15f27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x15f280: 0x27a600d4  addiu       $a2, $sp, 0xD4
    ctx->pc = 0x15f280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x15f284: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x15f284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x15f288: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x15f288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x15f28c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x15F28Cu;
    SET_GPR_U32(ctx, 31, 0x15F294u);
    ctx->pc = 0x15F290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F28Cu;
            // 0x15f290: 0xafa200d4  sw          $v0, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F294u; }
        if (ctx->pc != 0x15F294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F294u; }
        if (ctx->pc != 0x15F294u) { return; }
    }
    ctx->pc = 0x15F294u;
label_15f294:
    // 0x15f294: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x15f294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x15f298: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x15f298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x15f29c: 0xafa300fc  sw          $v1, 0xFC($sp)
    ctx->pc = 0x15f29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 3));
    // 0x15f2a0: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x15f2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f2a4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x15F2A4u;
    {
        const bool branch_taken_0x15f2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F2A4u;
            // 0x15f2a8: 0xe4400034  swc1        $f0, 0x34($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f2a4) {
            ctx->pc = 0x15F354u;
            goto label_15f354;
        }
    }
    ctx->pc = 0x15F2ACu;
label_15f2ac:
    // 0x15f2ac: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x15F2ACu;
    {
        const bool branch_taken_0x15f2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f2ac) {
            ctx->pc = 0x15F2B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F2ACu;
            // 0x15f2b0: 0x8cc60018  lw          $a2, 0x18($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F25Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15f25c;
        }
    }
    ctx->pc = 0x15F2B4u;
    // 0x15f2b4: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x15f2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x15f2b8: 0x24c20028  addiu       $v0, $a2, 0x28
    ctx->pc = 0x15f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
    // 0x15f2bc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x15f2bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x15f2c0: 0x24c5001c  addiu       $a1, $a2, 0x1C
    ctx->pc = 0x15f2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
    // 0x15f2c4: 0xac660018  sw          $a2, 0x18($v1)
    ctx->pc = 0x15f2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
    // 0x15f2c8: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x15f2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x15f2cc: 0x8cc80014  lw          $t0, 0x14($a2)
    ctx->pc = 0x15f2ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x15f2d0: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x15f2d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x15f2d4: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x15f2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x15f2d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x15f2d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x15f2dc: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x15f2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x15f2e0: 0xac680014  sw          $t0, 0x14($v1)
    ctx->pc = 0x15f2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 8));
    // 0x15f2e4: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x15F2E4u;
    SET_GPR_U32(ctx, 31, 0x15F2ECu);
    ctx->pc = 0x15F2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F2E4u;
            // 0x15f2e8: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F2ECu; }
        if (ctx->pc != 0x15F2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F2ECu; }
        if (ctx->pc != 0x15F2ECu) { return; }
    }
    ctx->pc = 0x15F2ECu;
label_15f2ec:
    // 0x15f2ec: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x15f2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x15f2f0: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x15f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x15f2f4: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x15f2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
    // 0x15f2f8: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x15f2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f2fc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x15F2FCu;
    {
        const bool branch_taken_0x15f2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F2FCu;
            // 0x15f300: 0xe4400034  swc1        $f0, 0x34($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f2fc) {
            ctx->pc = 0x15F354u;
            goto label_15f354;
        }
    }
    ctx->pc = 0x15F304u;
    // 0x15f304: 0x0  nop
    ctx->pc = 0x15f304u;
    // NOP
label_15f308:
    // 0x15f308: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x15f308u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x15f30c: 0x8e83011c  lw          $v1, 0x11C($s4)
    ctx->pc = 0x15f30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x15f310: 0x27a400e4  addiu       $a0, $sp, 0xE4
    ctx->pc = 0x15f310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x15f314: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x15f314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x15f318: 0x27a600cc  addiu       $a2, $sp, 0xCC
    ctx->pc = 0x15f318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x15f31c: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x15f31cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x15f320: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x15f320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x15f324: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15f324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15f328: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x15f328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x15f32c: 0x8e83011c  lw          $v1, 0x11C($s4)
    ctx->pc = 0x15f32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x15f330: 0x24620028  addiu       $v0, $v1, 0x28
    ctx->pc = 0x15f330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x15f334: 0x2465001c  addiu       $a1, $v1, 0x1C
    ctx->pc = 0x15f334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x15f338: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x15F338u;
    SET_GPR_U32(ctx, 31, 0x15F340u);
    ctx->pc = 0x15F33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F338u;
            // 0x15f33c: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F340u; }
        if (ctx->pc != 0x15F340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F340u; }
        if (ctx->pc != 0x15F340u) { return; }
    }
    ctx->pc = 0x15F340u;
label_15f340:
    // 0x15f340: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x15f340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x15f344: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x15f344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x15f348: 0xafa300f4  sw          $v1, 0xF4($sp)
    ctx->pc = 0x15f348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
    // 0x15f34c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x15f34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f350: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x15f350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_15f354:
    // 0x15f354: 0x268200bc  addiu       $v0, $s4, 0xBC
    ctx->pc = 0x15f354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 188));
    // 0x15f358: 0x268500b0  addiu       $a1, $s4, 0xB0
    ctx->pc = 0x15f358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x15f35c: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x15f35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x15f360: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x15f360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x15f364: 0x27a600dc  addiu       $a2, $sp, 0xDC
    ctx->pc = 0x15f364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x15f368: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x15F368u;
    SET_GPR_U32(ctx, 31, 0x15F370u);
    ctx->pc = 0x15F36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F368u;
            // 0x15f36c: 0x27a7006c  addiu       $a3, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F370u; }
        if (ctx->pc != 0x15F370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F370u; }
        if (ctx->pc != 0x15F370u) { return; }
    }
    ctx->pc = 0x15F370u;
label_15f370:
    // 0x15f370: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x15F370u;
    {
        const bool branch_taken_0x15f370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f370) {
            ctx->pc = 0x15F5A8u;
            goto label_15f5a8;
        }
    }
    ctx->pc = 0x15F378u;
label_15f378:
    // 0x15f378: 0x268200e8  addiu       $v0, $s4, 0xE8
    ctx->pc = 0x15f378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 232));
    // 0x15f37c: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x15f37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x15f380: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x15f380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x15f384: 0x268500dc  addiu       $a1, $s4, 0xDC
    ctx->pc = 0x15f384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 220));
    // 0x15f388: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x15f388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x15f38c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x15F38Cu;
    SET_GPR_U32(ctx, 31, 0x15F394u);
    ctx->pc = 0x15F390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F38Cu;
            // 0x15f390: 0x27a7006c  addiu       $a3, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F394u; }
        if (ctx->pc != 0x15F394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F394u; }
        if (ctx->pc != 0x15F394u) { return; }
    }
    ctx->pc = 0x15F394u;
label_15f394:
    // 0x15f394: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x15f394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x15f398: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x15f398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15f39c: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x15f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x15f3a0: 0x2685009c  addiu       $a1, $s4, 0x9C
    ctx->pc = 0x15f3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 156));
    // 0x15f3a4: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x15f3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x15f3a8: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x15f3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f3ac: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x15f3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x15f3b0: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x15f3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x15f3b4: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x15f3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x15f3b8: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x15f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x15f3bc: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x15f3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x15f3c0: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x15f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x15f3c4: 0xc057ab4  jal         func_15EAD0
    ctx->pc = 0x15F3C4u;
    SET_GPR_U32(ctx, 31, 0x15F3CCu);
    ctx->pc = 0x15F3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F3C4u;
            // 0x15f3c8: 0xafa200c4  sw          $v0, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAD0u;
    if (runtime->hasFunction(0x15EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F3CCu; }
        if (ctx->pc != 0x15F3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAD0_0x15ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F3CCu; }
        if (ctx->pc != 0x15F3CCu) { return; }
    }
    ctx->pc = 0x15F3CCu;
label_15f3cc:
    // 0x15f3cc: 0x27a400b4  addiu       $a0, $sp, 0xB4
    ctx->pc = 0x15f3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x15f3d0: 0x2685009c  addiu       $a1, $s4, 0x9C
    ctx->pc = 0x15f3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 156));
    // 0x15f3d4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x15f3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15f3d8: 0xc057c78  jal         func_15F1E0
    ctx->pc = 0x15F3D8u;
    SET_GPR_U32(ctx, 31, 0x15F3E0u);
    ctx->pc = 0x15F3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F3D8u;
            // 0x15f3dc: 0x27a700c4  addiu       $a3, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F1E0u;
    if (runtime->hasFunction(0x15F1E0u)) {
        auto targetFn = runtime->lookupFunction(0x15F1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F3E0u; }
        if (ctx->pc != 0x15F3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F1E0_0x15f1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F3E0u; }
        if (ctx->pc != 0x15F3E0u) { return; }
    }
    ctx->pc = 0x15F3E0u;
label_15f3e0:
    // 0x15f3e0: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x15f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x15f3e4: 0x27a500b4  addiu       $a1, $sp, 0xB4
    ctx->pc = 0x15f3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x15f3e8: 0xc057a08  jal         func_15E820
    ctx->pc = 0x15F3E8u;
    SET_GPR_U32(ctx, 31, 0x15F3F0u);
    ctx->pc = 0x15F3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F3E8u;
            // 0x15f3ec: 0x24440038  addiu       $a0, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E820u;
    if (runtime->hasFunction(0x15E820u)) {
        auto targetFn = runtime->lookupFunction(0x15E820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F3F0u; }
        if (ctx->pc != 0x15F3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E820_0x15e820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F3F0u; }
        if (ctx->pc != 0x15F3F0u) { return; }
    }
    ctx->pc = 0x15F3F0u;
label_15f3f0:
    // 0x15f3f0: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x15f3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x15f3f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15f3f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f3f8: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x15f3f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15f3fc:
    // 0x15f3fc: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x15f3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x15f400: 0x10600065  beqz        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x15F400u;
    {
        const bool branch_taken_0x15f400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f400) {
            ctx->pc = 0x15F598u;
            goto label_15f598;
        }
    }
    ctx->pc = 0x15F408u;
    // 0x15f408: 0xc057c74  jal         func_15F1D0
    ctx->pc = 0x15F408u;
    SET_GPR_U32(ctx, 31, 0x15F410u);
    ctx->pc = 0x15F40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F408u;
            // 0x15f40c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F1D0u;
    if (runtime->hasFunction(0x15F1D0u)) {
        auto targetFn = runtime->lookupFunction(0x15F1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F410u; }
        if (ctx->pc != 0x15F410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F1D0_0x15f1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F410u; }
        if (ctx->pc != 0x15F410u) { return; }
    }
    ctx->pc = 0x15F410u;
label_15f410:
    // 0x15f410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f414: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x15f414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x15f418: 0x2628004  sllv        $s0, $v0, $s3
    ctx->pc = 0x15f418u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x15f41c: 0x268500c4  addiu       $a1, $s4, 0xC4
    ctx->pc = 0x15f41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 196));
    // 0x15f420: 0x27a600a8  addiu       $a2, $sp, 0xA8
    ctx->pc = 0x15f420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x15f424: 0xc057c70  jal         func_15F1C0
    ctx->pc = 0x15F424u;
    SET_GPR_U32(ctx, 31, 0x15F42Cu);
    ctx->pc = 0x15F428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F424u;
            // 0x15f428: 0xafb000a8  sw          $s0, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F1C0u;
    if (runtime->hasFunction(0x15F1C0u)) {
        auto targetFn = runtime->lookupFunction(0x15F1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F42Cu; }
        if (ctx->pc != 0x15F42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F1C0_0x15f1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F42Cu; }
        if (ctx->pc != 0x15F42Cu) { return; }
    }
    ctx->pc = 0x15F42Cu;
label_15f42c:
    // 0x15f42c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x15f42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x15f430: 0xc057c6c  jal         func_15F1B0
    ctx->pc = 0x15F430u;
    SET_GPR_U32(ctx, 31, 0x15F438u);
    ctx->pc = 0x15F434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F430u;
            // 0x15f434: 0x27a500ac  addiu       $a1, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F1B0u;
    if (runtime->hasFunction(0x15F1B0u)) {
        auto targetFn = runtime->lookupFunction(0x15F1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F438u; }
        if (ctx->pc != 0x15F438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F1B0_0x15f1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F438u; }
        if (ctx->pc != 0x15F438u) { return; }
    }
    ctx->pc = 0x15F438u;
label_15f438:
    // 0x15f438: 0xc057a0c  jal         func_15E830
    ctx->pc = 0x15F438u;
    SET_GPR_U32(ctx, 31, 0x15F440u);
    ctx->pc = 0x15F43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F438u;
            // 0x15f43c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E830u;
    if (runtime->hasFunction(0x15E830u)) {
        auto targetFn = runtime->lookupFunction(0x15E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F440u; }
        if (ctx->pc != 0x15F440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E830_0x15e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F440u; }
        if (ctx->pc != 0x15F440u) { return; }
    }
    ctx->pc = 0x15F440u;
label_15f440:
    // 0x15f440: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x15f440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15f444: 0x8c51000c  lw          $s1, 0xC($v0)
    ctx->pc = 0x15f444u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15f448: 0xc057a10  jal         func_15E840
    ctx->pc = 0x15F448u;
    SET_GPR_U32(ctx, 31, 0x15F450u);
    ctx->pc = 0x15F44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F448u;
            // 0x15f44c: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E840u;
    if (runtime->hasFunction(0x15E840u)) {
        auto targetFn = runtime->lookupFunction(0x15E840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F450u; }
        if (ctx->pc != 0x15F450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E840_0x15e840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F450u; }
        if (ctx->pc != 0x15F450u) { return; }
    }
    ctx->pc = 0x15F450u;
label_15f450:
    // 0x15f450: 0xc057a10  jal         func_15E840
    ctx->pc = 0x15F450u;
    SET_GPR_U32(ctx, 31, 0x15F458u);
    ctx->pc = 0x15F454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F450u;
            // 0x15f454: 0x27a400b8  addiu       $a0, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E840u;
    if (runtime->hasFunction(0x15E840u)) {
        auto targetFn = runtime->lookupFunction(0x15E840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F458u; }
        if (ctx->pc != 0x15F458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E840_0x15e840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F458u; }
        if (ctx->pc != 0x15F458u) { return; }
    }
    ctx->pc = 0x15F458u;
label_15f458:
    // 0x15f458: 0x27a400a4  addiu       $a0, $sp, 0xA4
    ctx->pc = 0x15f458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x15f45c: 0xc057b28  jal         func_15ECA0
    ctx->pc = 0x15F45Cu;
    SET_GPR_U32(ctx, 31, 0x15F464u);
    ctx->pc = 0x15F460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F45Cu;
            // 0x15f460: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ECA0u;
    if (runtime->hasFunction(0x15ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x15ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F464u; }
        if (ctx->pc != 0x15F464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ECA0_0x15eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F464u; }
        if (ctx->pc != 0x15F464u) { return; }
    }
    ctx->pc = 0x15F464u;
label_15f464:
    // 0x15f464: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x15f464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x15f468: 0xc057a08  jal         func_15E820
    ctx->pc = 0x15F468u;
    SET_GPR_U32(ctx, 31, 0x15F470u);
    ctx->pc = 0x15F46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F468u;
            // 0x15f46c: 0x27a500a4  addiu       $a1, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E820u;
    if (runtime->hasFunction(0x15E820u)) {
        auto targetFn = runtime->lookupFunction(0x15E820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F470u; }
        if (ctx->pc != 0x15F470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E820_0x15e820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F470u; }
        if (ctx->pc != 0x15F470u) { return; }
    }
    ctx->pc = 0x15F470u;
label_15f470:
    // 0x15f470: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x15f470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x15f474: 0xc057ab4  jal         func_15EAD0
    ctx->pc = 0x15F474u;
    SET_GPR_U32(ctx, 31, 0x15F47Cu);
    ctx->pc = 0x15F478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F474u;
            // 0x15f478: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAD0u;
    if (runtime->hasFunction(0x15EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F47Cu; }
        if (ctx->pc != 0x15F47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAD0_0x15ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F47Cu; }
        if (ctx->pc != 0x15F47Cu) { return; }
    }
    ctx->pc = 0x15F47Cu;
label_15f47c:
    // 0x15f47c: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x15f47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x15f480: 0xc057aac  jal         func_15EAB0
    ctx->pc = 0x15F480u;
    SET_GPR_U32(ctx, 31, 0x15F488u);
    ctx->pc = 0x15F484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F480u;
            // 0x15f484: 0x27a50098  addiu       $a1, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAB0u;
    if (runtime->hasFunction(0x15EAB0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F488u; }
        if (ctx->pc != 0x15F488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAB0_0x15eab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F488u; }
        if (ctx->pc != 0x15F488u) { return; }
    }
    ctx->pc = 0x15F488u;
label_15f488:
    // 0x15f488: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x15F488u;
    {
        const bool branch_taken_0x15f488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f488) {
            ctx->pc = 0x15F510u;
            goto label_15f510;
        }
    }
    ctx->pc = 0x15F490u;
label_15f490:
    // 0x15f490: 0xc057b24  jal         func_15EC90
    ctx->pc = 0x15F490u;
    SET_GPR_U32(ctx, 31, 0x15F498u);
    ctx->pc = 0x15F494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F490u;
            // 0x15f494: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EC90u;
    if (runtime->hasFunction(0x15EC90u)) {
        auto targetFn = runtime->lookupFunction(0x15EC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F498u; }
        if (ctx->pc != 0x15F498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EC90_0x15ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F498u; }
        if (ctx->pc != 0x15F498u) { return; }
    }
    ctx->pc = 0x15F498u;
label_15f498:
    // 0x15f498: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15f498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f49c: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x15f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x15f4a0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x15f4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x15f4a4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x15f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15f4a8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x15f4a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x15f4ac: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x15F4ACu;
    {
        const bool branch_taken_0x15f4ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f4ac) {
            ctx->pc = 0x15F4E8u;
            goto label_15f4e8;
        }
    }
    ctx->pc = 0x15F4B4u;
    // 0x15f4b4: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x15f4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x15f4b8: 0xc057c68  jal         func_15F1A0
    ctx->pc = 0x15F4B8u;
    SET_GPR_U32(ctx, 31, 0x15F4C0u);
    ctx->pc = 0x15F4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F4B8u;
            // 0x15f4bc: 0x27a500bc  addiu       $a1, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F1A0u;
    if (runtime->hasFunction(0x15F1A0u)) {
        auto targetFn = runtime->lookupFunction(0x15F1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F4C0u; }
        if (ctx->pc != 0x15F4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F1A0_0x15f1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F4C0u; }
        if (ctx->pc != 0x15F4C0u) { return; }
    }
    ctx->pc = 0x15F4C0u;
label_15f4c0:
    // 0x15f4c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15f4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f4c4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x15f4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15f4c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15f4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f4cc: 0xc057c78  jal         func_15F1E0
    ctx->pc = 0x15F4CCu;
    SET_GPR_U32(ctx, 31, 0x15F4D4u);
    ctx->pc = 0x15F4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F4CCu;
            // 0x15f4d0: 0x27a700c4  addiu       $a3, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F1E0u;
    if (runtime->hasFunction(0x15F1E0u)) {
        auto targetFn = runtime->lookupFunction(0x15F1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F4D4u; }
        if (ctx->pc != 0x15F4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F1E0_0x15f1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F4D4u; }
        if (ctx->pc != 0x15F4D4u) { return; }
    }
    ctx->pc = 0x15F4D4u;
label_15f4d4:
    // 0x15f4d4: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x15f4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x15f4d8: 0xc057a08  jal         func_15E820
    ctx->pc = 0x15F4D8u;
    SET_GPR_U32(ctx, 31, 0x15F4E0u);
    ctx->pc = 0x15F4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F4D8u;
            // 0x15f4dc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E820u;
    if (runtime->hasFunction(0x15E820u)) {
        auto targetFn = runtime->lookupFunction(0x15E820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F4E0u; }
        if (ctx->pc != 0x15F4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E820_0x15e820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F4E0u; }
        if (ctx->pc != 0x15F4E0u) { return; }
    }
    ctx->pc = 0x15F4E0u;
label_15f4e0:
    // 0x15f4e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15F4E0u;
    {
        const bool branch_taken_0x15f4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f4e0) {
            ctx->pc = 0x15F510u;
            goto label_15f510;
        }
    }
    ctx->pc = 0x15F4E8u;
label_15f4e8:
    // 0x15f4e8: 0xc057ab8  jal         func_15EAE0
    ctx->pc = 0x15F4E8u;
    SET_GPR_U32(ctx, 31, 0x15F4F0u);
    ctx->pc = 0x15F4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F4E8u;
            // 0x15f4ec: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAE0u;
    if (runtime->hasFunction(0x15EAE0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F4F0u; }
        if (ctx->pc != 0x15F4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAE0_0x15eae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F4F0u; }
        if (ctx->pc != 0x15F4F0u) { return; }
    }
    ctx->pc = 0x15F4F0u;
label_15f4f0:
    // 0x15f4f0: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x15f4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x15f4f4: 0xc057ab4  jal         func_15EAD0
    ctx->pc = 0x15F4F4u;
    SET_GPR_U32(ctx, 31, 0x15F4FCu);
    ctx->pc = 0x15F4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F4F4u;
            // 0x15f4f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAD0u;
    if (runtime->hasFunction(0x15EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F4FCu; }
        if (ctx->pc != 0x15F4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAD0_0x15ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F4FCu; }
        if (ctx->pc != 0x15F4FCu) { return; }
    }
    ctx->pc = 0x15F4FCu;
label_15f4fc:
    // 0x15f4fc: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x15f4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x15f500: 0xc057aac  jal         func_15EAB0
    ctx->pc = 0x15F500u;
    SET_GPR_U32(ctx, 31, 0x15F508u);
    ctx->pc = 0x15F504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F500u;
            // 0x15f504: 0x27a50098  addiu       $a1, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAB0u;
    if (runtime->hasFunction(0x15EAB0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F508u; }
        if (ctx->pc != 0x15F508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAB0_0x15eab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F508u; }
        if (ctx->pc != 0x15F508u) { return; }
    }
    ctx->pc = 0x15F508u;
label_15f508:
    // 0x15f508: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x15F508u;
    {
        const bool branch_taken_0x15f508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f508) {
            ctx->pc = 0x15F490u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15f490;
        }
    }
    ctx->pc = 0x15F510u;
label_15f510:
    // 0x15f510: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x15f510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x15f514: 0xc057ab4  jal         func_15EAD0
    ctx->pc = 0x15F514u;
    SET_GPR_U32(ctx, 31, 0x15F51Cu);
    ctx->pc = 0x15F518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F514u;
            // 0x15f518: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAD0u;
    if (runtime->hasFunction(0x15EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F51Cu; }
        if (ctx->pc != 0x15F51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAD0_0x15ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F51Cu; }
        if (ctx->pc != 0x15F51Cu) { return; }
    }
    ctx->pc = 0x15F51Cu;
label_15f51c:
    // 0x15f51c: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x15f51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x15f520: 0xc057c60  jal         func_15F180
    ctx->pc = 0x15F520u;
    SET_GPR_U32(ctx, 31, 0x15F528u);
    ctx->pc = 0x15F524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F520u;
            // 0x15f524: 0x27a50094  addiu       $a1, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F180u;
    if (runtime->hasFunction(0x15F180u)) {
        auto targetFn = runtime->lookupFunction(0x15F180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F528u; }
        if (ctx->pc != 0x15F528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F180_0x15f180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F528u; }
        if (ctx->pc != 0x15F528u) { return; }
    }
    ctx->pc = 0x15F528u;
label_15f528:
    // 0x15f528: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15F528u;
    {
        const bool branch_taken_0x15f528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f528) {
            ctx->pc = 0x15F560u;
            goto label_15f560;
        }
    }
    ctx->pc = 0x15F530u;
    // 0x15f530: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x15f530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x15f534: 0xc057ab4  jal         func_15EAD0
    ctx->pc = 0x15F534u;
    SET_GPR_U32(ctx, 31, 0x15F53Cu);
    ctx->pc = 0x15F538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F534u;
            // 0x15f538: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EAD0u;
    if (runtime->hasFunction(0x15EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x15EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F53Cu; }
        if (ctx->pc != 0x15F53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAD0_0x15ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F53Cu; }
        if (ctx->pc != 0x15F53Cu) { return; }
    }
    ctx->pc = 0x15F53Cu;
label_15f53c:
    // 0x15f53c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15f53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f540: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15f540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15f544: 0x27a6008c  addiu       $a2, $sp, 0x8C
    ctx->pc = 0x15f544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x15f548: 0xc057c78  jal         func_15F1E0
    ctx->pc = 0x15F548u;
    SET_GPR_U32(ctx, 31, 0x15F550u);
    ctx->pc = 0x15F54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F548u;
            // 0x15f54c: 0x27a700c4  addiu       $a3, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F1E0u;
    if (runtime->hasFunction(0x15F1E0u)) {
        auto targetFn = runtime->lookupFunction(0x15F1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F550u; }
        if (ctx->pc != 0x15F550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F1E0_0x15f1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F550u; }
        if (ctx->pc != 0x15F550u) { return; }
    }
    ctx->pc = 0x15F550u;
label_15f550:
    // 0x15f550: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x15f550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x15f554: 0xc057a08  jal         func_15E820
    ctx->pc = 0x15F554u;
    SET_GPR_U32(ctx, 31, 0x15F55Cu);
    ctx->pc = 0x15F558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F554u;
            // 0x15f558: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E820u;
    if (runtime->hasFunction(0x15E820u)) {
        auto targetFn = runtime->lookupFunction(0x15E820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F55Cu; }
        if (ctx->pc != 0x15F55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E820_0x15e820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F55Cu; }
        if (ctx->pc != 0x15F55Cu) { return; }
    }
    ctx->pc = 0x15F55Cu;
label_15f55c:
    // 0x15f55c: 0x0  nop
    ctx->pc = 0x15f55cu;
    // NOP
label_15f560:
    // 0x15f560: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15f560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f564: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x15f564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x15f568: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x15f568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x15f56c: 0xc057c58  jal         func_15F160
    ctx->pc = 0x15F56Cu;
    SET_GPR_U32(ctx, 31, 0x15F574u);
    ctx->pc = 0x15F570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F56Cu;
            // 0x15f570: 0xafb00088  sw          $s0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F160u;
    if (runtime->hasFunction(0x15F160u)) {
        auto targetFn = runtime->lookupFunction(0x15F160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F574u; }
        if (ctx->pc != 0x15F574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F160_0x15f160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F574u; }
        if (ctx->pc != 0x15F574u) { return; }
    }
    ctx->pc = 0x15F574u;
label_15f574:
    // 0x15f574: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15f574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15f578: 0xc057c50  jal         func_15F140
    ctx->pc = 0x15F578u;
    SET_GPR_U32(ctx, 31, 0x15F580u);
    ctx->pc = 0x15F57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F578u;
            // 0x15f57c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F140u;
    if (runtime->hasFunction(0x15F140u)) {
        auto targetFn = runtime->lookupFunction(0x15F140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F580u; }
        if (ctx->pc != 0x15F580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F140_0x15f140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F580u; }
        if (ctx->pc != 0x15F580u) { return; }
    }
    ctx->pc = 0x15F580u;
label_15f580:
    // 0x15f580: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x15f580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x15f584: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x15f584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x15f588: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15f588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f58c: 0xc057c4c  jal         func_15F130
    ctx->pc = 0x15F58Cu;
    SET_GPR_U32(ctx, 31, 0x15F594u);
    ctx->pc = 0x15F590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F58Cu;
            // 0x15f590: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F130u;
    if (runtime->hasFunction(0x15F130u)) {
        auto targetFn = runtime->lookupFunction(0x15F130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F594u; }
        if (ctx->pc != 0x15F594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F130_0x15f130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F594u; }
        if (ctx->pc != 0x15F594u) { return; }
    }
    ctx->pc = 0x15F594u;
label_15f594:
    // 0x15f594: 0x0  nop
    ctx->pc = 0x15f594u;
    // NOP
label_15f598:
    // 0x15f598: 0x129042  srl         $s2, $s2, 1
    ctx->pc = 0x15f598u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x15f59c: 0x1640ff97  bnez        $s2, . + 4 + (-0x69 << 2)
    ctx->pc = 0x15F59Cu;
    {
        const bool branch_taken_0x15f59c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F59Cu;
            // 0x15f5a0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f59c) {
            ctx->pc = 0x15F3FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15f3fc;
        }
    }
    ctx->pc = 0x15F5A4u;
    // 0x15f5a4: 0x0  nop
    ctx->pc = 0x15f5a4u;
    // NOP
label_15f5a8:
    // 0x15f5a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15f5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15f5ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15f5acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15f5b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15f5b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15f5b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15f5b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f5b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15f5b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f5bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15f5bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x15F5C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F5C0u;
            // 0x15f5c4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15F5C8u;
    // 0x15f5c8: 0x0  nop
    ctx->pc = 0x15f5c8u;
    // NOP
    // 0x15f5cc: 0x0  nop
    ctx->pc = 0x15f5ccu;
    // NOP
}
