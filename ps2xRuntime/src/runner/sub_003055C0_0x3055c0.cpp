#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003055C0
// Address: 0x3055c0 - 0x305640
void sub_003055C0_0x3055c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003055C0_0x3055c0");
#endif

    switch (ctx->pc) {
        case 0x3055f8u: goto label_3055f8;
        default: break;
    }

    ctx->pc = 0x3055c0u;

    // 0x3055c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3055c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3055c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3055c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3055c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3055c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3055cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3055ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3055d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3055d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3055d4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x3055d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x3055d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3055d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3055dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3055dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3055e0: 0x26300ab0  addiu       $s0, $s1, 0xAB0
    ctx->pc = 0x3055e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2736));
    // 0x3055e4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3055e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3055e8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3055e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3055ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3055ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3055f0: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3055F0u;
    SET_GPR_U32(ctx, 31, 0x3055F8u);
    ctx->pc = 0x3055F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3055F0u;
            // 0x3055f4: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3055F8u; }
        if (ctx->pc != 0x3055F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3055F8u; }
        if (ctx->pc != 0x3055F8u) { return; }
    }
    ctx->pc = 0x3055F8u;
label_3055f8:
    // 0x3055f8: 0x3c033f06  lui         $v1, 0x3F06
    ctx->pc = 0x3055f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16134 << 16));
    // 0x3055fc: 0x34640a92  ori         $a0, $v1, 0xA92
    ctx->pc = 0x3055fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x305600: 0xc6210dd0  lwc1        $f1, 0xDD0($s1)
    ctx->pc = 0x305600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x305604: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x305604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x305608: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x305608u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30560c: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x30560cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x305610: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x305610u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x305614: 0x3c033db2  lui         $v1, 0x3DB2
    ctx->pc = 0x305614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15794 << 16));
    // 0x305618: 0x3463b8c2  ori         $v1, $v1, 0xB8C2
    ctx->pc = 0x305618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47298);
    // 0x30561c: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x30561cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x305620: 0xae0400b4  sw          $a0, 0xB4($s0)
    ctx->pc = 0x305620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 4));
    // 0x305624: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x305624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
    // 0x305628: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x305628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30562c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30562cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x305630: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x305630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305634: 0x3e00008  jr          $ra
    ctx->pc = 0x305634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305634u;
            // 0x305638: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30563Cu;
    // 0x30563c: 0x0  nop
    ctx->pc = 0x30563cu;
    // NOP
}
