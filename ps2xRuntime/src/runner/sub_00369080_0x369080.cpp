#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00369080
// Address: 0x369080 - 0x369340
void sub_00369080_0x369080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369080_0x369080");
#endif

    switch (ctx->pc) {
        case 0x3690e8u: goto label_3690e8;
        case 0x36915cu: goto label_36915c;
        case 0x369228u: goto label_369228;
        case 0x36923cu: goto label_36923c;
        case 0x36925cu: goto label_36925c;
        case 0x36927cu: goto label_36927c;
        default: break;
    }

    ctx->pc = 0x369080u;

    // 0x369080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x369080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x369084: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x369084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x369088: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x369088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36908c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x36908cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x369090: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x369090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x369094: 0xa24821  addu        $t1, $a1, $v0
    ctx->pc = 0x369094u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x369098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x369098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36909c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x36909cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x3690a0: 0xc4621920  lwc1        $f2, 0x1920($v1)
    ctx->pc = 0x3690a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3690a4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3690a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3690a8: 0xc4411924  lwc1        $f1, 0x1924($v0)
    ctx->pc = 0x3690a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3690ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3690acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3690b0: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x3690b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3690b4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3690b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x3690b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3690b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3690bc: 0x8c454030  lw          $a1, 0x4030($v0)
    ctx->pc = 0x3690bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16432)));
    // 0x3690c0: 0xc4601928  lwc1        $f0, 0x1928($v1)
    ctx->pc = 0x3690c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3690c4: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x3690c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3690c8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3690c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3690cc: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3690ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3690d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3690d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3690d4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3690d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3690d8: 0x24424080  addiu       $v0, $v0, 0x4080
    ctx->pc = 0x3690d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16512));
    // 0x3690dc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3690dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3690e0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3690e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3690e4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x3690e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3690e8:
    // 0x3690e8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x3690e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3690ec: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3690ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3690f0: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x3690f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3690f4: 0x147102b  sltu        $v0, $t2, $a3
    ctx->pc = 0x3690f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3690f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3690f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3690fc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3690fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x369100: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x369100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x369104: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x369104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x369108: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x369108u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x36910c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x36910Cu;
    {
        const bool branch_taken_0x36910c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36910Cu;
            // 0x369110: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36910c) {
            ctx->pc = 0x3690E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3690e8;
        }
    }
    ctx->pc = 0x369114u;
    // 0x369114: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x369114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x369118: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x369118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x36911c: 0x8c474030  lw          $a3, 0x4030($v0)
    ctx->pc = 0x36911cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16432)));
    // 0x369120: 0x24844080  addiu       $a0, $a0, 0x4080
    ctx->pc = 0x369120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16512));
    // 0x369124: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x369124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369128: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x369128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x36912c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36912cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x369130: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x369130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x369134: 0x24424710  addiu       $v0, $v0, 0x4710
    ctx->pc = 0x369134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18192));
    // 0x369138: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x369138u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x36913c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36913cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x369140: 0x868021  addu        $s0, $a0, $a2
    ctx->pc = 0x369140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x369144: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x369144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x369148: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x369148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36914c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36914cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x369150: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x369150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x369154: 0xc074f30  jal         func_1D3CC0
    ctx->pc = 0x369154u;
    SET_GPR_U32(ctx, 31, 0x36915Cu);
    ctx->pc = 0x369158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x369154u;
            // 0x369158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36915Cu; }
        if (ctx->pc != 0x36915Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36915Cu; }
        if (ctx->pc != 0x36915Cu) { return; }
    }
    ctx->pc = 0x36915Cu;
label_36915c:
    // 0x36915c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x36915cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x369160: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369164: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x369164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x369168: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x369168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x36916c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36916cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369170: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369170u;
    {
        const bool branch_taken_0x369170 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369170) {
            ctx->pc = 0x369174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369170u;
            // 0x369174: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369184u;
            goto label_369184;
        }
    }
    ctx->pc = 0x369178u;
    // 0x369178: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36917c: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x36917cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x369180: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x369180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_369184:
    // 0x369184: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369188: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x369188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x36918c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x36918cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x369190: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369190u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369194: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369194u;
    {
        const bool branch_taken_0x369194 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369194) {
            ctx->pc = 0x369198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369194u;
            // 0x369198: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3691A8u;
            goto label_3691a8;
        }
    }
    ctx->pc = 0x36919Cu;
    // 0x36919c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36919cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3691a0: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3691a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x3691a4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3691a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3691a8:
    // 0x3691a8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3691a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3691ac: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3691acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x3691b0: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3691b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3691b4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3691b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3691b8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3691B8u;
    {
        const bool branch_taken_0x3691b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3691b8) {
            ctx->pc = 0x3691BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3691B8u;
            // 0x3691bc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3691CCu;
            goto label_3691cc;
        }
    }
    ctx->pc = 0x3691C0u;
    // 0x3691c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3691c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3691c4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3691c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x3691c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3691c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3691cc:
    // 0x3691cc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3691ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3691d0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3691d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x3691d4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3691d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3691d8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3691d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3691dc: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3691DCu;
    {
        const bool branch_taken_0x3691dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3691dc) {
            ctx->pc = 0x3691E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3691DCu;
            // 0x3691e0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3691F0u;
            goto label_3691f0;
        }
    }
    ctx->pc = 0x3691E4u;
    // 0x3691e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3691e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3691e8: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3691e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x3691ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3691ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3691f0:
    // 0x3691f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3691f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3691f4: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3691f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x3691f8: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3691f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3691fc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3691fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369200: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369200u;
    {
        const bool branch_taken_0x369200 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369200) {
            ctx->pc = 0x369204u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369200u;
            // 0x369204: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369214u;
            goto label_369214;
        }
    }
    ctx->pc = 0x369208u;
    // 0x369208: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36920c: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x36920cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x369210: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x369210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_369214:
    // 0x369214: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x369214u;
    {
        const bool branch_taken_0x369214 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x369214) {
            ctx->pc = 0x369218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369214u;
            // 0x369218: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36922Cu;
            goto label_36922c;
        }
    }
    ctx->pc = 0x36921Cu;
    // 0x36921c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x36921cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x369220: 0xc0751b8  jal         func_1D46E0
    ctx->pc = 0x369220u;
    SET_GPR_U32(ctx, 31, 0x369228u);
    ctx->pc = 0x369224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x369220u;
            // 0x369224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369228u; }
        if (ctx->pc != 0x369228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x369228u; }
        if (ctx->pc != 0x369228u) { return; }
    }
    ctx->pc = 0x369228u;
label_369228:
    // 0x369228: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x369228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_36922c:
    // 0x36922c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36922Cu;
    {
        const bool branch_taken_0x36922c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x36922c) {
            ctx->pc = 0x369230u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36922Cu;
            // 0x369230: 0x8e08000c  lw          $t0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369240u;
            goto label_369240;
        }
    }
    ctx->pc = 0x369234u;
    // 0x369234: 0xc074ea0  jal         func_1D3A80
    ctx->pc = 0x369234u;
    SET_GPR_U32(ctx, 31, 0x36923Cu);
    ctx->pc = 0x369238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x369234u;
            // 0x369238: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36923Cu; }
        if (ctx->pc != 0x36923Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36923Cu; }
        if (ctx->pc != 0x36923Cu) { return; }
    }
    ctx->pc = 0x36923Cu;
label_36923c:
    // 0x36923c: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x36923cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_369240:
    // 0x369240: 0x51000007  beql        $t0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x369240u;
    {
        const bool branch_taken_0x369240 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x369240) {
            ctx->pc = 0x369244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369240u;
            // 0x369244: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369260u;
            goto label_369260;
        }
    }
    ctx->pc = 0x369248u;
    // 0x369248: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x369248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36924c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x36924cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x369250: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x369250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x369254: 0xc075188  jal         func_1D4620
    ctx->pc = 0x369254u;
    SET_GPR_U32(ctx, 31, 0x36925Cu);
    ctx->pc = 0x369258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x369254u;
            // 0x369258: 0x26270018  addiu       $a3, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4620u;
    if (runtime->hasFunction(0x1D4620u)) {
        auto targetFn = runtime->lookupFunction(0x1D4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36925Cu; }
        if (ctx->pc != 0x36925Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4620_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36925Cu; }
        if (ctx->pc != 0x36925Cu) { return; }
    }
    ctx->pc = 0x36925Cu;
label_36925c:
    // 0x36925c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x36925cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_369260:
    // 0x369260: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x369260u;
    {
        const bool branch_taken_0x369260 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x369260) {
            ctx->pc = 0x36927Cu;
            goto label_36927c;
        }
    }
    ctx->pc = 0x369268u;
    // 0x369268: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x369268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x36926c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36926Cu;
    {
        const bool branch_taken_0x36926c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36926c) {
            ctx->pc = 0x36927Cu;
            goto label_36927c;
        }
    }
    ctx->pc = 0x369274u;
    // 0x369274: 0xc074da8  jal         func_1D36A0
    ctx->pc = 0x369274u;
    SET_GPR_U32(ctx, 31, 0x36927Cu);
    ctx->pc = 0x369278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x369274u;
            // 0x369278: 0x26240024  addiu       $a0, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D36A0u;
    if (runtime->hasFunction(0x1D36A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D36A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36927Cu; }
        if (ctx->pc != 0x36927Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D36A0_0x1d36a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36927Cu; }
        if (ctx->pc != 0x36927Cu) { return; }
    }
    ctx->pc = 0x36927Cu;
label_36927c:
    // 0x36927c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36927cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x369280: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x369280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x369284: 0x8c664030  lw          $a2, 0x4030($v1)
    ctx->pc = 0x369284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16432)));
    // 0x369288: 0x24844710  addiu       $a0, $a0, 0x4710
    ctx->pc = 0x369288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18192));
    // 0x36928c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x36928cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x369290: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369294: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x369294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x369298: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x369298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x36929c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x36929cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3692a0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3692a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3692a4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3692a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3692a8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x3692a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3692ac: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3692acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3692b0: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x3692b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3692b4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3692b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3692b8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3692B8u;
    {
        const bool branch_taken_0x3692b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3692b8) {
            ctx->pc = 0x3692BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3692B8u;
            // 0x3692bc: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3692CCu;
            goto label_3692cc;
        }
    }
    ctx->pc = 0x3692C0u;
    // 0x3692c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3692c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3692c4: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x3692c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x3692c8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3692c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3692cc:
    // 0x3692cc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3692ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3692d0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3692d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x3692d4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3692d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3692d8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3692d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3692dc: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3692DCu;
    {
        const bool branch_taken_0x3692dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3692dc) {
            ctx->pc = 0x3692E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3692DCu;
            // 0x3692e0: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3692F0u;
            goto label_3692f0;
        }
    }
    ctx->pc = 0x3692E4u;
    // 0x3692e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3692e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3692e8: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3692e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x3692ec: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3692ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3692f0:
    // 0x3692f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3692f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3692f4: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3692f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x3692f8: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3692f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3692fc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3692fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369300: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x369300u;
    {
        const bool branch_taken_0x369300 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369300) {
            ctx->pc = 0x369310u;
            goto label_369310;
        }
    }
    ctx->pc = 0x369308u;
    // 0x369308: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36930c: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x36930cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_369310:
    // 0x369310: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x369310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x369314: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x369314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x369318: 0x8c844030  lw          $a0, 0x4030($a0)
    ctx->pc = 0x369318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16432)));
    // 0x36931c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x36931cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x369320: 0xac644030  sw          $a0, 0x4030($v1)
    ctx->pc = 0x369320u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16432), GPR_U32(ctx, 4));
    // 0x369324: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x369324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369328: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x369328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36932c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36932cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369330: 0x3e00008  jr          $ra
    ctx->pc = 0x369330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x369330u;
            // 0x369334: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x369338u;
    // 0x369338: 0x0  nop
    ctx->pc = 0x369338u;
    // NOP
    // 0x36933c: 0x0  nop
    ctx->pc = 0x36933cu;
    // NOP
}
