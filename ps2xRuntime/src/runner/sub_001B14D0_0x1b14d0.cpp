#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B14D0
// Address: 0x1b14d0 - 0x1b1580
void sub_001B14D0_0x1b14d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B14D0_0x1b14d0");
#endif

    switch (ctx->pc) {
        case 0x1b14ecu: goto label_1b14ec;
        default: break;
    }

    ctx->pc = 0x1b14d0u;

    // 0x1b14d0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b14d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b14d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b14d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b14d8: 0x8c439bc0  lw          $v1, -0x6440($v0)
    ctx->pc = 0x1b14d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941632)));
    // 0x1b14dc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1B14DCu;
    {
        const bool branch_taken_0x1b14dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B14E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B14DCu;
            // 0x1b14e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14dc) {
            ctx->pc = 0x1B1508u;
            goto label_1b1508;
        }
    }
    ctx->pc = 0x1B14E4u;
    // 0x1b14e4: 0xc042704  jal         func_109C10
    ctx->pc = 0x1B14E4u;
    SET_GPR_U32(ctx, 31, 0x1B14ECu);
    ctx->pc = 0x109C10u;
    if (runtime->hasFunction(0x109C10u)) {
        auto targetFn = runtime->lookupFunction(0x109C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B14ECu; }
        if (ctx->pc != 0x1B14ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109C10_0x109c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B14ECu; }
        if (ctx->pc != 0x1B14ECu) { return; }
    }
    ctx->pc = 0x1B14ECu;
label_1b14ec:
    // 0x1b14ec: 0x3c04006e  lui         $a0, 0x6E
    ctx->pc = 0x1b14ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)110 << 16));
    // 0x1b14f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b14f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b14f4: 0x24841e30  addiu       $a0, $a0, 0x1E30
    ctx->pc = 0x1b14f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7728));
    // 0x1b14f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b14f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b14fc: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1b14fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b1500: 0x8064168  j           func_1905A0
    ctx->pc = 0x1B1500u;
    ctx->pc = 0x1B1504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1500u;
            // 0x1b1504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1905A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1905A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B1508u;
label_1b1508:
    // 0x1b1508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b150c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B150Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B150Cu;
            // 0x1b1510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1514u;
    // 0x1b1514: 0x0  nop
    ctx->pc = 0x1b1514u;
    // NOP
    // 0x1b1518: 0x8c892030  lw          $t1, 0x2030($a0)
    ctx->pc = 0x1b1518u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x1b151c: 0x25291198  addiu       $t1, $t1, 0x1198
    ctx->pc = 0x1b151cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4504));
    // 0x1b1520: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x1b1520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x1b1524: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1b1524u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1b1528: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x1b1528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1b152c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1b152cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1b1530: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1b1530u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1b1534: 0x8d240010  lw          $a0, 0x10($t1)
    ctx->pc = 0x1b1534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1b1538: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x1b1538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1b153c: 0x8d250014  lw          $a1, 0x14($t1)
    ctx->pc = 0x1b153cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x1b1540: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b1540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b1544: 0x8d220018  lw          $v0, 0x18($t1)
    ctx->pc = 0x1b1544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x1b1548: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x1b1548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x1b154c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b154cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b1550: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B1550u;
    {
        const bool branch_taken_0x1b1550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1550) {
            ctx->pc = 0x1B1554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1550u;
            // 0x1b1554: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1558u;
            goto label_1b1558;
        }
    }
    ctx->pc = 0x1B1558u;
label_1b1558:
    // 0x1b1558: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b1558u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b155c: 0x2010  mfhi        $a0
    ctx->pc = 0x1b155cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1b1560: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1b1560u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1b1564: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x1b1564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1b1568: 0x8d230014  lw          $v1, 0x14($t1)
    ctx->pc = 0x1b1568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x1b156c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1b156cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1b1570: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b1570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1574: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1574u;
            // 0x1b1578: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B157Cu;
    // 0x1b157c: 0x0  nop
    ctx->pc = 0x1b157cu;
    // NOP
}
