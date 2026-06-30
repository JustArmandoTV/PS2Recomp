#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0052F220
// Address: 0x52f220 - 0x52f3f0
void sub_0052F220_0x52f220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0052F220_0x52f220");
#endif

    switch (ctx->pc) {
        case 0x52f24cu: goto label_52f24c;
        case 0x52f26cu: goto label_52f26c;
        case 0x52f290u: goto label_52f290;
        case 0x52f2e0u: goto label_52f2e0;
        case 0x52f2ecu: goto label_52f2ec;
        case 0x52f320u: goto label_52f320;
        case 0x52f380u: goto label_52f380;
        case 0x52f38cu: goto label_52f38c;
        case 0x52f398u: goto label_52f398;
        case 0x52f3a4u: goto label_52f3a4;
        case 0x52f3b0u: goto label_52f3b0;
        case 0x52f3bcu: goto label_52f3bc;
        case 0x52f3d4u: goto label_52f3d4;
        default: break;
    }

    ctx->pc = 0x52f220u;

    // 0x52f220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x52f220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x52f224: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x52f224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x52f228: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x52f228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x52f22c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x52f22cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x52f230: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52f230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x52f234: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52f234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x52f238: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x52f238u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52f23c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x52f23cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52f240: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52f240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x52f244: 0xc14bd34  jal         func_52F4D0
    ctx->pc = 0x52F244u;
    SET_GPR_U32(ctx, 31, 0x52F24Cu);
    ctx->pc = 0x52F248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F244u;
            // 0x52f248: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52F4D0u;
    if (runtime->hasFunction(0x52F4D0u)) {
        auto targetFn = runtime->lookupFunction(0x52F4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F24Cu; }
        if (ctx->pc != 0x52F24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052F4D0_0x52f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F24Cu; }
        if (ctx->pc != 0x52F24Cu) { return; }
    }
    ctx->pc = 0x52F24Cu;
label_52f24c:
    // 0x52f24c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x52f250: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52f250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x52f254: 0x24636cd0  addiu       $v1, $v1, 0x6CD0
    ctx->pc = 0x52f254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27856));
    // 0x52f258: 0x24426d08  addiu       $v0, $v0, 0x6D08
    ctx->pc = 0x52f258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27912));
    // 0x52f25c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x52f25cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x52f260: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x52f260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52f264: 0xc14bd30  jal         func_52F4C0
    ctx->pc = 0x52F264u;
    SET_GPR_U32(ctx, 31, 0x52F26Cu);
    ctx->pc = 0x52F268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F264u;
            // 0x52f268: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52F4C0u;
    if (runtime->hasFunction(0x52F4C0u)) {
        auto targetFn = runtime->lookupFunction(0x52F4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F26Cu; }
        if (ctx->pc != 0x52F26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052F4C0_0x52f4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F26Cu; }
        if (ctx->pc != 0x52F26Cu) { return; }
    }
    ctx->pc = 0x52F26Cu;
label_52f26c:
    // 0x52f26c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x52f26cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x52f270: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x52f270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52f274: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52f274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x52f278: 0x24426be0  addiu       $v0, $v0, 0x6BE0
    ctx->pc = 0x52f278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27616));
    // 0x52f27c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x52f27cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x52f280: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52f280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x52f284: 0x24426c18  addiu       $v0, $v0, 0x6C18
    ctx->pc = 0x52f284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27672));
    // 0x52f288: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x52f288u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
    // 0x52f28c: 0x8e43007c  lw          $v1, 0x7C($s2)
    ctx->pc = 0x52f28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_52f290:
    // 0x52f290: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x52f290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
    // 0x52f294: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x52f294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x52f298: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x52f298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x52f29c: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x52f29cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x52f2a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x52f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x52f2a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x52f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x52f2a8: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x52f2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x52f2ac: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x52f2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x52f2b0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x52f2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x52f2b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x52f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x52f2b8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x52f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x52f2bc: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x52f2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x52f2c0: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x52f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x52f2c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x52f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x52f2c8: 0xae42007c  sw          $v0, 0x7C($s2)
    ctx->pc = 0x52f2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 2));
    // 0x52f2cc: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x52f2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x52f2d0: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x52f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x52f2d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x52f2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x52f2d8: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x52F2D8u;
    SET_GPR_U32(ctx, 31, 0x52F2E0u);
    ctx->pc = 0x52F2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F2D8u;
            // 0x52f2dc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F2E0u; }
        if (ctx->pc != 0x52F2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F2E0u; }
        if (ctx->pc != 0x52F2E0u) { return; }
    }
    ctx->pc = 0x52F2E0u;
label_52f2e0:
    // 0x52f2e0: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x52f2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x52f2e4: 0xc0d879c  jal         func_361E70
    ctx->pc = 0x52F2E4u;
    SET_GPR_U32(ctx, 31, 0x52F2ECu);
    ctx->pc = 0x52F2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F2E4u;
            // 0x52f2e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F2ECu; }
        if (ctx->pc != 0x52F2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F2ECu; }
        if (ctx->pc != 0x52F2ECu) { return; }
    }
    ctx->pc = 0x52F2ECu;
label_52f2ec:
    // 0x52f2ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x52f2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x52f2f0: 0x2a02001f  slti        $v0, $s0, 0x1F
    ctx->pc = 0x52f2f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x52f2f4: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x52F2F4u;
    {
        const bool branch_taken_0x52f2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x52f2f4) {
            ctx->pc = 0x52F2F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52F2F4u;
            // 0x52f2f8: 0x8e43007c  lw          $v1, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52F290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52f290;
        }
    }
    ctx->pc = 0x52F2FCu;
    // 0x52f2fc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x52f2fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52f300: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x52f300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x52f304: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52f304u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x52f308: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52f308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x52f30c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52f30cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x52f310: 0x3e00008  jr          $ra
    ctx->pc = 0x52F310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52F314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52F310u;
            // 0x52f314: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52F318u;
    // 0x52f318: 0x0  nop
    ctx->pc = 0x52f318u;
    // NOP
    // 0x52f31c: 0x0  nop
    ctx->pc = 0x52f31cu;
    // NOP
label_52f320:
    // 0x52f320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x52f320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x52f324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x52f324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x52f328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52f328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x52f32c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52f32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x52f330: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x52f330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52f334: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x52F334u;
    {
        const bool branch_taken_0x52f334 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x52F338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52F334u;
            // 0x52f338: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52f334) {
            ctx->pc = 0x52F3D4u;
            goto label_52f3d4;
        }
    }
    ctx->pc = 0x52F33Cu;
    // 0x52f33c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52f33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x52f340: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52f340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x52f344: 0x24636cd0  addiu       $v1, $v1, 0x6CD0
    ctx->pc = 0x52f344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27856));
    // 0x52f348: 0x24426d08  addiu       $v0, $v0, 0x6D08
    ctx->pc = 0x52f348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27912));
    // 0x52f34c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52f34cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x52f350: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x52F350u;
    {
        const bool branch_taken_0x52f350 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x52F354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52F350u;
            // 0x52f354: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52f350) {
            ctx->pc = 0x52F3BCu;
            goto label_52f3bc;
        }
    }
    ctx->pc = 0x52F358u;
    // 0x52f358: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52f358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x52f35c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52f35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x52f360: 0x24636c80  addiu       $v1, $v1, 0x6C80
    ctx->pc = 0x52f360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27776));
    // 0x52f364: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x52f364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
    // 0x52f368: 0x24426cb8  addiu       $v0, $v0, 0x6CB8
    ctx->pc = 0x52f368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27832));
    // 0x52f36c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52f36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x52f370: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x52f370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x52f374: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x52f374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x52f378: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x52F378u;
    SET_GPR_U32(ctx, 31, 0x52F380u);
    ctx->pc = 0x52F37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F378u;
            // 0x52f37c: 0x24a5ed80  addiu       $a1, $a1, -0x1280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F380u; }
        if (ctx->pc != 0x52F380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F380u; }
        if (ctx->pc != 0x52F380u) { return; }
    }
    ctx->pc = 0x52F380u;
label_52f380:
    // 0x52f380: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x52f380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x52f384: 0xc0a8c98  jal         func_2A3260
    ctx->pc = 0x52F384u;
    SET_GPR_U32(ctx, 31, 0x52F38Cu);
    ctx->pc = 0x52F388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F384u;
            // 0x52f388: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F38Cu; }
        if (ctx->pc != 0x52F38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F38Cu; }
        if (ctx->pc != 0x52F38Cu) { return; }
    }
    ctx->pc = 0x52F38Cu;
label_52f38c:
    // 0x52f38c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x52f38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x52f390: 0xc14bd14  jal         func_52F450
    ctx->pc = 0x52F390u;
    SET_GPR_U32(ctx, 31, 0x52F398u);
    ctx->pc = 0x52F394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F390u;
            // 0x52f394: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52F450u;
    if (runtime->hasFunction(0x52F450u)) {
        auto targetFn = runtime->lookupFunction(0x52F450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F398u; }
        if (ctx->pc != 0x52F398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052F450_0x52f450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F398u; }
        if (ctx->pc != 0x52F398u) { return; }
    }
    ctx->pc = 0x52F398u;
label_52f398:
    // 0x52f398: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x52f398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x52f39c: 0xc14bd14  jal         func_52F450
    ctx->pc = 0x52F39Cu;
    SET_GPR_U32(ctx, 31, 0x52F3A4u);
    ctx->pc = 0x52F3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F39Cu;
            // 0x52f3a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52F450u;
    if (runtime->hasFunction(0x52F450u)) {
        auto targetFn = runtime->lookupFunction(0x52F450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F3A4u; }
        if (ctx->pc != 0x52F3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052F450_0x52f450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F3A4u; }
        if (ctx->pc != 0x52F3A4u) { return; }
    }
    ctx->pc = 0x52F3A4u;
label_52f3a4:
    // 0x52f3a4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x52f3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x52f3a8: 0xc14bcfc  jal         func_52F3F0
    ctx->pc = 0x52F3A8u;
    SET_GPR_U32(ctx, 31, 0x52F3B0u);
    ctx->pc = 0x52F3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F3A8u;
            // 0x52f3ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52F3F0u;
    if (runtime->hasFunction(0x52F3F0u)) {
        auto targetFn = runtime->lookupFunction(0x52F3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F3B0u; }
        if (ctx->pc != 0x52F3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052F3F0_0x52f3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F3B0u; }
        if (ctx->pc != 0x52F3B0u) { return; }
    }
    ctx->pc = 0x52F3B0u;
label_52f3b0:
    // 0x52f3b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x52f3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52f3b4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x52F3B4u;
    SET_GPR_U32(ctx, 31, 0x52F3BCu);
    ctx->pc = 0x52F3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F3B4u;
            // 0x52f3b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F3BCu; }
        if (ctx->pc != 0x52F3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F3BCu; }
        if (ctx->pc != 0x52F3BCu) { return; }
    }
    ctx->pc = 0x52F3BCu;
label_52f3bc:
    // 0x52f3bc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x52f3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x52f3c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x52f3c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x52f3c4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x52F3C4u;
    {
        const bool branch_taken_0x52f3c4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x52f3c4) {
            ctx->pc = 0x52F3C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52F3C4u;
            // 0x52f3c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52F3D8u;
            goto label_52f3d8;
        }
    }
    ctx->pc = 0x52F3CCu;
    // 0x52f3cc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x52F3CCu;
    SET_GPR_U32(ctx, 31, 0x52F3D4u);
    ctx->pc = 0x52F3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F3CCu;
            // 0x52f3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F3D4u; }
        if (ctx->pc != 0x52F3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F3D4u; }
        if (ctx->pc != 0x52F3D4u) { return; }
    }
    ctx->pc = 0x52F3D4u;
label_52f3d4:
    // 0x52f3d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x52f3d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52f3d8:
    // 0x52f3d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52f3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x52f3dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52f3dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x52f3e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52f3e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x52f3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x52F3E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52F3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52F3E4u;
            // 0x52f3e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52F3ECu;
    // 0x52f3ec: 0x0  nop
    ctx->pc = 0x52f3ecu;
    // NOP
}
