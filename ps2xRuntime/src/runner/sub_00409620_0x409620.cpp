#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00409620
// Address: 0x409620 - 0x409910
void sub_00409620_0x409620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00409620_0x409620");
#endif

    switch (ctx->pc) {
        case 0x409640u: goto label_409640;
        case 0x409648u: goto label_409648;
        case 0x409704u: goto label_409704;
        case 0x409720u: goto label_409720;
        case 0x409784u: goto label_409784;
        case 0x4097a0u: goto label_4097a0;
        case 0x409804u: goto label_409804;
        case 0x409820u: goto label_409820;
        case 0x409840u: goto label_409840;
        case 0x4098a0u: goto label_4098a0;
        case 0x4098acu: goto label_4098ac;
        case 0x4098b8u: goto label_4098b8;
        case 0x4098c4u: goto label_4098c4;
        case 0x4098d0u: goto label_4098d0;
        case 0x4098dcu: goto label_4098dc;
        case 0x4098f4u: goto label_4098f4;
        default: break;
    }

    ctx->pc = 0x409620u;

    // 0x409620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x409620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x409624: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x409624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x409628: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x409628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x40962c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x40962cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x409630: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x409630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x409634: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x409634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409638: 0xc102678  jal         func_4099E0
    ctx->pc = 0x409638u;
    SET_GPR_U32(ctx, 31, 0x409640u);
    ctx->pc = 0x40963Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409638u;
            // 0x40963c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x4099E0u;
    if (runtime->hasFunction(0x4099E0u)) {
        auto targetFn = runtime->lookupFunction(0x4099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409640u; }
        if (ctx->pc != 0x409640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004099E0_0x4099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409640u; }
        if (ctx->pc != 0x409640u) { return; }
    }
    ctx->pc = 0x409640u;
label_409640:
    // 0x409640: 0xc0aed9c  jal         func_2BB670
    ctx->pc = 0x409640u;
    SET_GPR_U32(ctx, 31, 0x409648u);
    ctx->pc = 0x409644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409640u;
            // 0x409644: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB670u;
    if (runtime->hasFunction(0x2BB670u)) {
        auto targetFn = runtime->lookupFunction(0x2BB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409648u; }
        if (ctx->pc != 0x409648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB670_0x2bb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409648u; }
        if (ctx->pc != 0x409648u) { return; }
    }
    ctx->pc = 0x409648u;
label_409648:
    // 0x409648: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x409648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x40964c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x40964cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x409650: 0x2442aa90  addiu       $v0, $v0, -0x5570
    ctx->pc = 0x409650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945424));
    // 0x409654: 0x2463aac8  addiu       $v1, $v1, -0x5538
    ctx->pc = 0x409654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945480));
    // 0x409658: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x409658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x40965c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x40965cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x409660: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x409660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x409664: 0x2442a9e0  addiu       $v0, $v0, -0x5620
    ctx->pc = 0x409664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945248));
    // 0x409668: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x409668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x40966c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x40966cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x409670: 0x2463aa18  addiu       $v1, $v1, -0x55E8
    ctx->pc = 0x409670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945304));
    // 0x409674: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x409674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x409678: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x409678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x40967c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x40967cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x409680: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x409680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x409684: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x409684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x409688: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x409688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x40968c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x40968cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x409690: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x409690u;
    {
        const bool branch_taken_0x409690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x409690) {
            ctx->pc = 0x409694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x409690u;
            // 0x409694: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4096BCu;
            goto label_4096bc;
        }
    }
    ctx->pc = 0x409698u;
    // 0x409698: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x409698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x40969c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x40969cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4096a0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4096a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x4096a4: 0x8c420cc4  lw          $v0, 0xCC4($v0)
    ctx->pc = 0x4096a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3268)));
    // 0x4096a8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4096A8u;
    {
        const bool branch_taken_0x4096a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4096a8) {
            ctx->pc = 0x4096B8u;
            goto label_4096b8;
        }
    }
    ctx->pc = 0x4096B0u;
    // 0x4096b0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4096b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x4096b4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x4096b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_4096b8:
    // 0x4096b8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4096b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_4096bc:
    // 0x4096bc: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x4096bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x4096c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4096c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4096c4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x4096c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x4096c8: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x4096c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x4096cc: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x4096ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x4096d0: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x4096d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x4096d4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4096d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4096d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4096d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4096dc: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4096dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4096e0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4096e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4096e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4096e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4096e8: 0x0  nop
    ctx->pc = 0x4096e8u;
    // NOP
    // 0x4096ec: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x4096ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x4096f0: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x4096f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x4096f4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x4096f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x4096f8: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x4096f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x4096fc: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4096FCu;
    SET_GPR_U32(ctx, 31, 0x409704u);
    ctx->pc = 0x409700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4096FCu;
            // 0x409700: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409704u; }
        if (ctx->pc != 0x409704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409704u; }
        if (ctx->pc != 0x409704u) { return; }
    }
    ctx->pc = 0x409704u;
label_409704:
    // 0x409704: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x409704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x409708: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x409708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40970c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x40970Cu;
    {
        const bool branch_taken_0x40970c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x409710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40970Cu;
            // 0x409710: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40970c) {
            ctx->pc = 0x409724u;
            goto label_409724;
        }
    }
    ctx->pc = 0x409714u;
    // 0x409714: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x409714u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x409718: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x409718u;
    SET_GPR_U32(ctx, 31, 0x409720u);
    ctx->pc = 0x40971Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409718u;
            // 0x40971c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409720u; }
        if (ctx->pc != 0x409720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409720u; }
        if (ctx->pc != 0x409720u) { return; }
    }
    ctx->pc = 0x409720u;
label_409720:
    // 0x409720: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x409720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_409724:
    // 0x409724: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x409724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x409728: 0xae0400e0  sw          $a0, 0xE0($s0)
    ctx->pc = 0x409728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 4));
    // 0x40972c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40972cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x409730: 0x3c034060  lui         $v1, 0x4060
    ctx->pc = 0x409730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16480 << 16));
    // 0x409734: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x409734u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x409738: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x409738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x40973c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x40973cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x409740: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x409740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x409744: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x409744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x409748: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x409748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x40974c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x40974cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x409750: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x409750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x409754: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x409754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x409758: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x409758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x40975c: 0x0  nop
    ctx->pc = 0x40975cu;
    // NOP
    // 0x409760: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x409760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x409764: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x409764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x409768: 0x46140802  mul.s       $f0, $f1, $f20
    ctx->pc = 0x409768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x40976c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x40976cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x409770: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x409770u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x409774: 0x0  nop
    ctx->pc = 0x409774u;
    // NOP
    // 0x409778: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x409778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x40977c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x40977Cu;
    SET_GPR_U32(ctx, 31, 0x409784u);
    ctx->pc = 0x409780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40977Cu;
            // 0x409780: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409784u; }
        if (ctx->pc != 0x409784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409784u; }
        if (ctx->pc != 0x409784u) { return; }
    }
    ctx->pc = 0x409784u;
label_409784:
    // 0x409784: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x409784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x409788: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x409788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40978c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x40978Cu;
    {
        const bool branch_taken_0x40978c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x409790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40978Cu;
            // 0x409790: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40978c) {
            ctx->pc = 0x4097A4u;
            goto label_4097a4;
        }
    }
    ctx->pc = 0x409794u;
    // 0x409794: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x409794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x409798: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x409798u;
    SET_GPR_U32(ctx, 31, 0x4097A0u);
    ctx->pc = 0x40979Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409798u;
            // 0x40979c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4097A0u; }
        if (ctx->pc != 0x4097A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4097A0u; }
        if (ctx->pc != 0x4097A0u) { return; }
    }
    ctx->pc = 0x4097A0u;
label_4097a0:
    // 0x4097a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4097a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4097a4:
    // 0x4097a4: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x4097a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x4097a8: 0xae0400e4  sw          $a0, 0xE4($s0)
    ctx->pc = 0x4097a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 4));
    // 0x4097ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4097acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4097b0: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x4097b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x4097b4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x4097b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x4097b8: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x4097b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x4097bc: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x4097bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x4097c0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4097c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4097c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4097c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4097c8: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x4097c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x4097cc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4097ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4097d0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4097d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4097d4: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x4097d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x4097d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4097d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4097dc: 0x0  nop
    ctx->pc = 0x4097dcu;
    // NOP
    // 0x4097e0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x4097e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x4097e4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x4097e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x4097e8: 0x46140802  mul.s       $f0, $f1, $f20
    ctx->pc = 0x4097e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x4097ec: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x4097ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x4097f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4097f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4097f4: 0x0  nop
    ctx->pc = 0x4097f4u;
    // NOP
    // 0x4097f8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x4097f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x4097fc: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4097FCu;
    SET_GPR_U32(ctx, 31, 0x409804u);
    ctx->pc = 0x409800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4097FCu;
            // 0x409800: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409804u; }
        if (ctx->pc != 0x409804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409804u; }
        if (ctx->pc != 0x409804u) { return; }
    }
    ctx->pc = 0x409804u;
label_409804:
    // 0x409804: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x409804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x409808: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x409808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40980c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x40980Cu;
    {
        const bool branch_taken_0x40980c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x409810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40980Cu;
            // 0x409810: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40980c) {
            ctx->pc = 0x409824u;
            goto label_409824;
        }
    }
    ctx->pc = 0x409814u;
    // 0x409814: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x409814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x409818: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x409818u;
    SET_GPR_U32(ctx, 31, 0x409820u);
    ctx->pc = 0x40981Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409818u;
            // 0x40981c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409820u; }
        if (ctx->pc != 0x409820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409820u; }
        if (ctx->pc != 0x409820u) { return; }
    }
    ctx->pc = 0x409820u;
label_409820:
    // 0x409820: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x409820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_409824:
    // 0x409824: 0xae0400e8  sw          $a0, 0xE8($s0)
    ctx->pc = 0x409824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 4));
    // 0x409828: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x409828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40982c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x40982cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x409830: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x409830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x409834: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x409834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x409838: 0x3e00008  jr          $ra
    ctx->pc = 0x409838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40983Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409838u;
            // 0x40983c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x409840u;
label_409840:
    // 0x409840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x409840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x409844: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x409844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x409848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x409848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x40984c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40984cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x409850: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x409850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409854: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x409854u;
    {
        const bool branch_taken_0x409854 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x409858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409854u;
            // 0x409858: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409854) {
            ctx->pc = 0x4098F4u;
            goto label_4098f4;
        }
    }
    ctx->pc = 0x40985Cu;
    // 0x40985c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x40985cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x409860: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x409860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x409864: 0x2463aa90  addiu       $v1, $v1, -0x5570
    ctx->pc = 0x409864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945424));
    // 0x409868: 0x2442aac8  addiu       $v0, $v0, -0x5538
    ctx->pc = 0x409868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945480));
    // 0x40986c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40986cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x409870: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x409870u;
    {
        const bool branch_taken_0x409870 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x409874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409870u;
            // 0x409874: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409870) {
            ctx->pc = 0x4098DCu;
            goto label_4098dc;
        }
    }
    ctx->pc = 0x409878u;
    // 0x409878: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x409878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x40987c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x40987cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x409880: 0x2463aa40  addiu       $v1, $v1, -0x55C0
    ctx->pc = 0x409880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945344));
    // 0x409884: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x409884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x409888: 0x2442aa78  addiu       $v0, $v0, -0x5588
    ctx->pc = 0x409888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945400));
    // 0x40988c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40988cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x409890: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x409890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x409894: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x409894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x409898: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x409898u;
    SET_GPR_U32(ctx, 31, 0x4098A0u);
    ctx->pc = 0x40989Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409898u;
            // 0x40989c: 0x24a57c10  addiu       $a1, $a1, 0x7C10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4098A0u; }
        if (ctx->pc != 0x4098A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4098A0u; }
        if (ctx->pc != 0x4098A0u) { return; }
    }
    ctx->pc = 0x4098A0u;
label_4098a0:
    // 0x4098a0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4098a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4098a4: 0xc0b1208  jal         func_2C4820
    ctx->pc = 0x4098A4u;
    SET_GPR_U32(ctx, 31, 0x4098ACu);
    ctx->pc = 0x4098A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4098A4u;
            // 0x4098a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4820u;
    if (runtime->hasFunction(0x2C4820u)) {
        auto targetFn = runtime->lookupFunction(0x2C4820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4098ACu; }
        if (ctx->pc != 0x4098ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4820_0x2c4820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4098ACu; }
        if (ctx->pc != 0x4098ACu) { return; }
    }
    ctx->pc = 0x4098ACu;
label_4098ac:
    // 0x4098ac: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4098acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4098b0: 0xc10265c  jal         func_409970
    ctx->pc = 0x4098B0u;
    SET_GPR_U32(ctx, 31, 0x4098B8u);
    ctx->pc = 0x4098B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4098B0u;
            // 0x4098b4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x409970u;
    if (runtime->hasFunction(0x409970u)) {
        auto targetFn = runtime->lookupFunction(0x409970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4098B8u; }
        if (ctx->pc != 0x4098B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00409970_0x409970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4098B8u; }
        if (ctx->pc != 0x4098B8u) { return; }
    }
    ctx->pc = 0x4098B8u;
label_4098b8:
    // 0x4098b8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4098b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4098bc: 0xc10265c  jal         func_409970
    ctx->pc = 0x4098BCu;
    SET_GPR_U32(ctx, 31, 0x4098C4u);
    ctx->pc = 0x4098C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4098BCu;
            // 0x4098c0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x409970u;
    if (runtime->hasFunction(0x409970u)) {
        auto targetFn = runtime->lookupFunction(0x409970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4098C4u; }
        if (ctx->pc != 0x4098C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00409970_0x409970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4098C4u; }
        if (ctx->pc != 0x4098C4u) { return; }
    }
    ctx->pc = 0x4098C4u;
label_4098c4:
    // 0x4098c4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4098c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4098c8: 0xc102644  jal         func_409910
    ctx->pc = 0x4098C8u;
    SET_GPR_U32(ctx, 31, 0x4098D0u);
    ctx->pc = 0x4098CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4098C8u;
            // 0x4098cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x409910u;
    if (runtime->hasFunction(0x409910u)) {
        auto targetFn = runtime->lookupFunction(0x409910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4098D0u; }
        if (ctx->pc != 0x4098D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00409910_0x409910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4098D0u; }
        if (ctx->pc != 0x4098D0u) { return; }
    }
    ctx->pc = 0x4098D0u;
label_4098d0:
    // 0x4098d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4098d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4098d4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4098D4u;
    SET_GPR_U32(ctx, 31, 0x4098DCu);
    ctx->pc = 0x4098D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4098D4u;
            // 0x4098d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4098DCu; }
        if (ctx->pc != 0x4098DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4098DCu; }
        if (ctx->pc != 0x4098DCu) { return; }
    }
    ctx->pc = 0x4098DCu;
label_4098dc:
    // 0x4098dc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4098dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4098e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4098e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4098e4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4098E4u;
    {
        const bool branch_taken_0x4098e4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4098e4) {
            ctx->pc = 0x4098E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4098E4u;
            // 0x4098e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4098F8u;
            goto label_4098f8;
        }
    }
    ctx->pc = 0x4098ECu;
    // 0x4098ec: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4098ECu;
    SET_GPR_U32(ctx, 31, 0x4098F4u);
    ctx->pc = 0x4098F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4098ECu;
            // 0x4098f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4098F4u; }
        if (ctx->pc != 0x4098F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4098F4u; }
        if (ctx->pc != 0x4098F4u) { return; }
    }
    ctx->pc = 0x4098F4u;
label_4098f4:
    // 0x4098f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4098f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4098f8:
    // 0x4098f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4098f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4098fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4098fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x409900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x409900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x409904: 0x3e00008  jr          $ra
    ctx->pc = 0x409904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409904u;
            // 0x409908: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40990Cu;
    // 0x40990c: 0x0  nop
    ctx->pc = 0x40990cu;
    // NOP
}
