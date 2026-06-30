#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038E3B0
// Address: 0x38e3b0 - 0x38e4f0
void sub_0038E3B0_0x38e3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E3B0_0x38e3b0");
#endif

    switch (ctx->pc) {
        case 0x38e3b0u: goto label_38e3b0;
        case 0x38e3b4u: goto label_38e3b4;
        case 0x38e3b8u: goto label_38e3b8;
        case 0x38e3bcu: goto label_38e3bc;
        case 0x38e3c0u: goto label_38e3c0;
        case 0x38e3c4u: goto label_38e3c4;
        case 0x38e3c8u: goto label_38e3c8;
        case 0x38e3ccu: goto label_38e3cc;
        case 0x38e3d0u: goto label_38e3d0;
        case 0x38e3d4u: goto label_38e3d4;
        case 0x38e3d8u: goto label_38e3d8;
        case 0x38e3dcu: goto label_38e3dc;
        case 0x38e3e0u: goto label_38e3e0;
        case 0x38e3e4u: goto label_38e3e4;
        case 0x38e3e8u: goto label_38e3e8;
        case 0x38e3ecu: goto label_38e3ec;
        case 0x38e3f0u: goto label_38e3f0;
        case 0x38e3f4u: goto label_38e3f4;
        case 0x38e3f8u: goto label_38e3f8;
        case 0x38e3fcu: goto label_38e3fc;
        case 0x38e400u: goto label_38e400;
        case 0x38e404u: goto label_38e404;
        case 0x38e408u: goto label_38e408;
        case 0x38e40cu: goto label_38e40c;
        case 0x38e410u: goto label_38e410;
        case 0x38e414u: goto label_38e414;
        case 0x38e418u: goto label_38e418;
        case 0x38e41cu: goto label_38e41c;
        case 0x38e420u: goto label_38e420;
        case 0x38e424u: goto label_38e424;
        case 0x38e428u: goto label_38e428;
        case 0x38e42cu: goto label_38e42c;
        case 0x38e430u: goto label_38e430;
        case 0x38e434u: goto label_38e434;
        case 0x38e438u: goto label_38e438;
        case 0x38e43cu: goto label_38e43c;
        case 0x38e440u: goto label_38e440;
        case 0x38e444u: goto label_38e444;
        case 0x38e448u: goto label_38e448;
        case 0x38e44cu: goto label_38e44c;
        case 0x38e450u: goto label_38e450;
        case 0x38e454u: goto label_38e454;
        case 0x38e458u: goto label_38e458;
        case 0x38e45cu: goto label_38e45c;
        case 0x38e460u: goto label_38e460;
        case 0x38e464u: goto label_38e464;
        case 0x38e468u: goto label_38e468;
        case 0x38e46cu: goto label_38e46c;
        case 0x38e470u: goto label_38e470;
        case 0x38e474u: goto label_38e474;
        case 0x38e478u: goto label_38e478;
        case 0x38e47cu: goto label_38e47c;
        case 0x38e480u: goto label_38e480;
        case 0x38e484u: goto label_38e484;
        case 0x38e488u: goto label_38e488;
        case 0x38e48cu: goto label_38e48c;
        case 0x38e490u: goto label_38e490;
        case 0x38e494u: goto label_38e494;
        case 0x38e498u: goto label_38e498;
        case 0x38e49cu: goto label_38e49c;
        case 0x38e4a0u: goto label_38e4a0;
        case 0x38e4a4u: goto label_38e4a4;
        case 0x38e4a8u: goto label_38e4a8;
        case 0x38e4acu: goto label_38e4ac;
        case 0x38e4b0u: goto label_38e4b0;
        case 0x38e4b4u: goto label_38e4b4;
        case 0x38e4b8u: goto label_38e4b8;
        case 0x38e4bcu: goto label_38e4bc;
        case 0x38e4c0u: goto label_38e4c0;
        case 0x38e4c4u: goto label_38e4c4;
        case 0x38e4c8u: goto label_38e4c8;
        case 0x38e4ccu: goto label_38e4cc;
        case 0x38e4d0u: goto label_38e4d0;
        case 0x38e4d4u: goto label_38e4d4;
        case 0x38e4d8u: goto label_38e4d8;
        case 0x38e4dcu: goto label_38e4dc;
        case 0x38e4e0u: goto label_38e4e0;
        case 0x38e4e4u: goto label_38e4e4;
        case 0x38e4e8u: goto label_38e4e8;
        case 0x38e4ecu: goto label_38e4ec;
        default: break;
    }

    ctx->pc = 0x38e3b0u;

label_38e3b0:
    // 0x38e3b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38e3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_38e3b4:
    // 0x38e3b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38e3b8:
    // 0x38e3b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38e3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_38e3bc:
    // 0x38e3bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38e3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38e3c0:
    // 0x38e3c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38e3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38e3c4:
    // 0x38e3c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x38e3c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38e3c8:
    // 0x38e3c8: 0xac8200ac  sw          $v0, 0xAC($a0)
    ctx->pc = 0x38e3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 2));
label_38e3cc:
    // 0x38e3cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x38e3ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38e3d0:
    // 0x38e3d0: 0x8f39008c  lw          $t9, 0x8C($t9)
    ctx->pc = 0x38e3d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 140)));
label_38e3d4:
    // 0x38e3d4: 0x320f809  jalr        $t9
label_38e3d8:
    if (ctx->pc == 0x38E3D8u) {
        ctx->pc = 0x38E3D8u;
            // 0x38e3d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E3DCu;
        goto label_38e3dc;
    }
    ctx->pc = 0x38E3D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38E3DCu);
        ctx->pc = 0x38E3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E3D4u;
            // 0x38e3d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38E3DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38E3DCu; }
            if (ctx->pc != 0x38E3DCu) { return; }
        }
        }
    }
    ctx->pc = 0x38E3DCu;
label_38e3dc:
    // 0x38e3dc: 0xae1100b4  sw          $s1, 0xB4($s0)
    ctx->pc = 0x38e3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 17));
label_38e3e0:
    // 0x38e3e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38e3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38e3e4:
    // 0x38e3e4: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x38e3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38e3e8:
    // 0x38e3e8: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x38e3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
label_38e3ec:
    // 0x38e3ec: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x38e3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_38e3f0:
    // 0x38e3f0: 0xa2000090  sb          $zero, 0x90($s0)
    ctx->pc = 0x38e3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 144), (uint8_t)GPR_U32(ctx, 0));
label_38e3f4:
    // 0x38e3f4: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x38e3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_38e3f8:
    // 0x38e3f8: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
label_38e3fc:
    if (ctx->pc == 0x38E3FCu) {
        ctx->pc = 0x38E3FCu;
            // 0x38e3fc: 0x8e050050  lw          $a1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x38E400u;
        goto label_38e400;
    }
    ctx->pc = 0x38E3F8u;
    {
        const bool branch_taken_0x38e3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e3f8) {
            ctx->pc = 0x38E3FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38E3F8u;
            // 0x38e3fc: 0x8e050050  lw          $a1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38E430u;
            goto label_38e430;
        }
    }
    ctx->pc = 0x38E400u;
label_38e400:
    // 0x38e400: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x38e400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_38e404:
    // 0x38e404: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x38e404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_38e408:
    // 0x38e408: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_38e40c:
    if (ctx->pc == 0x38E40Cu) {
        ctx->pc = 0x38E410u;
        goto label_38e410;
    }
    ctx->pc = 0x38E408u;
    {
        const bool branch_taken_0x38e408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e408) {
            ctx->pc = 0x38E42Cu;
            goto label_38e42c;
        }
    }
    ctx->pc = 0x38E410u;
label_38e410:
    // 0x38e410: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x38e410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38e414:
    // 0x38e414: 0xc4420188  lwc1        $f2, 0x188($v0)
    ctx->pc = 0x38e414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38e418:
    // 0x38e418: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x38e418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38e41c:
    // 0x38e41c: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x38e41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38e420:
    // 0x38e420: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x38e420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_38e424:
    // 0x38e424: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x38e424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_38e428:
    // 0x38e428: 0xe462001c  swc1        $f2, 0x1C($v1)
    ctx->pc = 0x38e428u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_38e42c:
    // 0x38e42c: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x38e42cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38e430:
    // 0x38e430: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38e430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38e434:
    // 0x38e434: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38e434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38e438:
    // 0x38e438: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x38e438u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_38e43c:
    // 0x38e43c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x38e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_38e440:
    // 0x38e440: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x38e440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_38e444:
    // 0x38e444: 0xc08bff0  jal         func_22FFC0
label_38e448:
    if (ctx->pc == 0x38E448u) {
        ctx->pc = 0x38E448u;
            // 0x38e448: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E44Cu;
        goto label_38e44c;
    }
    ctx->pc = 0x38E444u;
    SET_GPR_U32(ctx, 31, 0x38E44Cu);
    ctx->pc = 0x38E448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E444u;
            // 0x38e448: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E44Cu; }
        if (ctx->pc != 0x38E44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E44Cu; }
        if (ctx->pc != 0x38E44Cu) { return; }
    }
    ctx->pc = 0x38E44Cu;
label_38e44c:
    // 0x38e44c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x38e44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38e450:
    // 0x38e450: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x38e450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_38e454:
    // 0x38e454: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38e454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38e458:
    // 0x38e458: 0xc08914c  jal         func_224530
label_38e45c:
    if (ctx->pc == 0x38E45Cu) {
        ctx->pc = 0x38E45Cu;
            // 0x38e45c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E460u;
        goto label_38e460;
    }
    ctx->pc = 0x38E458u;
    SET_GPR_U32(ctx, 31, 0x38E460u);
    ctx->pc = 0x38E45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E458u;
            // 0x38e45c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E460u; }
        if (ctx->pc != 0x38E460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E460u; }
        if (ctx->pc != 0x38E460u) { return; }
    }
    ctx->pc = 0x38E460u;
label_38e460:
    // 0x38e460: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x38e460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_38e464:
    // 0x38e464: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x38e464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_38e468:
    // 0x38e468: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x38e468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_38e46c:
    // 0x38e46c: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x38e46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_38e470:
    // 0x38e470: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x38e470u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38e474:
    // 0x38e474: 0xc088b74  jal         func_222DD0
label_38e478:
    if (ctx->pc == 0x38E478u) {
        ctx->pc = 0x38E478u;
            // 0x38e478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E47Cu;
        goto label_38e47c;
    }
    ctx->pc = 0x38E474u;
    SET_GPR_U32(ctx, 31, 0x38E47Cu);
    ctx->pc = 0x38E478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E474u;
            // 0x38e478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E47Cu; }
        if (ctx->pc != 0x38E47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E47Cu; }
        if (ctx->pc != 0x38E47Cu) { return; }
    }
    ctx->pc = 0x38E47Cu;
label_38e47c:
    // 0x38e47c: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x38e47cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_38e480:
    // 0x38e480: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x38e480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_38e484:
    // 0x38e484: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x38e484u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_38e488:
    // 0x38e488: 0x320f809  jalr        $t9
label_38e48c:
    if (ctx->pc == 0x38E48Cu) {
        ctx->pc = 0x38E48Cu;
            // 0x38e48c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x38E490u;
        goto label_38e490;
    }
    ctx->pc = 0x38E488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38E490u);
        ctx->pc = 0x38E48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E488u;
            // 0x38e48c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38E490u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38E490u; }
            if (ctx->pc != 0x38E490u) { return; }
        }
        }
    }
    ctx->pc = 0x38E490u;
label_38e490:
    // 0x38e490: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x38e490u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38e494:
    // 0x38e494: 0xc088b74  jal         func_222DD0
label_38e498:
    if (ctx->pc == 0x38E498u) {
        ctx->pc = 0x38E498u;
            // 0x38e498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E49Cu;
        goto label_38e49c;
    }
    ctx->pc = 0x38E494u;
    SET_GPR_U32(ctx, 31, 0x38E49Cu);
    ctx->pc = 0x38E498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E494u;
            // 0x38e498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E49Cu; }
        if (ctx->pc != 0x38E49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E49Cu; }
        if (ctx->pc != 0x38E49Cu) { return; }
    }
    ctx->pc = 0x38E49Cu;
label_38e49c:
    // 0x38e49c: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x38e49cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_38e4a0:
    // 0x38e4a0: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x38e4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_38e4a4:
    // 0x38e4a4: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x38e4a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_38e4a8:
    // 0x38e4a8: 0x320f809  jalr        $t9
label_38e4ac:
    if (ctx->pc == 0x38E4ACu) {
        ctx->pc = 0x38E4ACu;
            // 0x38e4ac: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x38E4B0u;
        goto label_38e4b0;
    }
    ctx->pc = 0x38E4A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38E4B0u);
        ctx->pc = 0x38E4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E4A8u;
            // 0x38e4ac: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38E4B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38E4B0u; }
            if (ctx->pc != 0x38E4B0u) { return; }
        }
        }
    }
    ctx->pc = 0x38E4B0u;
label_38e4b0:
    // 0x38e4b0: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x38e4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_38e4b4:
    // 0x38e4b4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x38e4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_38e4b8:
    // 0x38e4b8: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_38e4bc:
    if (ctx->pc == 0x38E4BCu) {
        ctx->pc = 0x38E4BCu;
            // 0x38e4bc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x38E4C0u;
        goto label_38e4c0;
    }
    ctx->pc = 0x38E4B8u;
    {
        const bool branch_taken_0x38e4b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e4b8) {
            ctx->pc = 0x38E4BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38E4B8u;
            // 0x38e4bc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38E4D4u;
            goto label_38e4d4;
        }
    }
    ctx->pc = 0x38E4C0u;
label_38e4c0:
    // 0x38e4c0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x38e4c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38e4c4:
    // 0x38e4c4: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x38e4c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_38e4c8:
    // 0x38e4c8: 0x320f809  jalr        $t9
label_38e4cc:
    if (ctx->pc == 0x38E4CCu) {
        ctx->pc = 0x38E4CCu;
            // 0x38e4cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E4D0u;
        goto label_38e4d0;
    }
    ctx->pc = 0x38E4C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38E4D0u);
        ctx->pc = 0x38E4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E4C8u;
            // 0x38e4cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38E4D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38E4D0u; }
            if (ctx->pc != 0x38E4D0u) { return; }
        }
        }
    }
    ctx->pc = 0x38E4D0u;
label_38e4d0:
    // 0x38e4d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38e4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38e4d4:
    // 0x38e4d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38e4d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38e4d8:
    // 0x38e4d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38e4d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38e4dc:
    // 0x38e4dc: 0x3e00008  jr          $ra
label_38e4e0:
    if (ctx->pc == 0x38E4E0u) {
        ctx->pc = 0x38E4E0u;
            // 0x38e4e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x38E4E4u;
        goto label_38e4e4;
    }
    ctx->pc = 0x38E4DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E4DCu;
            // 0x38e4e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38E4E4u;
label_38e4e4:
    // 0x38e4e4: 0x0  nop
    ctx->pc = 0x38e4e4u;
    // NOP
label_38e4e8:
    // 0x38e4e8: 0x0  nop
    ctx->pc = 0x38e4e8u;
    // NOP
label_38e4ec:
    // 0x38e4ec: 0x0  nop
    ctx->pc = 0x38e4ecu;
    // NOP
}
