#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00504690
// Address: 0x504690 - 0x504840
void sub_00504690_0x504690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00504690_0x504690");
#endif

    switch (ctx->pc) {
        case 0x5046acu: goto label_5046ac;
        case 0x5046ccu: goto label_5046cc;
        case 0x504724u: goto label_504724;
        case 0x504748u: goto label_504748;
        case 0x504770u: goto label_504770;
        case 0x5047d0u: goto label_5047d0;
        case 0x5047dcu: goto label_5047dc;
        case 0x5047e8u: goto label_5047e8;
        case 0x5047f4u: goto label_5047f4;
        case 0x504800u: goto label_504800;
        case 0x50480cu: goto label_50480c;
        case 0x504824u: goto label_504824;
        default: break;
    }

    ctx->pc = 0x504690u;

    // 0x504690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x504690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x504694: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x504694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x504698: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x504698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x50469c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x50469cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x5046a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5046a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x5046a4: 0xc1412d4  jal         func_504B50
    ctx->pc = 0x5046A4u;
    SET_GPR_U32(ctx, 31, 0x5046ACu);
    ctx->pc = 0x5046A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5046A4u;
            // 0x5046a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x504B50u;
    if (runtime->hasFunction(0x504B50u)) {
        auto targetFn = runtime->lookupFunction(0x504B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5046ACu; }
        if (ctx->pc != 0x5046ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00504B50_0x504b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5046ACu; }
        if (ctx->pc != 0x5046ACu) { return; }
    }
    ctx->pc = 0x5046ACu;
label_5046ac:
    // 0x5046ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5046acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x5046b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5046b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x5046b4: 0x24634d70  addiu       $v1, $v1, 0x4D70
    ctx->pc = 0x5046b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19824));
    // 0x5046b8: 0x24424da8  addiu       $v0, $v0, 0x4DA8
    ctx->pc = 0x5046b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19880));
    // 0x5046bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5046bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x5046c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5046c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5046c4: 0xc1412d0  jal         func_504B40
    ctx->pc = 0x5046C4u;
    SET_GPR_U32(ctx, 31, 0x5046CCu);
    ctx->pc = 0x5046C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5046C4u;
            // 0x5046c8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x504B40u;
    if (runtime->hasFunction(0x504B40u)) {
        auto targetFn = runtime->lookupFunction(0x504B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5046CCu; }
        if (ctx->pc != 0x5046CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00504B40_0x504b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5046CCu; }
        if (ctx->pc != 0x5046CCu) { return; }
    }
    ctx->pc = 0x5046CCu;
label_5046cc:
    // 0x5046cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x5046ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x5046d0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x5046d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x5046d4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5046d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x5046d8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x5046d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x5046dc: 0x24424d20  addiu       $v0, $v0, 0x4D20
    ctx->pc = 0x5046dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19744));
    // 0x5046e0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x5046e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x5046e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x5046e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x5046e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5046e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x5046ec: 0x24424d58  addiu       $v0, $v0, 0x4D58
    ctx->pc = 0x5046ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19800));
    // 0x5046f0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x5046f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x5046f4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5046f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x5046f8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x5046f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x5046fc: 0xc440b118  lwc1        $f0, -0x4EE8($v0)
    ctx->pc = 0x5046fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x504700: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x504700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x504704: 0xc441b11c  lwc1        $f1, -0x4EE4($v0)
    ctx->pc = 0x504704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x504708: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x504708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x50470c: 0xc460b120  lwc1        $f0, -0x4EE0($v1)
    ctx->pc = 0x50470cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294947104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x504710: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x504710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x504714: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x504714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x504718: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x504718u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x50471c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x50471Cu;
    SET_GPR_U32(ctx, 31, 0x504724u);
    ctx->pc = 0x504720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50471Cu;
            // 0x504720: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504724u; }
        if (ctx->pc != 0x504724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504724u; }
        if (ctx->pc != 0x504724u) { return; }
    }
    ctx->pc = 0x504724u;
label_504724:
    // 0x504724: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x504724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x504728: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x504728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50472c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x50472Cu;
    {
        const bool branch_taken_0x50472c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x504730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50472Cu;
            // 0x504730: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50472c) {
            ctx->pc = 0x50474Cu;
            goto label_50474c;
        }
    }
    ctx->pc = 0x504734u;
    // 0x504734: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x504734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x504738: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x504738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x50473c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x50473cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x504740: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x504740u;
    SET_GPR_U32(ctx, 31, 0x504748u);
    ctx->pc = 0x504744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504740u;
            // 0x504744: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504748u; }
        if (ctx->pc != 0x504748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504748u; }
        if (ctx->pc != 0x504748u) { return; }
    }
    ctx->pc = 0x504748u;
label_504748:
    // 0x504748: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x504748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50474c:
    // 0x50474c: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x50474cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x504750: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x504750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504754: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x504754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x504758: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x504758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50475c: 0x3e00008  jr          $ra
    ctx->pc = 0x50475Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x504760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50475Cu;
            // 0x504760: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x504764u;
    // 0x504764: 0x0  nop
    ctx->pc = 0x504764u;
    // NOP
    // 0x504768: 0x0  nop
    ctx->pc = 0x504768u;
    // NOP
    // 0x50476c: 0x0  nop
    ctx->pc = 0x50476cu;
    // NOP
label_504770:
    // 0x504770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x504770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x504774: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x504774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x504778: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x504778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x50477c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50477cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x504780: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x504780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504784: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x504784u;
    {
        const bool branch_taken_0x504784 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x504788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504784u;
            // 0x504788: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x504784) {
            ctx->pc = 0x504824u;
            goto label_504824;
        }
    }
    ctx->pc = 0x50478Cu;
    // 0x50478c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x50478cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x504790: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x504790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x504794: 0x24634d70  addiu       $v1, $v1, 0x4D70
    ctx->pc = 0x504794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19824));
    // 0x504798: 0x24424da8  addiu       $v0, $v0, 0x4DA8
    ctx->pc = 0x504798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19880));
    // 0x50479c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50479cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x5047a0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x5047A0u;
    {
        const bool branch_taken_0x5047a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x5047A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5047A0u;
            // 0x5047a4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5047a0) {
            ctx->pc = 0x50480Cu;
            goto label_50480c;
        }
    }
    ctx->pc = 0x5047A8u;
    // 0x5047a8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5047a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x5047ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5047acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x5047b0: 0x24634cd0  addiu       $v1, $v1, 0x4CD0
    ctx->pc = 0x5047b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19664));
    // 0x5047b4: 0x3c050050  lui         $a1, 0x50
    ctx->pc = 0x5047b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)80 << 16));
    // 0x5047b8: 0x24424d08  addiu       $v0, $v0, 0x4D08
    ctx->pc = 0x5047b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19720));
    // 0x5047bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5047bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x5047c0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x5047c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x5047c4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x5047c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x5047c8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x5047C8u;
    SET_GPR_U32(ctx, 31, 0x5047D0u);
    ctx->pc = 0x5047CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5047C8u;
            // 0x5047cc: 0x24a54910  addiu       $a1, $a1, 0x4910 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5047D0u; }
        if (ctx->pc != 0x5047D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5047D0u; }
        if (ctx->pc != 0x5047D0u) { return; }
    }
    ctx->pc = 0x5047D0u;
label_5047d0:
    // 0x5047d0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x5047d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x5047d4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x5047D4u;
    SET_GPR_U32(ctx, 31, 0x5047DCu);
    ctx->pc = 0x5047D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5047D4u;
            // 0x5047d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5047DCu; }
        if (ctx->pc != 0x5047DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5047DCu; }
        if (ctx->pc != 0x5047DCu) { return; }
    }
    ctx->pc = 0x5047DCu;
label_5047dc:
    // 0x5047dc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x5047dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x5047e0: 0xc141228  jal         func_5048A0
    ctx->pc = 0x5047E0u;
    SET_GPR_U32(ctx, 31, 0x5047E8u);
    ctx->pc = 0x5047E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5047E0u;
            // 0x5047e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5048A0u;
    if (runtime->hasFunction(0x5048A0u)) {
        auto targetFn = runtime->lookupFunction(0x5048A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5047E8u; }
        if (ctx->pc != 0x5047E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005048A0_0x5048a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5047E8u; }
        if (ctx->pc != 0x5047E8u) { return; }
    }
    ctx->pc = 0x5047E8u;
label_5047e8:
    // 0x5047e8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x5047e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x5047ec: 0xc141228  jal         func_5048A0
    ctx->pc = 0x5047ECu;
    SET_GPR_U32(ctx, 31, 0x5047F4u);
    ctx->pc = 0x5047F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5047ECu;
            // 0x5047f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5048A0u;
    if (runtime->hasFunction(0x5048A0u)) {
        auto targetFn = runtime->lookupFunction(0x5048A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5047F4u; }
        if (ctx->pc != 0x5047F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005048A0_0x5048a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5047F4u; }
        if (ctx->pc != 0x5047F4u) { return; }
    }
    ctx->pc = 0x5047F4u;
label_5047f4:
    // 0x5047f4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x5047f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x5047f8: 0xc141210  jal         func_504840
    ctx->pc = 0x5047F8u;
    SET_GPR_U32(ctx, 31, 0x504800u);
    ctx->pc = 0x5047FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5047F8u;
            // 0x5047fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x504840u;
    if (runtime->hasFunction(0x504840u)) {
        auto targetFn = runtime->lookupFunction(0x504840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504800u; }
        if (ctx->pc != 0x504800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00504840_0x504840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504800u; }
        if (ctx->pc != 0x504800u) { return; }
    }
    ctx->pc = 0x504800u;
label_504800:
    // 0x504800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504804: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x504804u;
    SET_GPR_U32(ctx, 31, 0x50480Cu);
    ctx->pc = 0x504808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504804u;
            // 0x504808: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50480Cu; }
        if (ctx->pc != 0x50480Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50480Cu; }
        if (ctx->pc != 0x50480Cu) { return; }
    }
    ctx->pc = 0x50480Cu;
label_50480c:
    // 0x50480c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x50480cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x504810: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x504810u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x504814: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x504814u;
    {
        const bool branch_taken_0x504814 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x504814) {
            ctx->pc = 0x504818u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x504814u;
            // 0x504818: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x504828u;
            goto label_504828;
        }
    }
    ctx->pc = 0x50481Cu;
    // 0x50481c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x50481Cu;
    SET_GPR_U32(ctx, 31, 0x504824u);
    ctx->pc = 0x504820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50481Cu;
            // 0x504820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504824u; }
        if (ctx->pc != 0x504824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504824u; }
        if (ctx->pc != 0x504824u) { return; }
    }
    ctx->pc = 0x504824u;
label_504824:
    // 0x504824: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x504824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_504828:
    // 0x504828: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x504828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50482c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50482cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x504830: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x504830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x504834: 0x3e00008  jr          $ra
    ctx->pc = 0x504834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x504838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504834u;
            // 0x504838: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50483Cu;
    // 0x50483c: 0x0  nop
    ctx->pc = 0x50483cu;
    // NOP
}
