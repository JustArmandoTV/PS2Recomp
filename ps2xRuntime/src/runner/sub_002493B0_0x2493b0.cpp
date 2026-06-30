#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002493B0
// Address: 0x2493b0 - 0x249510
void sub_002493B0_0x2493b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002493B0_0x2493b0");
#endif

    switch (ctx->pc) {
        case 0x2493c8u: goto label_2493c8;
        default: break;
    }

    ctx->pc = 0x2493b0u;

    // 0x2493b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2493b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2493b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2493b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2493b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2493b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2493bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2493bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2493c0: 0xc092200  jal         func_248800
    ctx->pc = 0x2493C0u;
    SET_GPR_U32(ctx, 31, 0x2493C8u);
    ctx->pc = 0x2493C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2493C0u;
            // 0x2493c4: 0x90a50011  lbu         $a1, 0x11($a1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x248800u;
    if (runtime->hasFunction(0x248800u)) {
        auto targetFn = runtime->lookupFunction(0x248800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2493C8u; }
        if (ctx->pc != 0x2493C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00248800_0x248800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2493C8u; }
        if (ctx->pc != 0x2493C8u) { return; }
    }
    ctx->pc = 0x2493C8u;
label_2493c8:
    // 0x2493c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2493c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2493cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2493ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2493d0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2493d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2493d4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2493d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2493d8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2493d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2493dc: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2493dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2493e0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2493e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2493e4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x2493e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x2493e8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2493e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2493ec: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2493ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x2493f0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2493f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2493f4: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x2493f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x2493f8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2493f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2493fc: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2493fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x249400: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x249400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x249404: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x249404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x249408: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x249408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x24940c: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x24940cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x249410: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x249410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x249414: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x249414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x249418: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x249418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x24941c: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x24941cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x249420: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x249420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x249424: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x249424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x249428: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x249428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x24942c: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x24942cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x249430: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x249430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x249434: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x249434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x249438: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x249438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x24943c: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x24943cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x249440: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x249440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x249444: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x249444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x249448: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x249448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x24944c: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x24944cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x249450: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x249450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x249454: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x249454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x249458: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x249458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x24945c: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x24945cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x249460: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x249460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x249464: 0xac43004c  sw          $v1, 0x4C($v0)
    ctx->pc = 0x249464u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
    // 0x249468: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x249468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x24946c: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x24946cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x249470: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x249470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x249474: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x249474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
    // 0x249478: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x249478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x24947c: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x24947cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
    // 0x249480: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x249480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x249484: 0xac43005c  sw          $v1, 0x5C($v0)
    ctx->pc = 0x249484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
    // 0x249488: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x249488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x24948c: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x24948cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x249490: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x249490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x249494: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x249494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
    // 0x249498: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x249498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x24949c: 0xac430068  sw          $v1, 0x68($v0)
    ctx->pc = 0x24949cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 3));
    // 0x2494a0: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x2494a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2494a4: 0xac43006c  sw          $v1, 0x6C($v0)
    ctx->pc = 0x2494a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 3));
    // 0x2494a8: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x2494a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2494ac: 0xac430070  sw          $v1, 0x70($v0)
    ctx->pc = 0x2494acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
    // 0x2494b0: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x2494b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2494b4: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x2494b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
    // 0x2494b8: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x2494b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2494bc: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x2494bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x2494c0: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x2494c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2494c4: 0xac43007c  sw          $v1, 0x7C($v0)
    ctx->pc = 0x2494c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 3));
    // 0x2494c8: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2494c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2494cc: 0x94450008  lhu         $a1, 0x8($v0)
    ctx->pc = 0x2494ccu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2494d0: 0x9444000a  lhu         $a0, 0xA($v0)
    ctx->pc = 0x2494d0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2494d4: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x2494d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2494d8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2494d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2494dc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2494dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2494e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2494e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2494e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2494e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2494e8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2494e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2494ec: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x2494ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2494f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2494f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2494f4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2494f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2494f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2494f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2494fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2494fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249500: 0x3e00008  jr          $ra
    ctx->pc = 0x249500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249500u;
            // 0x249504: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x249508u;
    // 0x249508: 0x0  nop
    ctx->pc = 0x249508u;
    // NOP
    // 0x24950c: 0x0  nop
    ctx->pc = 0x24950cu;
    // NOP
}
