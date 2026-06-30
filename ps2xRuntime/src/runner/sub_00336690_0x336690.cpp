#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00336690
// Address: 0x336690 - 0x336830
void sub_00336690_0x336690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336690_0x336690");
#endif

    switch (ctx->pc) {
        case 0x3366acu: goto label_3366ac;
        case 0x3366ccu: goto label_3366cc;
        case 0x336718u: goto label_336718;
        case 0x336738u: goto label_336738;
        case 0x336760u: goto label_336760;
        case 0x3367c0u: goto label_3367c0;
        case 0x3367ccu: goto label_3367cc;
        case 0x3367d8u: goto label_3367d8;
        case 0x3367e4u: goto label_3367e4;
        case 0x3367f0u: goto label_3367f0;
        case 0x3367fcu: goto label_3367fc;
        case 0x336814u: goto label_336814;
        default: break;
    }

    ctx->pc = 0x336690u;

    // 0x336690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x336690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x336694: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x336694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x336698: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x336698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33669c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x33669cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x3366a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3366a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3366a4: 0xc0cda44  jal         func_336910
    ctx->pc = 0x3366A4u;
    SET_GPR_U32(ctx, 31, 0x3366ACu);
    ctx->pc = 0x3366A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3366A4u;
            // 0x3366a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336910u;
    if (runtime->hasFunction(0x336910u)) {
        auto targetFn = runtime->lookupFunction(0x336910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3366ACu; }
        if (ctx->pc != 0x3366ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336910_0x336910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3366ACu; }
        if (ctx->pc != 0x3366ACu) { return; }
    }
    ctx->pc = 0x3366ACu;
label_3366ac:
    // 0x3366ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3366acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3366b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3366b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3366b4: 0x24634cd0  addiu       $v1, $v1, 0x4CD0
    ctx->pc = 0x3366b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19664));
    // 0x3366b8: 0x24424d08  addiu       $v0, $v0, 0x4D08
    ctx->pc = 0x3366b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19720));
    // 0x3366bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3366bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3366c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3366c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3366c4: 0xc0cda40  jal         func_336900
    ctx->pc = 0x3366C4u;
    SET_GPR_U32(ctx, 31, 0x3366CCu);
    ctx->pc = 0x3366C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3366C4u;
            // 0x3366c8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336900u;
    if (runtime->hasFunction(0x336900u)) {
        auto targetFn = runtime->lookupFunction(0x336900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3366CCu; }
        if (ctx->pc != 0x3366CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336900_0x336900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3366CCu; }
        if (ctx->pc != 0x3366CCu) { return; }
    }
    ctx->pc = 0x3366CCu;
label_3366cc:
    // 0x3366cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3366ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3366d0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3366d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3366d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3366d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3366d8: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x3366d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x3366dc: 0x24424c20  addiu       $v0, $v0, 0x4C20
    ctx->pc = 0x3366dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19488));
    // 0x3366e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3366e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3366e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3366e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3366e8: 0x24424c58  addiu       $v0, $v0, 0x4C58
    ctx->pc = 0x3366e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x3366ec: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3366ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x3366f0: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x3366f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x3366f4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x3366f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x3366f8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3366f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3366fc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x3366fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x336700: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x336700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x336704: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x336704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x336708: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x336708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x33670c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x33670cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x336710: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x336710u;
    SET_GPR_U32(ctx, 31, 0x336718u);
    ctx->pc = 0x336714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336710u;
            // 0x336714: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336718u; }
        if (ctx->pc != 0x336718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336718u; }
        if (ctx->pc != 0x336718u) { return; }
    }
    ctx->pc = 0x336718u;
label_336718:
    // 0x336718: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x336718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x33671c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33671cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336720: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x336720u;
    {
        const bool branch_taken_0x336720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x336724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336720u;
            // 0x336724: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336720) {
            ctx->pc = 0x33673Cu;
            goto label_33673c;
        }
    }
    ctx->pc = 0x336728u;
    // 0x336728: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x336728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x33672c: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x33672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x336730: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x336730u;
    SET_GPR_U32(ctx, 31, 0x336738u);
    ctx->pc = 0x336734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336730u;
            // 0x336734: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336738u; }
        if (ctx->pc != 0x336738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336738u; }
        if (ctx->pc != 0x336738u) { return; }
    }
    ctx->pc = 0x336738u;
label_336738:
    // 0x336738: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x336738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33673c:
    // 0x33673c: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x33673cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x336740: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x336740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336744: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x336744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x336748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33674c: 0x3e00008  jr          $ra
    ctx->pc = 0x33674Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33674Cu;
            // 0x336750: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x336754u;
    // 0x336754: 0x0  nop
    ctx->pc = 0x336754u;
    // NOP
    // 0x336758: 0x0  nop
    ctx->pc = 0x336758u;
    // NOP
    // 0x33675c: 0x0  nop
    ctx->pc = 0x33675cu;
    // NOP
label_336760:
    // 0x336760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x336760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x336764: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x336764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x336768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x336768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33676c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33676cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x336770: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x336770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336774: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x336774u;
    {
        const bool branch_taken_0x336774 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x336778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336774u;
            // 0x336778: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336774) {
            ctx->pc = 0x336814u;
            goto label_336814;
        }
    }
    ctx->pc = 0x33677Cu;
    // 0x33677c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33677cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x336780: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x336780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x336784: 0x24634cd0  addiu       $v1, $v1, 0x4CD0
    ctx->pc = 0x336784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19664));
    // 0x336788: 0x24424d08  addiu       $v0, $v0, 0x4D08
    ctx->pc = 0x336788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19720));
    // 0x33678c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x33678cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x336790: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x336790u;
    {
        const bool branch_taken_0x336790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x336794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336790u;
            // 0x336794: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336790) {
            ctx->pc = 0x3367FCu;
            goto label_3367fc;
        }
    }
    ctx->pc = 0x336798u;
    // 0x336798: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x336798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x33679c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33679cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3367a0: 0x24634c80  addiu       $v1, $v1, 0x4C80
    ctx->pc = 0x3367a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19584));
    // 0x3367a4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x3367a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x3367a8: 0x24424cb8  addiu       $v0, $v0, 0x4CB8
    ctx->pc = 0x3367a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19640));
    // 0x3367ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3367acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3367b0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3367b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x3367b4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x3367b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3367b8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x3367B8u;
    SET_GPR_U32(ctx, 31, 0x3367C0u);
    ctx->pc = 0x3367BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3367B8u;
            // 0x3367bc: 0x24a562b0  addiu       $a1, $a1, 0x62B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3367C0u; }
        if (ctx->pc != 0x3367C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3367C0u; }
        if (ctx->pc != 0x3367C0u) { return; }
    }
    ctx->pc = 0x3367C0u;
label_3367c0:
    // 0x3367c0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3367c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x3367c4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x3367C4u;
    SET_GPR_U32(ctx, 31, 0x3367CCu);
    ctx->pc = 0x3367C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3367C4u;
            // 0x3367c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3367CCu; }
        if (ctx->pc != 0x3367CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3367CCu; }
        if (ctx->pc != 0x3367CCu) { return; }
    }
    ctx->pc = 0x3367CCu;
label_3367cc:
    // 0x3367cc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x3367ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x3367d0: 0xc0cda24  jal         func_336890
    ctx->pc = 0x3367D0u;
    SET_GPR_U32(ctx, 31, 0x3367D8u);
    ctx->pc = 0x3367D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3367D0u;
            // 0x3367d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336890u;
    if (runtime->hasFunction(0x336890u)) {
        auto targetFn = runtime->lookupFunction(0x336890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3367D8u; }
        if (ctx->pc != 0x3367D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336890_0x336890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3367D8u; }
        if (ctx->pc != 0x3367D8u) { return; }
    }
    ctx->pc = 0x3367D8u;
label_3367d8:
    // 0x3367d8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x3367d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x3367dc: 0xc0cda24  jal         func_336890
    ctx->pc = 0x3367DCu;
    SET_GPR_U32(ctx, 31, 0x3367E4u);
    ctx->pc = 0x3367E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3367DCu;
            // 0x3367e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336890u;
    if (runtime->hasFunction(0x336890u)) {
        auto targetFn = runtime->lookupFunction(0x336890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3367E4u; }
        if (ctx->pc != 0x3367E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336890_0x336890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3367E4u; }
        if (ctx->pc != 0x3367E4u) { return; }
    }
    ctx->pc = 0x3367E4u;
label_3367e4:
    // 0x3367e4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x3367e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x3367e8: 0xc0cda0c  jal         func_336830
    ctx->pc = 0x3367E8u;
    SET_GPR_U32(ctx, 31, 0x3367F0u);
    ctx->pc = 0x3367ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3367E8u;
            // 0x3367ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336830u;
    if (runtime->hasFunction(0x336830u)) {
        auto targetFn = runtime->lookupFunction(0x336830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3367F0u; }
        if (ctx->pc != 0x3367F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336830_0x336830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3367F0u; }
        if (ctx->pc != 0x3367F0u) { return; }
    }
    ctx->pc = 0x3367F0u;
label_3367f0:
    // 0x3367f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3367f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3367f4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x3367F4u;
    SET_GPR_U32(ctx, 31, 0x3367FCu);
    ctx->pc = 0x3367F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3367F4u;
            // 0x3367f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3367FCu; }
        if (ctx->pc != 0x3367FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3367FCu; }
        if (ctx->pc != 0x3367FCu) { return; }
    }
    ctx->pc = 0x3367FCu;
label_3367fc:
    // 0x3367fc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3367fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x336800: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x336800u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x336804: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x336804u;
    {
        const bool branch_taken_0x336804 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x336804) {
            ctx->pc = 0x336808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x336804u;
            // 0x336808: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x336818u;
            goto label_336818;
        }
    }
    ctx->pc = 0x33680Cu;
    // 0x33680c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x33680Cu;
    SET_GPR_U32(ctx, 31, 0x336814u);
    ctx->pc = 0x336810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33680Cu;
            // 0x336810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336814u; }
        if (ctx->pc != 0x336814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336814u; }
        if (ctx->pc != 0x336814u) { return; }
    }
    ctx->pc = 0x336814u;
label_336814:
    // 0x336814: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x336814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_336818:
    // 0x336818: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x336818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33681c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33681cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336820: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x336820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336824: 0x3e00008  jr          $ra
    ctx->pc = 0x336824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336824u;
            // 0x336828: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33682Cu;
    // 0x33682c: 0x0  nop
    ctx->pc = 0x33682cu;
    // NOP
}
