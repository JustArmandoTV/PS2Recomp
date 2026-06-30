#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E14D0
// Address: 0x1e14d0 - 0x1e1570
void sub_001E14D0_0x1e14d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E14D0_0x1e14d0");
#endif

    switch (ctx->pc) {
        case 0x1e1500u: goto label_1e1500;
        case 0x1e154cu: goto label_1e154c;
        default: break;
    }

    ctx->pc = 0x1e14d0u;

    // 0x1e14d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e14d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e14d4: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x1e14d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1e14d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e14d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e14dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e14dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e14e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e14e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e14e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e14e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e14e8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e14e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e14ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e14ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e14f0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1e14f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1e14f4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e14f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e14f8: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1E14F8u;
    SET_GPR_U32(ctx, 31, 0x1E1500u);
    ctx->pc = 0x1E14FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E14F8u;
            // 0x1e14fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1500u; }
        if (ctx->pc != 0x1E1500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1500u; }
        if (ctx->pc != 0x1E1500u) { return; }
    }
    ctx->pc = 0x1E1500u;
label_1e1500:
    // 0x1e1500: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e1500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e1504: 0xafb00078  sw          $s0, 0x78($sp)
    ctx->pc = 0x1e1504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 16));
    // 0x1e1508: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x1e1508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x1e150c: 0xe7b4006c  swc1        $f20, 0x6C($sp)
    ctx->pc = 0x1e150cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1e1510: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e1510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1e1514: 0x8e230d98  lw          $v1, 0xD98($s1)
    ctx->pc = 0x1e1514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
    // 0x1e1518: 0x8c44e400  lw          $a0, -0x1C00($v0)
    ctx->pc = 0x1e1518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
    // 0x1e151c: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x1e151cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x1e1520: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1e1520u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e1524: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1524u;
    {
        const bool branch_taken_0x1e1524 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1524) {
            ctx->pc = 0x1E1528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1524u;
            // 0x1e1528: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1534u;
            goto label_1e1534;
        }
    }
    ctx->pc = 0x1E152Cu;
    // 0x1e152c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E152Cu;
    {
        const bool branch_taken_0x1e152c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E152Cu;
            // 0x1e1530: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e152c) {
            ctx->pc = 0x1E1540u;
            goto label_1e1540;
        }
    }
    ctx->pc = 0x1E1534u;
label_1e1534:
    // 0x1e1534: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e1534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e1538: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e1538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e153c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e153cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e1540:
    // 0x1e1540: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1e1540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e1544: 0xc0b79e8  jal         func_2DE7A0
    ctx->pc = 0x1E1544u;
    SET_GPR_U32(ctx, 31, 0x1E154Cu);
    ctx->pc = 0x1E1548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1544u;
            // 0x1e1548: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7A0u;
    if (runtime->hasFunction(0x2DE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E154Cu; }
        if (ctx->pc != 0x1E154Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DE7A0_0x2de7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E154Cu; }
        if (ctx->pc != 0x1E154Cu) { return; }
    }
    ctx->pc = 0x1E154Cu;
label_1e154c:
    // 0x1e154c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e154cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1550: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e1550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e1554: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e1554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1558: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e1558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e155c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E155Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E155Cu;
            // 0x1e1560: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1564u;
    // 0x1e1564: 0x0  nop
    ctx->pc = 0x1e1564u;
    // NOP
    // 0x1e1568: 0x0  nop
    ctx->pc = 0x1e1568u;
    // NOP
    // 0x1e156c: 0x0  nop
    ctx->pc = 0x1e156cu;
    // NOP
}
