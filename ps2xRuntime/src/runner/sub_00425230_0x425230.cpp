#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00425230
// Address: 0x425230 - 0x425390
void sub_00425230_0x425230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00425230_0x425230");
#endif

    switch (ctx->pc) {
        case 0x425284u: goto label_425284;
        case 0x4252b8u: goto label_4252b8;
        case 0x4252e0u: goto label_4252e0;
        case 0x425330u: goto label_425330;
        case 0x425338u: goto label_425338;
        case 0x42535cu: goto label_42535c;
        default: break;
    }

    ctx->pc = 0x425230u;

    // 0x425230: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x425230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x425234: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x425234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x425238: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x425238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x42523c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x42523cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x425240: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x425240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x425244: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x425244u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425248: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x425248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x42524c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x42524cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x425250: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x425250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x425254: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x425254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x425258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x425258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x42525c: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x42525cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
    // 0x425260: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x425260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x425264: 0x26520e84  addiu       $s2, $s2, 0xE84
    ctx->pc = 0x425264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3716));
    // 0x425268: 0x8c500ea4  lw          $s0, 0xEA4($v0)
    ctx->pc = 0x425268u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x42526c: 0x8c950050  lw          $s5, 0x50($a0)
    ctx->pc = 0x42526cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x425270: 0x8c940058  lw          $s4, 0x58($a0)
    ctx->pc = 0x425270u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x425274: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x425274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x425278: 0x9096004c  lbu         $s6, 0x4C($a0)
    ctx->pc = 0x425278u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x42527c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x42527cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x425280: 0x8c53077c  lw          $s3, 0x77C($v0)
    ctx->pc = 0x425280u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
label_425284:
    // 0x425284: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x425284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x425288: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x425288u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x42528c: 0x8c820e38  lw          $v0, 0xE38($a0)
    ctx->pc = 0x42528cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
    // 0x425290: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x425290u;
    {
        const bool branch_taken_0x425290 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x425294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x425290u;
            // 0x425294: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425290) {
            ctx->pc = 0x4252A8u;
            goto label_4252a8;
        }
    }
    ctx->pc = 0x425298u;
    // 0x425298: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x425298u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x42529c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x42529Cu;
    {
        const bool branch_taken_0x42529c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x42529c) {
            ctx->pc = 0x4252A8u;
            goto label_4252a8;
        }
    }
    ctx->pc = 0x4252A4u;
    // 0x4252a4: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x4252a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4252a8:
    // 0x4252a8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4252A8u;
    {
        const bool branch_taken_0x4252a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4252a8) {
            ctx->pc = 0x4252C8u;
            goto label_4252c8;
        }
    }
    ctx->pc = 0x4252B0u;
    // 0x4252b0: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x4252B0u;
    SET_GPR_U32(ctx, 31, 0x4252B8u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4252B8u; }
        if (ctx->pc != 0x4252B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4252B8u; }
        if (ctx->pc != 0x4252B8u) { return; }
    }
    ctx->pc = 0x4252B8u;
label_4252b8:
    // 0x4252b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4252B8u;
    {
        const bool branch_taken_0x4252b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4252b8) {
            ctx->pc = 0x4252C8u;
            goto label_4252c8;
        }
    }
    ctx->pc = 0x4252C0u;
    // 0x4252c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4252c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4252c4: 0x0  nop
    ctx->pc = 0x4252c4u;
    // NOP
label_4252c8:
    // 0x4252c8: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4252C8u;
    {
        const bool branch_taken_0x4252c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4252c8) {
            ctx->pc = 0x4252CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4252C8u;
            // 0x4252cc: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4252F8u;
            goto label_4252f8;
        }
    }
    ctx->pc = 0x4252D0u;
    // 0x4252d0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4252d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4252d4: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x4252d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x4252d8: 0xc0bd4bc  jal         func_2F52F0
    ctx->pc = 0x4252D8u;
    SET_GPR_U32(ctx, 31, 0x4252E0u);
    ctx->pc = 0x4252DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4252D8u;
            // 0x4252dc: 0x244502c0  addiu       $a1, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F52F0u;
    if (runtime->hasFunction(0x2F52F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F52F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4252E0u; }
        if (ctx->pc != 0x4252E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F52F0_0x2f52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4252E0u; }
        if (ctx->pc != 0x4252E0u) { return; }
    }
    ctx->pc = 0x4252E0u;
label_4252e0:
    // 0x4252e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4252e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4252e4: 0x16c20003  bne         $s6, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4252E4u;
    {
        const bool branch_taken_0x4252e4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x4252e4) {
            ctx->pc = 0x4252F4u;
            goto label_4252f4;
        }
    }
    ctx->pc = 0x4252ECu;
    // 0x4252ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4252ECu;
    {
        const bool branch_taken_0x4252ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4252F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4252ECu;
            // 0x4252f0: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4252ec) {
            ctx->pc = 0x425304u;
            goto label_425304;
        }
    }
    ctx->pc = 0x4252F4u;
label_4252f4:
    // 0x4252f4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x4252f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_4252f8:
    // 0x4252f8: 0x1660ffe2  bnez        $s3, . + 4 + (-0x1E << 2)
    ctx->pc = 0x4252F8u;
    {
        const bool branch_taken_0x4252f8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x4252FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4252F8u;
            // 0x4252fc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4252f8) {
            ctx->pc = 0x425284u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_425284;
        }
    }
    ctx->pc = 0x425300u;
    // 0x425300: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x425300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_425304:
    // 0x425304: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x425304u;
    {
        const bool branch_taken_0x425304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x425304) {
            ctx->pc = 0x425308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x425304u;
            // 0x425308: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x425354u;
            goto label_425354;
        }
    }
    ctx->pc = 0x42530Cu;
    // 0x42530c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x42530cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x425310: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x425310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x425314: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x425314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x425318: 0xc4407428  lwc1        $f0, 0x7428($v0)
    ctx->pc = 0x425318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 29736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x42531c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x42531cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x425320: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x425320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x425324: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x425324u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x425328: 0xe4407428  swc1        $f0, 0x7428($v0)
    ctx->pc = 0x425328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 29736), bits); }
    // 0x42532c: 0xa2e00060  sb          $zero, 0x60($s7)
    ctx->pc = 0x42532cu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 96), (uint8_t)GPR_U32(ctx, 0));
label_425330:
    // 0x425330: 0xc0e3658  jal         func_38D960
    ctx->pc = 0x425330u;
    SET_GPR_U32(ctx, 31, 0x425338u);
    ctx->pc = 0x425334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425330u;
            // 0x425334: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425338u; }
        if (ctx->pc != 0x425338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425338u; }
        if (ctx->pc != 0x425338u) { return; }
    }
    ctx->pc = 0x425338u;
label_425338:
    // 0x425338: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x425338u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x42533c: 0x26b500f0  addiu       $s5, $s5, 0xF0
    ctx->pc = 0x42533cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
    // 0x425340: 0x0  nop
    ctx->pc = 0x425340u;
    // NOP
    // 0x425344: 0x1e80fffa  bgtz        $s4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x425344u;
    {
        const bool branch_taken_0x425344 = (GPR_S32(ctx, 20) > 0);
        if (branch_taken_0x425344) {
            ctx->pc = 0x425330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_425330;
        }
    }
    ctx->pc = 0x42534Cu;
    // 0x42534c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x42534Cu;
    {
        const bool branch_taken_0x42534c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x425350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42534Cu;
            // 0x425350: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42534c) {
            ctx->pc = 0x425360u;
            goto label_425360;
        }
    }
    ctx->pc = 0x425354u;
label_425354:
    // 0x425354: 0xc1092fc  jal         func_424BF0
    ctx->pc = 0x425354u;
    SET_GPR_U32(ctx, 31, 0x42535Cu);
    ctx->pc = 0x424BF0u;
    if (runtime->hasFunction(0x424BF0u)) {
        auto targetFn = runtime->lookupFunction(0x424BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42535Cu; }
        if (ctx->pc != 0x42535Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00424BF0_0x424bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42535Cu; }
        if (ctx->pc != 0x42535Cu) { return; }
    }
    ctx->pc = 0x42535Cu;
label_42535c:
    // 0x42535c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x42535cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_425360:
    // 0x425360: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x425360u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x425364: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x425364u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x425368: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x425368u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x42536c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x42536cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x425370: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x425370u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x425374: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x425374u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x425378: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x425378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42537c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42537cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x425380: 0x3e00008  jr          $ra
    ctx->pc = 0x425380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x425384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x425380u;
            // 0x425384: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x425388u;
    // 0x425388: 0x0  nop
    ctx->pc = 0x425388u;
    // NOP
    // 0x42538c: 0x0  nop
    ctx->pc = 0x42538cu;
    // NOP
}
