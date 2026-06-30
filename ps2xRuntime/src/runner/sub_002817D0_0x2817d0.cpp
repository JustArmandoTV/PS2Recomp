#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002817D0
// Address: 0x2817d0 - 0x281d10
void sub_002817D0_0x2817d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002817D0_0x2817d0");
#endif

    switch (ctx->pc) {
        case 0x2818c8u: goto label_2818c8;
        case 0x2818e8u: goto label_2818e8;
        case 0x281948u: goto label_281948;
        case 0x28195cu: goto label_28195c;
        case 0x281990u: goto label_281990;
        case 0x2819acu: goto label_2819ac;
        case 0x281a08u: goto label_281a08;
        case 0x281a2cu: goto label_281a2c;
        case 0x281a58u: goto label_281a58;
        case 0x281a74u: goto label_281a74;
        case 0x281aacu: goto label_281aac;
        case 0x281aecu: goto label_281aec;
        case 0x281b38u: goto label_281b38;
        case 0x281b70u: goto label_281b70;
        case 0x281bacu: goto label_281bac;
        case 0x281bc8u: goto label_281bc8;
        case 0x281bf8u: goto label_281bf8;
        case 0x281c14u: goto label_281c14;
        case 0x281c48u: goto label_281c48;
        case 0x281c64u: goto label_281c64;
        case 0x281ca0u: goto label_281ca0;
        case 0x281cd8u: goto label_281cd8;
        default: break;
    }

    ctx->pc = 0x2817d0u;

    // 0x2817d0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2817d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2817d4: 0x39020002  xori        $v0, $t0, 0x2
    ctx->pc = 0x2817d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)2);
    // 0x2817d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2817d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2817dc: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2817dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2817e0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2817e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2817e4: 0x3c0237a7  lui         $v0, 0x37A7
    ctx->pc = 0x2817e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14247 << 16));
    // 0x2817e8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2817e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2817ec: 0x27be00b8  addiu       $fp, $sp, 0xB8
    ctx->pc = 0x2817ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2817f0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2817f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2817f4: 0x27b70128  addiu       $s7, $sp, 0x128
    ctx->pc = 0x2817f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x2817f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2817f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2817fc: 0x27b60124  addiu       $s6, $sp, 0x124
    ctx->pc = 0x2817fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x281800: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x281800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x281804: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x281804u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281808: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x281808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28180c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28180cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281810: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x281810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x281814: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x281814u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281818: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x281818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28181c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28181cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x281820: 0x3447c5ac  ori         $a3, $v0, 0xC5AC
    ctx->pc = 0x281820u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50604);
    // 0x281824: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x281824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x281828: 0x3c023686  lui         $v0, 0x3686
    ctx->pc = 0x281828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13958 << 16));
    // 0x28182c: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x28182cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x281830: 0x344637bd  ori         $a2, $v0, 0x37BD
    ctx->pc = 0x281830u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14269);
    // 0x281834: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x281834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281838: 0x27a200b4  addiu       $v0, $sp, 0xB4
    ctx->pc = 0x281838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x28183c: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x28183cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x281840: 0x3c023586  lui         $v0, 0x3586
    ctx->pc = 0x281840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13702 << 16));
    // 0x281844: 0xafc60000  sw          $a2, 0x0($fp)
    ctx->pc = 0x281844u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 6));
    // 0x281848: 0x344537bd  ori         $a1, $v0, 0x37BD
    ctx->pc = 0x281848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14269);
    // 0x28184c: 0x3c023727  lui         $v0, 0x3727
    ctx->pc = 0x28184cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14119 << 16));
    // 0x281850: 0xafa500bc  sw          $a1, 0xBC($sp)
    ctx->pc = 0x281850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
    // 0x281854: 0x3444c5ac  ori         $a0, $v0, 0xC5AC
    ctx->pc = 0x281854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50604);
    // 0x281858: 0xafa500c8  sw          $a1, 0xC8($sp)
    ctx->pc = 0x281858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 5));
    // 0x28185c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x28185cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x281860: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x281860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x281864: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x281864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x281868: 0xafa400dc  sw          $a0, 0xDC($sp)
    ctx->pc = 0x281868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 4));
    // 0x28186c: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x28186cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x281870: 0x3c02322b  lui         $v0, 0x322B
    ctx->pc = 0x281870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12843 << 16));
    // 0x281874: 0xafa500cc  sw          $a1, 0xCC($sp)
    ctx->pc = 0x281874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 5));
    // 0x281878: 0x3442cc77  ori         $v0, $v0, 0xCC77
    ctx->pc = 0x281878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52343);
    // 0x28187c: 0xafa500d4  sw          $a1, 0xD4($sp)
    ctx->pc = 0x28187cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 5));
    // 0x281880: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x281880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x281884: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x281884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x281888: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x281888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x28188c: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x28188cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x281890: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x281890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x281894: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x281894u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x281898: 0xa3a000b0  sb          $zero, 0xB0($sp)
    ctx->pc = 0x281898u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 0));
    // 0x28189c: 0x27a200b2  addiu       $v0, $sp, 0xB2
    ctx->pc = 0x28189cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 178));
    // 0x2818a0: 0xafc60000  sw          $a2, 0x0($fp)
    ctx->pc = 0x2818a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 6));
    // 0x2818a4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2818a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2818a8: 0x27a200b1  addiu       $v0, $sp, 0xB1
    ctx->pc = 0x2818a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 177));
    // 0x2818ac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2818acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2818b0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2818b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2818b4: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x2818b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x2818b8: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x2818b8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x2818bc: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x2818BCu;
    {
        const bool branch_taken_0x2818bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2818C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2818BCu;
            // 0x2818c0: 0xaee30000  sw          $v1, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2818bc) {
            ctx->pc = 0x281930u;
            goto label_281930;
        }
    }
    ctx->pc = 0x2818C4u;
    // 0x2818c4: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x2818c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2818c8:
    // 0x2818c8: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x2818c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2818cc: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2818ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2818d0: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2818d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x2818d4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2818d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x2818d8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2818D8u;
    {
        const bool branch_taken_0x2818d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2818DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2818D8u;
            // 0x2818dc: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2818d8) {
            ctx->pc = 0x2818E8u;
            goto label_2818e8;
        }
    }
    ctx->pc = 0x2818E0u;
    // 0x2818e0: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x2818E0u;
    SET_GPR_U32(ctx, 31, 0x2818E8u);
    ctx->pc = 0x2818E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2818E0u;
            // 0x2818e4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2818E8u; }
        if (ctx->pc != 0x2818E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2818E8u; }
        if (ctx->pc != 0x2818E8u) { return; }
    }
    ctx->pc = 0x2818E8u;
label_2818e8:
    // 0x2818e8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2818e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2818ec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2818ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2818f0: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x2818f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2818f4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2818f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2818f8: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x2818f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x2818fc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2818fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x281900: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x281900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x281904: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x281904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281908: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x281908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28190c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x28190cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x281910: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x281910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281914: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x281914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x281918: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x281918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28191c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x28191cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x281920: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x281920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281924: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x281924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x281928: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x281928u;
    {
        const bool branch_taken_0x281928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28192Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281928u;
            // 0x28192c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281928) {
            ctx->pc = 0x2818C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2818c8;
        }
    }
    ctx->pc = 0x281930u;
label_281930:
    // 0x281930: 0x27b00124  addiu       $s0, $sp, 0x124
    ctx->pc = 0x281930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x281934: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x281934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x281938: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x281938u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
    // 0x28193c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x28193cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x281940: 0xc0a2a40  jal         func_28A900
    ctx->pc = 0x281940u;
    SET_GPR_U32(ctx, 31, 0x281948u);
    ctx->pc = 0x281944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281940u;
            // 0x281944: 0x24c6a520  addiu       $a2, $a2, -0x5AE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A900u;
    if (runtime->hasFunction(0x28A900u)) {
        auto targetFn = runtime->lookupFunction(0x28A900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281948u; }
        if (ctx->pc != 0x281948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A900_0x28a900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281948u; }
        if (ctx->pc != 0x281948u) { return; }
    }
    ctx->pc = 0x281948u;
label_281948:
    // 0x281948: 0x27a200b4  addiu       $v0, $sp, 0xB4
    ctx->pc = 0x281948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x28194c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x28194cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x281950: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x281950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x281954: 0xc0a0ab4  jal         func_282AD0
    ctx->pc = 0x281954u;
    SET_GPR_U32(ctx, 31, 0x28195Cu);
    ctx->pc = 0x281958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281954u;
            // 0x281958: 0x27a5014c  addiu       $a1, $sp, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282AD0u;
    if (runtime->hasFunction(0x282AD0u)) {
        auto targetFn = runtime->lookupFunction(0x282AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28195Cu; }
        if (ctx->pc != 0x28195Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282AD0_0x282ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28195Cu; }
        if (ctx->pc != 0x28195Cu) { return; }
    }
    ctx->pc = 0x28195Cu;
label_28195c:
    // 0x28195c: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x28195cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x281960: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x281960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x281964: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x281964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x281968: 0x27b60118  addiu       $s6, $sp, 0x118
    ctx->pc = 0x281968u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x28196c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28196cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x281970: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x281970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x281974: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x281974u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x281978: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x281978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28197c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x28197cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x281980: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x281980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x281984: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x281984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x281988: 0xc0a15c8  jal         func_285720
    ctx->pc = 0x281988u;
    SET_GPR_U32(ctx, 31, 0x281990u);
    ctx->pc = 0x28198Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281988u;
            // 0x28198c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285720u;
    if (runtime->hasFunction(0x285720u)) {
        auto targetFn = runtime->lookupFunction(0x285720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281990u; }
        if (ctx->pc != 0x281990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285720_0x285720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281990u; }
        if (ctx->pc != 0x281990u) { return; }
    }
    ctx->pc = 0x281990u;
label_281990:
    // 0x281990: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x281990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x281994: 0x27a40144  addiu       $a0, $sp, 0x144
    ctx->pc = 0x281994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x281998: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x281998u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28199c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x28199cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2819a0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2819a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2819a4: 0xc0a2c30  jal         func_28B0C0
    ctx->pc = 0x2819A4u;
    SET_GPR_U32(ctx, 31, 0x2819ACu);
    ctx->pc = 0x2819A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2819A4u;
            // 0x2819a8: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B0C0u;
    if (runtime->hasFunction(0x28B0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28B0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2819ACu; }
        if (ctx->pc != 0x2819ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B0C0_0x28b0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2819ACu; }
        if (ctx->pc != 0x2819ACu) { return; }
    }
    ctx->pc = 0x2819ACu;
label_2819ac:
    // 0x2819ac: 0x83b10144  lb          $s1, 0x144($sp)
    ctx->pc = 0x2819acu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2819b0: 0x1620004f  bnez        $s1, . + 4 + (0x4F << 2)
    ctx->pc = 0x2819B0u;
    {
        const bool branch_taken_0x2819b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2819B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2819B0u;
            // 0x2819b4: 0x27a300b2  addiu       $v1, $sp, 0xB2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 178));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2819b0) {
            ctx->pc = 0x281AF0u;
            goto label_281af0;
        }
    }
    ctx->pc = 0x2819B8u;
    // 0x2819b8: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2819b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2819bc: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x2819BCu;
    {
        const bool branch_taken_0x2819bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2819bc) {
            ctx->pc = 0x281AF0u;
            goto label_281af0;
        }
    }
    ctx->pc = 0x2819C4u;
    // 0x2819c4: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x2819c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x2819c8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2819c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2819cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2819ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2819d0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2819d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2819d4: 0xa3a00148  sb          $zero, 0x148($sp)
    ctx->pc = 0x2819d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 328), (uint8_t)GPR_U32(ctx, 0));
    // 0x2819d8: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x2819d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2819dc: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x2819dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x2819e0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2819e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2819e4: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x2819e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x2819e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2819e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2819ec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2819ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2819f0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2819f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2819f4: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x2819f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2819f8: 0x27a90148  addiu       $t1, $sp, 0x148
    ctx->pc = 0x2819f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x2819fc: 0x27aa0110  addiu       $t2, $sp, 0x110
    ctx->pc = 0x2819fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x281a00: 0xc0a0f38  jal         func_283CE0
    ctx->pc = 0x281A00u;
    SET_GPR_U32(ctx, 31, 0x281A08u);
    ctx->pc = 0x281A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281A00u;
            // 0x281a04: 0x27ab0100  addiu       $t3, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283CE0u;
    if (runtime->hasFunction(0x283CE0u)) {
        auto targetFn = runtime->lookupFunction(0x283CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281A08u; }
        if (ctx->pc != 0x281A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283CE0_0x283ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281A08u; }
        if (ctx->pc != 0x281A08u) { return; }
    }
    ctx->pc = 0x281A08u;
label_281a08:
    // 0x281a08: 0x83a30148  lb          $v1, 0x148($sp)
    ctx->pc = 0x281a08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x281a0c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x281A0Cu;
    {
        const bool branch_taken_0x281a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x281a0c) {
            ctx->pc = 0x281AB0u;
            goto label_281ab0;
        }
    }
    ctx->pc = 0x281A14u;
    // 0x281a14: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x281a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x281a18: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x281a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x281a1c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x281a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x281a20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x281a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x281a24: 0xc0a0bb8  jal         func_282EE0
    ctx->pc = 0x281A24u;
    SET_GPR_U32(ctx, 31, 0x281A2Cu);
    ctx->pc = 0x281A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281A24u;
            // 0x281a28: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282EE0u;
    if (runtime->hasFunction(0x282EE0u)) {
        auto targetFn = runtime->lookupFunction(0x282EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281A2Cu; }
        if (ctx->pc != 0x281A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282EE0_0x282ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281A2Cu; }
        if (ctx->pc != 0x281A2Cu) { return; }
    }
    ctx->pc = 0x281A2Cu;
label_281a2c:
    // 0x281a2c: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x281a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x281a30: 0x27b100f8  addiu       $s1, $sp, 0xF8
    ctx->pc = 0x281a30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x281a34: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x281a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x281a38: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x281a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x281a3c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x281a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x281a40: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x281a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x281a44: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x281a44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x281a48: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x281a48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281a4c: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x281a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x281a50: 0xc0a0758  jal         func_281D60
    ctx->pc = 0x281A50u;
    SET_GPR_U32(ctx, 31, 0x281A58u);
    ctx->pc = 0x281A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281A50u;
            // 0x281a54: 0x27a800f0  addiu       $t0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281D60u;
    if (runtime->hasFunction(0x281D60u)) {
        auto targetFn = runtime->lookupFunction(0x281D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281A58u; }
        if (ctx->pc != 0x281A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281D60_0x281d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281A58u; }
        if (ctx->pc != 0x281A58u) { return; }
    }
    ctx->pc = 0x281A58u;
label_281a58:
    // 0x281a58: 0x27a4013c  addiu       $a0, $sp, 0x13C
    ctx->pc = 0x281a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x281a5c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x281a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x281a60: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x281a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281a64: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x281a64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281a68: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x281a68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281a6c: 0xc0a2c30  jal         func_28B0C0
    ctx->pc = 0x281A6Cu;
    SET_GPR_U32(ctx, 31, 0x281A74u);
    ctx->pc = 0x281A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281A6Cu;
            // 0x281a70: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B0C0u;
    if (runtime->hasFunction(0x28B0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28B0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281A74u; }
        if (ctx->pc != 0x281A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B0C0_0x28b0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281A74u; }
        if (ctx->pc != 0x281A74u) { return; }
    }
    ctx->pc = 0x281A74u;
label_281a74:
    // 0x281a74: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x281a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x281a78: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x281a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x281a7c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x281a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x281a80: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x281A80u;
    {
        const bool branch_taken_0x281a80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x281A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281A80u;
            // 0x281a84: 0x83b1013c  lb          $s1, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281a80) {
            ctx->pc = 0x281AB0u;
            goto label_281ab0;
        }
    }
    ctx->pc = 0x281A88u;
    // 0x281a88: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x281a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x281a8c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x281a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x281a90: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x281a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x281a94: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x281a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x281a98: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x281a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x281a9c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x281a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x281aa0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x281aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x281aa4: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x281AA4u;
    SET_GPR_U32(ctx, 31, 0x281AACu);
    ctx->pc = 0x281AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281AA4u;
            // 0x281aa8: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281AACu; }
        if (ctx->pc != 0x281AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281AACu; }
        if (ctx->pc != 0x281AACu) { return; }
    }
    ctx->pc = 0x281AACu;
label_281aac:
    // 0x281aac: 0x0  nop
    ctx->pc = 0x281aacu;
    // NOP
label_281ab0:
    // 0x281ab0: 0x27a30108  addiu       $v1, $sp, 0x108
    ctx->pc = 0x281ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x281ab4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x281ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x281ab8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x281ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x281abc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x281abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x281ac0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x281AC0u;
    {
        const bool branch_taken_0x281ac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x281ac0) {
            ctx->pc = 0x281AF0u;
            goto label_281af0;
        }
    }
    ctx->pc = 0x281AC8u;
    // 0x281ac8: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x281ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x281acc: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x281accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x281ad0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x281ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x281ad4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x281ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x281ad8: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x281ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x281adc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x281adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x281ae0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x281ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x281ae4: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x281AE4u;
    SET_GPR_U32(ctx, 31, 0x281AECu);
    ctx->pc = 0x281AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281AE4u;
            // 0x281ae8: 0x23140  sll         $a2, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281AECu; }
        if (ctx->pc != 0x281AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281AECu; }
        if (ctx->pc != 0x281AECu) { return; }
    }
    ctx->pc = 0x281AECu;
label_281aec:
    // 0x281aec: 0x0  nop
    ctx->pc = 0x281aecu;
    // NOP
label_281af0:
    // 0x281af0: 0x27a300b2  addiu       $v1, $sp, 0xB2
    ctx->pc = 0x281af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 178));
    // 0x281af4: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x281af4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x281af8: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x281AF8u;
    {
        const bool branch_taken_0x281af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x281af8) {
            ctx->pc = 0x281B78u;
            goto label_281b78;
        }
    }
    ctx->pc = 0x281B00u;
    // 0x281b00: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x281b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x281b04: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x281b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x281b08: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x281b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x281b0c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x281B0Cu;
    {
        const bool branch_taken_0x281b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x281b0c) {
            ctx->pc = 0x281B38u;
            goto label_281b38;
        }
    }
    ctx->pc = 0x281B14u;
    // 0x281b14: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x281b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x281b18: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x281b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x281b1c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x281b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x281b20: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x281b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x281b24: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x281b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x281b28: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x281b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x281b2c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x281b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x281b30: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x281B30u;
    SET_GPR_U32(ctx, 31, 0x281B38u);
    ctx->pc = 0x281B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281B30u;
            // 0x281b34: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281B38u; }
        if (ctx->pc != 0x281B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281B38u; }
        if (ctx->pc != 0x281B38u) { return; }
    }
    ctx->pc = 0x281B38u;
label_281b38:
    // 0x281b38: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x281b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x281b3c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x281b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x281b40: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x281b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x281b44: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x281B44u;
    {
        const bool branch_taken_0x281b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x281b44) {
            ctx->pc = 0x281B70u;
            goto label_281b70;
        }
    }
    ctx->pc = 0x281B4Cu;
    // 0x281b4c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x281b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x281b50: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x281b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x281b54: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x281b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x281b58: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x281b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x281b5c: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x281b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x281b60: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x281b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x281b64: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x281b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x281b68: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x281B68u;
    SET_GPR_U32(ctx, 31, 0x281B70u);
    ctx->pc = 0x281B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281B68u;
            // 0x281b6c: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281B70u; }
        if (ctx->pc != 0x281B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281B70u; }
        if (ctx->pc != 0x281B70u) { return; }
    }
    ctx->pc = 0x281B70u;
label_281b70:
    // 0x281b70: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x281B70u;
    {
        const bool branch_taken_0x281b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281b70) {
            ctx->pc = 0x281CD8u;
            goto label_281cd8;
        }
    }
    ctx->pc = 0x281B78u;
label_281b78:
    // 0x281b78: 0x11263c  dsll32      $a0, $s1, 24
    ctx->pc = 0x281b78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 24));
    // 0x281b7c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x281b7cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x281b80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x281b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281b84: 0x27a300b1  addiu       $v1, $sp, 0xB1
    ctx->pc = 0x281b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 177));
    // 0x281b88: 0x14800037  bnez        $a0, . + 4 + (0x37 << 2)
    ctx->pc = 0x281B88u;
    {
        const bool branch_taken_0x281b88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x281B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281B88u;
            // 0x281b8c: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281b88) {
            ctx->pc = 0x281C68u;
            goto label_281c68;
        }
    }
    ctx->pc = 0x281B90u;
    // 0x281b90: 0xa3a500b0  sb          $a1, 0xB0($sp)
    ctx->pc = 0x281b90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 5));
    // 0x281b94: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x281b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x281b98: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x281b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281b9c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x281b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281ba0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x281ba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281ba4: 0xc0a15c8  jal         func_285720
    ctx->pc = 0x281BA4u;
    SET_GPR_U32(ctx, 31, 0x281BACu);
    ctx->pc = 0x281BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281BA4u;
            // 0x281ba8: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285720u;
    if (runtime->hasFunction(0x285720u)) {
        auto targetFn = runtime->lookupFunction(0x285720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281BACu; }
        if (ctx->pc != 0x281BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285720_0x285720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281BACu; }
        if (ctx->pc != 0x281BACu) { return; }
    }
    ctx->pc = 0x281BACu;
label_281bac:
    // 0x281bac: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x281bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x281bb0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x281bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x281bb4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x281bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281bb8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x281bb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281bbc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x281bbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281bc0: 0xc0a2c30  jal         func_28B0C0
    ctx->pc = 0x281BC0u;
    SET_GPR_U32(ctx, 31, 0x281BC8u);
    ctx->pc = 0x281BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281BC0u;
            // 0x281bc4: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B0C0u;
    if (runtime->hasFunction(0x28B0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28B0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281BC8u; }
        if (ctx->pc != 0x281BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B0C0_0x28b0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281BC8u; }
        if (ctx->pc != 0x281BC8u) { return; }
    }
    ctx->pc = 0x281BC8u;
label_281bc8:
    // 0x281bc8: 0x83a30138  lb          $v1, 0x138($sp)
    ctx->pc = 0x281bc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x281bcc: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x281BCCu;
    {
        const bool branch_taken_0x281bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x281bcc) {
            ctx->pc = 0x281C68u;
            goto label_281c68;
        }
    }
    ctx->pc = 0x281BD4u;
    // 0x281bd4: 0x3c023456  lui         $v0, 0x3456
    ctx->pc = 0x281bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13398 << 16));
    // 0x281bd8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x281bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x281bdc: 0x3442bf95  ori         $v0, $v0, 0xBF95
    ctx->pc = 0x281bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49045);
    // 0x281be0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x281be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281be4: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x281be4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x281be8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x281be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281bec: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x281becu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281bf0: 0xc0a15c8  jal         func_285720
    ctx->pc = 0x281BF0u;
    SET_GPR_U32(ctx, 31, 0x281BF8u);
    ctx->pc = 0x281BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281BF0u;
            // 0x281bf4: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285720u;
    if (runtime->hasFunction(0x285720u)) {
        auto targetFn = runtime->lookupFunction(0x285720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281BF8u; }
        if (ctx->pc != 0x281BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285720_0x285720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281BF8u; }
        if (ctx->pc != 0x281BF8u) { return; }
    }
    ctx->pc = 0x281BF8u;
label_281bf8:
    // 0x281bf8: 0x27a40134  addiu       $a0, $sp, 0x134
    ctx->pc = 0x281bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x281bfc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x281bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x281c00: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x281c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c04: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x281c04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c08: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x281c08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c0c: 0xc0a2c30  jal         func_28B0C0
    ctx->pc = 0x281C0Cu;
    SET_GPR_U32(ctx, 31, 0x281C14u);
    ctx->pc = 0x281C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281C0Cu;
            // 0x281c10: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B0C0u;
    if (runtime->hasFunction(0x28B0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28B0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281C14u; }
        if (ctx->pc != 0x281C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B0C0_0x28b0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281C14u; }
        if (ctx->pc != 0x281C14u) { return; }
    }
    ctx->pc = 0x281C14u;
label_281c14:
    // 0x281c14: 0x83a30134  lb          $v1, 0x134($sp)
    ctx->pc = 0x281c14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x281c18: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x281C18u;
    {
        const bool branch_taken_0x281c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x281c18) {
            ctx->pc = 0x281C68u;
            goto label_281c68;
        }
    }
    ctx->pc = 0x281C20u;
    // 0x281c20: 0x3c023586  lui         $v0, 0x3586
    ctx->pc = 0x281c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13702 << 16));
    // 0x281c24: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x281c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x281c28: 0x344337bd  ori         $v1, $v0, 0x37BD
    ctx->pc = 0x281c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14269);
    // 0x281c2c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x281c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c30: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x281c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x281c34: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x281c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x281c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x281c3c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x281c3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c40: 0xc0a15c8  jal         func_285720
    ctx->pc = 0x281C40u;
    SET_GPR_U32(ctx, 31, 0x281C48u);
    ctx->pc = 0x281C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281C40u;
            // 0x281c44: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285720u;
    if (runtime->hasFunction(0x285720u)) {
        auto targetFn = runtime->lookupFunction(0x285720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281C48u; }
        if (ctx->pc != 0x281C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285720_0x285720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281C48u; }
        if (ctx->pc != 0x281C48u) { return; }
    }
    ctx->pc = 0x281C48u;
label_281c48:
    // 0x281c48: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x281c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c4c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x281c4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c50: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x281c50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c54: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x281c54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c58: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x281c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x281c5c: 0xc0a2c30  jal         func_28B0C0
    ctx->pc = 0x281C5Cu;
    SET_GPR_U32(ctx, 31, 0x281C64u);
    ctx->pc = 0x281C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281C5Cu;
            // 0x281c60: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B0C0u;
    if (runtime->hasFunction(0x28B0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28B0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281C64u; }
        if (ctx->pc != 0x281C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B0C0_0x28b0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281C64u; }
        if (ctx->pc != 0x281C64u) { return; }
    }
    ctx->pc = 0x281C64u;
label_281c64:
    // 0x281c64: 0x0  nop
    ctx->pc = 0x281c64u;
    // NOP
label_281c68:
    // 0x281c68: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x281c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x281c6c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x281c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x281c70: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x281c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x281c74: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x281C74u;
    {
        const bool branch_taken_0x281c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x281c74) {
            ctx->pc = 0x281CA0u;
            goto label_281ca0;
        }
    }
    ctx->pc = 0x281C7Cu;
    // 0x281c7c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x281c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x281c80: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x281c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x281c84: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x281c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x281c88: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x281c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x281c8c: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x281c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x281c90: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x281c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x281c94: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x281c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x281c98: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x281C98u;
    SET_GPR_U32(ctx, 31, 0x281CA0u);
    ctx->pc = 0x281C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281C98u;
            // 0x281c9c: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281CA0u; }
        if (ctx->pc != 0x281CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281CA0u; }
        if (ctx->pc != 0x281CA0u) { return; }
    }
    ctx->pc = 0x281CA0u;
label_281ca0:
    // 0x281ca0: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x281ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x281ca4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x281ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x281ca8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x281ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x281cac: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x281CACu;
    {
        const bool branch_taken_0x281cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x281cac) {
            ctx->pc = 0x281CD8u;
            goto label_281cd8;
        }
    }
    ctx->pc = 0x281CB4u;
    // 0x281cb4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x281cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x281cb8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x281cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x281cbc: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x281cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x281cc0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x281cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x281cc4: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x281cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x281cc8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x281cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x281ccc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x281cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x281cd0: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x281CD0u;
    SET_GPR_U32(ctx, 31, 0x281CD8u);
    ctx->pc = 0x281CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281CD0u;
            // 0x281cd4: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281CD8u; }
        if (ctx->pc != 0x281CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281CD8u; }
        if (ctx->pc != 0x281CD8u) { return; }
    }
    ctx->pc = 0x281CD8u;
label_281cd8:
    // 0x281cd8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x281cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x281cdc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x281cdcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x281ce0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x281ce0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x281ce4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x281ce4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x281ce8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x281ce8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x281cec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x281cecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x281cf0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x281cf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281cf4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x281cf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281cf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x281cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281cfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x281cfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281d00: 0x3e00008  jr          $ra
    ctx->pc = 0x281D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281D00u;
            // 0x281d04: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281D08u;
    // 0x281d08: 0x0  nop
    ctx->pc = 0x281d08u;
    // NOP
    // 0x281d0c: 0x0  nop
    ctx->pc = 0x281d0cu;
    // NOP
}
