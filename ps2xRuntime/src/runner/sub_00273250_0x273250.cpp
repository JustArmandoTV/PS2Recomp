#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00273250
// Address: 0x273250 - 0x2733d0
void sub_00273250_0x273250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273250_0x273250");
#endif

    switch (ctx->pc) {
        case 0x273334u: goto label_273334;
        case 0x2733b4u: goto label_2733b4;
        default: break;
    }

    ctx->pc = 0x273250u;

    // 0x273250: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x273250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x273254: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x273254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x273258: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x273258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x27325c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x27325cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x273260: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x273260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x273264: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x273264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x273268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27326c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x27326cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x273270: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x273270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x273274: 0x2442f420  addiu       $v0, $v0, -0xBE0
    ctx->pc = 0x273274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964256));
    // 0x273278: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x273278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x27327c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x27327cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x273280: 0x2442f400  addiu       $v0, $v0, -0xC00
    ctx->pc = 0x273280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964224));
    // 0x273284: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x273284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x273288: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x273288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x27328c: 0x2442f3e0  addiu       $v0, $v0, -0xC20
    ctx->pc = 0x27328cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964192));
    // 0x273290: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x273290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x273294: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x273294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x273298: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x273298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27329c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x27329cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2732a0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2732a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2732a4: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2732a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2732a8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2732a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2732ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2732ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2732B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2732ACu;
            // 0x2732b0: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2732B4u;
    // 0x2732b4: 0x0  nop
    ctx->pc = 0x2732b4u;
    // NOP
    // 0x2732b8: 0x0  nop
    ctx->pc = 0x2732b8u;
    // NOP
    // 0x2732bc: 0x0  nop
    ctx->pc = 0x2732bcu;
    // NOP
    // 0x2732c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2732c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2732c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2732c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2732c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2732c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2732cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2732ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2732d0: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2732D0u;
    {
        const bool branch_taken_0x2732d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2732D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2732D0u;
            // 0x2732d4: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2732d0) {
            ctx->pc = 0x273338u;
            goto label_273338;
        }
    }
    ctx->pc = 0x2732D8u;
    // 0x2732d8: 0x2442f400  addiu       $v0, $v0, -0xC00
    ctx->pc = 0x2732d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964224));
    // 0x2732dc: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2732DCu;
    {
        const bool branch_taken_0x2732dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2732E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2732DCu;
            // 0x2732e0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2732dc) {
            ctx->pc = 0x273310u;
            goto label_273310;
        }
    }
    ctx->pc = 0x2732E4u;
    // 0x2732e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2732e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2732e8: 0x2442f420  addiu       $v0, $v0, -0xBE0
    ctx->pc = 0x2732e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964256));
    // 0x2732ec: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2732ECu;
    {
        const bool branch_taken_0x2732ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2732F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2732ECu;
            // 0x2732f0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2732ec) {
            ctx->pc = 0x273310u;
            goto label_273310;
        }
    }
    ctx->pc = 0x2732F4u;
    // 0x2732f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2732f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2732f8: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2732f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x2732fc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2732FCu;
    {
        const bool branch_taken_0x2732fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x273300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2732FCu;
            // 0x273300: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2732fc) {
            ctx->pc = 0x273310u;
            goto label_273310;
        }
    }
    ctx->pc = 0x273304u;
    // 0x273304: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x273304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x273308: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x273308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x27330c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x27330cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_273310:
    // 0x273310: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x273310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x273314: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x273314u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x273318: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x273318u;
    {
        const bool branch_taken_0x273318 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27331Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273318u;
            // 0x27331c: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273318) {
            ctx->pc = 0x273338u;
            goto label_273338;
        }
    }
    ctx->pc = 0x273320u;
    // 0x273320: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x273320u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x273324: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x273324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x273328: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x273328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27332c: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x27332Cu;
    SET_GPR_U32(ctx, 31, 0x273334u);
    ctx->pc = 0x273330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27332Cu;
            // 0x273330: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273334u; }
        if (ctx->pc != 0x273334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273334u; }
        if (ctx->pc != 0x273334u) { return; }
    }
    ctx->pc = 0x273334u;
label_273334:
    // 0x273334: 0x0  nop
    ctx->pc = 0x273334u;
    // NOP
label_273338:
    // 0x273338: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x273338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27333c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27333cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x273340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273344: 0x3e00008  jr          $ra
    ctx->pc = 0x273344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273344u;
            // 0x273348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27334Cu;
    // 0x27334c: 0x0  nop
    ctx->pc = 0x27334cu;
    // NOP
    // 0x273350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x273350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x273354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x273354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x273358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x273358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27335c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27335cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273360: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x273360u;
    {
        const bool branch_taken_0x273360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x273364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273360u;
            // 0x273364: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273360) {
            ctx->pc = 0x2733B8u;
            goto label_2733b8;
        }
    }
    ctx->pc = 0x273368u;
    // 0x273368: 0x2442f420  addiu       $v0, $v0, -0xBE0
    ctx->pc = 0x273368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964256));
    // 0x27336c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27336Cu;
    {
        const bool branch_taken_0x27336c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x273370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27336Cu;
            // 0x273370: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27336c) {
            ctx->pc = 0x273390u;
            goto label_273390;
        }
    }
    ctx->pc = 0x273374u;
    // 0x273374: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x273374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x273378: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x273378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x27337c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27337Cu;
    {
        const bool branch_taken_0x27337c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x273380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27337Cu;
            // 0x273380: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27337c) {
            ctx->pc = 0x273390u;
            goto label_273390;
        }
    }
    ctx->pc = 0x273384u;
    // 0x273384: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x273384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x273388: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x273388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x27338c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x27338cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_273390:
    // 0x273390: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x273390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x273394: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x273394u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x273398: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x273398u;
    {
        const bool branch_taken_0x273398 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27339Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273398u;
            // 0x27339c: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273398) {
            ctx->pc = 0x2733B8u;
            goto label_2733b8;
        }
    }
    ctx->pc = 0x2733A0u;
    // 0x2733a0: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x2733a0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2733a4: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2733a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x2733a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2733a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2733ac: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x2733ACu;
    SET_GPR_U32(ctx, 31, 0x2733B4u);
    ctx->pc = 0x2733B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2733ACu;
            // 0x2733b0: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2733B4u; }
        if (ctx->pc != 0x2733B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2733B4u; }
        if (ctx->pc != 0x2733B4u) { return; }
    }
    ctx->pc = 0x2733B4u;
label_2733b4:
    // 0x2733b4: 0x0  nop
    ctx->pc = 0x2733b4u;
    // NOP
label_2733b8:
    // 0x2733b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2733b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2733bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2733bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2733c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2733c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2733c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2733C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2733C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2733C4u;
            // 0x2733c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2733CCu;
    // 0x2733cc: 0x0  nop
    ctx->pc = 0x2733ccu;
    // NOP
}
