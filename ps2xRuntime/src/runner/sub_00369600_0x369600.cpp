#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00369600
// Address: 0x369600 - 0x3698c0
void sub_00369600_0x369600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369600_0x369600");
#endif

    switch (ctx->pc) {
        case 0x369668u: goto label_369668;
        case 0x3696dcu: goto label_3696dc;
        case 0x3697a8u: goto label_3697a8;
        case 0x3697bcu: goto label_3697bc;
        case 0x3697dcu: goto label_3697dc;
        case 0x3697fcu: goto label_3697fc;
        default: break;
    }

    ctx->pc = 0x369600u;

    // 0x369600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x369600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x369604: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x369604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x369608: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x369608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36960c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x36960cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x369610: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x369610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x369614: 0xa24821  addu        $t1, $a1, $v0
    ctx->pc = 0x369614u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x369618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x369618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36961c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x36961cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x369620: 0xc4621900  lwc1        $f2, 0x1900($v1)
    ctx->pc = 0x369620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x369624: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x369624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x369628: 0xc4411904  lwc1        $f1, 0x1904($v0)
    ctx->pc = 0x369628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36962c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36962cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369630: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x369630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x369634: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x369634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x369638: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x369638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x36963c: 0x8c454030  lw          $a1, 0x4030($v0)
    ctx->pc = 0x36963cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16432)));
    // 0x369640: 0xc4601908  lwc1        $f0, 0x1908($v1)
    ctx->pc = 0x369640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369644: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x369644u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x369648: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x369648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x36964c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x36964cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x369650: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x369650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x369654: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x369654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x369658: 0x24424080  addiu       $v0, $v0, 0x4080
    ctx->pc = 0x369658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16512));
    // 0x36965c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x36965cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x369660: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x369660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x369664: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x369664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_369668:
    // 0x369668: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x369668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36966c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x36966cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x369670: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x369670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x369674: 0x147102b  sltu        $v0, $t2, $a3
    ctx->pc = 0x369674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x369678: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x369678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36967c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x36967cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x369680: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x369680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x369684: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x369684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x369688: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x369688u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x36968c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x36968Cu;
    {
        const bool branch_taken_0x36968c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36968Cu;
            // 0x369690: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36968c) {
            ctx->pc = 0x369668u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_369668;
        }
    }
    ctx->pc = 0x369694u;
    // 0x369694: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x369694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x369698: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x369698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x36969c: 0x8c474030  lw          $a3, 0x4030($v0)
    ctx->pc = 0x36969cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16432)));
    // 0x3696a0: 0x24844080  addiu       $a0, $a0, 0x4080
    ctx->pc = 0x3696a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16512));
    // 0x3696a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3696a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3696a8: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x3696a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3696ac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3696acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3696b0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3696b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3696b4: 0x24424710  addiu       $v0, $v0, 0x4710
    ctx->pc = 0x3696b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18192));
    // 0x3696b8: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x3696b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3696bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3696bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3696c0: 0x868021  addu        $s0, $a0, $a2
    ctx->pc = 0x3696c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3696c4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3696c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3696c8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3696c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3696cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3696ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3696d0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x3696d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3696d4: 0xc074f30  jal         func_1D3CC0
    ctx->pc = 0x3696D4u;
    SET_GPR_U32(ctx, 31, 0x3696DCu);
    ctx->pc = 0x3696D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3696D4u;
            // 0x3696d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3696DCu; }
        if (ctx->pc != 0x3696DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3696DCu; }
        if (ctx->pc != 0x3696DCu) { return; }
    }
    ctx->pc = 0x3696DCu;
label_3696dc:
    // 0x3696dc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3696dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3696e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3696e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3696e4: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x3696e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x3696e8: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x3696e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3696ec: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3696ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3696f0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3696F0u;
    {
        const bool branch_taken_0x3696f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3696f0) {
            ctx->pc = 0x3696F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3696F0u;
            // 0x3696f4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369704u;
            goto label_369704;
        }
    }
    ctx->pc = 0x3696F8u;
    // 0x3696f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3696f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3696fc: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x3696fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x369700: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x369700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_369704:
    // 0x369704: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369708: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x369708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x36970c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x36970cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x369710: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369710u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369714: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369714u;
    {
        const bool branch_taken_0x369714 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369714) {
            ctx->pc = 0x369718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369714u;
            // 0x369718: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369728u;
            goto label_369728;
        }
    }
    ctx->pc = 0x36971Cu;
    // 0x36971c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36971cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369720: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x369720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x369724: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x369724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_369728:
    // 0x369728: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36972c: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x36972cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x369730: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x369730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x369734: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369734u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369738: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369738u;
    {
        const bool branch_taken_0x369738 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369738) {
            ctx->pc = 0x36973Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369738u;
            // 0x36973c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36974Cu;
            goto label_36974c;
        }
    }
    ctx->pc = 0x369740u;
    // 0x369740: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369744: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x369744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x369748: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x369748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36974c:
    // 0x36974c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36974cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369750: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x369750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x369754: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x369754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x369758: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369758u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36975c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36975Cu;
    {
        const bool branch_taken_0x36975c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36975c) {
            ctx->pc = 0x369760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36975Cu;
            // 0x369760: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369770u;
            goto label_369770;
        }
    }
    ctx->pc = 0x369764u;
    // 0x369764: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369768: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x369768u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x36976c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x36976cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_369770:
    // 0x369770: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369774: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x369774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x369778: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x369778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x36977c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36977cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369780: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369780u;
    {
        const bool branch_taken_0x369780 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369780) {
            ctx->pc = 0x369784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369780u;
            // 0x369784: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369794u;
            goto label_369794;
        }
    }
    ctx->pc = 0x369788u;
    // 0x369788: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36978c: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x36978cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x369790: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x369790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_369794:
    // 0x369794: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x369794u;
    {
        const bool branch_taken_0x369794 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x369794) {
            ctx->pc = 0x369798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369794u;
            // 0x369798: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3697ACu;
            goto label_3697ac;
        }
    }
    ctx->pc = 0x36979Cu;
    // 0x36979c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x36979cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3697a0: 0xc0751b8  jal         func_1D46E0
    ctx->pc = 0x3697A0u;
    SET_GPR_U32(ctx, 31, 0x3697A8u);
    ctx->pc = 0x3697A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3697A0u;
            // 0x3697a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3697A8u; }
        if (ctx->pc != 0x3697A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3697A8u; }
        if (ctx->pc != 0x3697A8u) { return; }
    }
    ctx->pc = 0x3697A8u;
label_3697a8:
    // 0x3697a8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3697a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3697ac:
    // 0x3697ac: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3697ACu;
    {
        const bool branch_taken_0x3697ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3697ac) {
            ctx->pc = 0x3697B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3697ACu;
            // 0x3697b0: 0x8e08000c  lw          $t0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3697C0u;
            goto label_3697c0;
        }
    }
    ctx->pc = 0x3697B4u;
    // 0x3697b4: 0xc074ea0  jal         func_1D3A80
    ctx->pc = 0x3697B4u;
    SET_GPR_U32(ctx, 31, 0x3697BCu);
    ctx->pc = 0x3697B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3697B4u;
            // 0x3697b8: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3697BCu; }
        if (ctx->pc != 0x3697BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3697BCu; }
        if (ctx->pc != 0x3697BCu) { return; }
    }
    ctx->pc = 0x3697BCu;
label_3697bc:
    // 0x3697bc: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x3697bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3697c0:
    // 0x3697c0: 0x51000007  beql        $t0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3697C0u;
    {
        const bool branch_taken_0x3697c0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3697c0) {
            ctx->pc = 0x3697C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3697C0u;
            // 0x3697c4: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3697E0u;
            goto label_3697e0;
        }
    }
    ctx->pc = 0x3697C8u;
    // 0x3697c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3697c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3697cc: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x3697ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3697d0: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x3697d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x3697d4: 0xc075188  jal         func_1D4620
    ctx->pc = 0x3697D4u;
    SET_GPR_U32(ctx, 31, 0x3697DCu);
    ctx->pc = 0x3697D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3697D4u;
            // 0x3697d8: 0x26270018  addiu       $a3, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4620u;
    if (runtime->hasFunction(0x1D4620u)) {
        auto targetFn = runtime->lookupFunction(0x1D4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3697DCu; }
        if (ctx->pc != 0x3697DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4620_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3697DCu; }
        if (ctx->pc != 0x3697DCu) { return; }
    }
    ctx->pc = 0x3697DCu;
label_3697dc:
    // 0x3697dc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x3697dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3697e0:
    // 0x3697e0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3697E0u;
    {
        const bool branch_taken_0x3697e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3697e0) {
            ctx->pc = 0x3697FCu;
            goto label_3697fc;
        }
    }
    ctx->pc = 0x3697E8u;
    // 0x3697e8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3697e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3697ec: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3697ECu;
    {
        const bool branch_taken_0x3697ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3697ec) {
            ctx->pc = 0x3697FCu;
            goto label_3697fc;
        }
    }
    ctx->pc = 0x3697F4u;
    // 0x3697f4: 0xc074da8  jal         func_1D36A0
    ctx->pc = 0x3697F4u;
    SET_GPR_U32(ctx, 31, 0x3697FCu);
    ctx->pc = 0x3697F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3697F4u;
            // 0x3697f8: 0x26240024  addiu       $a0, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D36A0u;
    if (runtime->hasFunction(0x1D36A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D36A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3697FCu; }
        if (ctx->pc != 0x3697FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D36A0_0x1d36a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3697FCu; }
        if (ctx->pc != 0x3697FCu) { return; }
    }
    ctx->pc = 0x3697FCu;
label_3697fc:
    // 0x3697fc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3697fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x369800: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x369800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x369804: 0x8c664030  lw          $a2, 0x4030($v1)
    ctx->pc = 0x369804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16432)));
    // 0x369808: 0x24844710  addiu       $a0, $a0, 0x4710
    ctx->pc = 0x369808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18192));
    // 0x36980c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x36980cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x369810: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369814: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x369814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x369818: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x369818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x36981c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x36981cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x369820: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x369820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x369824: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x369824u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x369828: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x369828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x36982c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x36982cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x369830: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x369830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x369834: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369834u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369838: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x369838u;
    {
        const bool branch_taken_0x369838 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369838) {
            ctx->pc = 0x36983Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x369838u;
            // 0x36983c: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36984Cu;
            goto label_36984c;
        }
    }
    ctx->pc = 0x369840u;
    // 0x369840: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369844: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x369844u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x369848: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x369848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_36984c:
    // 0x36984c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36984cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369850: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x369850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x369854: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x369854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x369858: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x369858u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36985c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36985Cu;
    {
        const bool branch_taken_0x36985c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36985c) {
            ctx->pc = 0x369860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36985Cu;
            // 0x369860: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x369870u;
            goto label_369870;
        }
    }
    ctx->pc = 0x369864u;
    // 0x369864: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369868: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x369868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x36986c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x36986cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_369870:
    // 0x369870: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x369874: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x369874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x369878: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x369878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x36987c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36987cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x369880: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x369880u;
    {
        const bool branch_taken_0x369880 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x369880) {
            ctx->pc = 0x369890u;
            goto label_369890;
        }
    }
    ctx->pc = 0x369888u;
    // 0x369888: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x369888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36988c: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x36988cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_369890:
    // 0x369890: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x369890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x369894: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x369894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x369898: 0x8c844030  lw          $a0, 0x4030($a0)
    ctx->pc = 0x369898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16432)));
    // 0x36989c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x36989cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3698a0: 0xac644030  sw          $a0, 0x4030($v1)
    ctx->pc = 0x3698a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16432), GPR_U32(ctx, 4));
    // 0x3698a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3698a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3698a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3698a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3698ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3698acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3698b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3698B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3698B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3698B0u;
            // 0x3698b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3698B8u;
    // 0x3698b8: 0x0  nop
    ctx->pc = 0x3698b8u;
    // NOP
    // 0x3698bc: 0x0  nop
    ctx->pc = 0x3698bcu;
    // NOP
}
