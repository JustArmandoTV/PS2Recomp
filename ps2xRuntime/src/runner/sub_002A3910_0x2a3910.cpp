#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A3910
// Address: 0x2a3910 - 0x2a3c90
void sub_002A3910_0x2a3910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3910_0x2a3910");
#endif

    switch (ctx->pc) {
        case 0x2a39c0u: goto label_2a39c0;
        case 0x2a3a44u: goto label_2a3a44;
        case 0x2a3ac4u: goto label_2a3ac4;
        case 0x2a3b00u: goto label_2a3b00;
        case 0x2a3b38u: goto label_2a3b38;
        case 0x2a3b94u: goto label_2a3b94;
        case 0x2a3becu: goto label_2a3bec;
        case 0x2a3c40u: goto label_2a3c40;
        case 0x2a3c58u: goto label_2a3c58;
        case 0x2a3c80u: goto label_2a3c80;
        default: break;
    }

    ctx->pc = 0x2a3910u;

label_2a3910:
    // 0x2a3910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a3910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a3914: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a3914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2a3918: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a3918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a391c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a391cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a3920: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a3920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a3924: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x2a3924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
    // 0x2a3928: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2a3928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2a392c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2a392cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x2a3930: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a3930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2a3934: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a3934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3938: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a3938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a393c: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x2a393cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a3940: 0x2442fae0  addiu       $v0, $v0, -0x520
    ctx->pc = 0x2a3940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965984));
    // 0x2a3944: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a3944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2a3948: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a3948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2a394c: 0x2463fad0  addiu       $v1, $v1, -0x530
    ctx->pc = 0x2a394cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965968));
    // 0x2a3950: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2a3950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2a3954: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2a3954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2a3958: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2a3958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2a395c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a395cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3960: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2a3960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2a3964: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2a3964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x2a3968: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2a3968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2a396c: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x2a396cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x2a3970: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2a3970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x2a3974: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x2a3974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2a3978: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A3978u;
    {
        const bool branch_taken_0x2a3978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A397Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3978u;
            // 0x2a397c: 0x2485002c  addiu       $a1, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3978) {
            ctx->pc = 0x2A39A0u;
            goto label_2a39a0;
        }
    }
    ctx->pc = 0x2A3980u;
    // 0x2a3980: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2a3980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a3984: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2a3984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2a3988: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2a3988u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2a398c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a398cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a3990: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2a3990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a3994: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3994u;
    {
        const bool branch_taken_0x2a3994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3994u;
            // 0x2a3998: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3994) {
            ctx->pc = 0x2A39A8u;
            goto label_2a39a8;
        }
    }
    ctx->pc = 0x2A399Cu;
    // 0x2a399c: 0x0  nop
    ctx->pc = 0x2a399cu;
    // NOP
label_2a39a0:
    // 0x2a39a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a39a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a39a4: 0x0  nop
    ctx->pc = 0x2a39a4u;
    // NOP
label_2a39a8:
    // 0x2a39a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A39A8u;
    {
        const bool branch_taken_0x2a39a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A39ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A39A8u;
            // 0x2a39ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a39a8) {
            ctx->pc = 0x2A39B8u;
            goto label_2a39b8;
        }
    }
    ctx->pc = 0x2A39B0u;
    // 0x2a39b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A39B0u;
    {
        const bool branch_taken_0x2a39b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A39B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A39B0u;
            // 0x2a39b4: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a39b0) {
            ctx->pc = 0x2A39C4u;
            goto label_2a39c4;
        }
    }
    ctx->pc = 0x2A39B8u;
label_2a39b8:
    // 0x2a39b8: 0xc0a79c0  jal         func_29E700
    ctx->pc = 0x2A39B8u;
    SET_GPR_U32(ctx, 31, 0x2A39C0u);
    ctx->pc = 0x29E700u;
    if (runtime->hasFunction(0x29E700u)) {
        auto targetFn = runtime->lookupFunction(0x29E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A39C0u; }
        if (ctx->pc != 0x2A39C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E700_0x29e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A39C0u; }
        if (ctx->pc != 0x2A39C0u) { return; }
    }
    ctx->pc = 0x2A39C0u;
label_2a39c0:
    // 0x2a39c0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2a39c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_2a39c4:
    // 0x2a39c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a39c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a39c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a39c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a39cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a39ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a39d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A39D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A39D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A39D0u;
            // 0x2a39d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A39D8u;
    // 0x2a39d8: 0x0  nop
    ctx->pc = 0x2a39d8u;
    // NOP
    // 0x2a39dc: 0x0  nop
    ctx->pc = 0x2a39dcu;
    // NOP
    // 0x2a39e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a39e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a39e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a39e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a39e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a39e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a39ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a39ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a39f0: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A39F0u;
    {
        const bool branch_taken_0x2a39f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A39F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A39F0u;
            // 0x2a39f4: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a39f0) {
            ctx->pc = 0x2A3A48u;
            goto label_2a3a48;
        }
    }
    ctx->pc = 0x2A39F8u;
    // 0x2a39f8: 0x2442fae0  addiu       $v0, $v0, -0x520
    ctx->pc = 0x2a39f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965984));
    // 0x2a39fc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A39FCu;
    {
        const bool branch_taken_0x2a39fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A39FCu;
            // 0x2a3a00: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a39fc) {
            ctx->pc = 0x2A3A20u;
            goto label_2a3a20;
        }
    }
    ctx->pc = 0x2A3A04u;
    // 0x2a3a04: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a3a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a3a08: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2a3a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x2a3a0c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3A0Cu;
    {
        const bool branch_taken_0x2a3a0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3A0Cu;
            // 0x2a3a10: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3a0c) {
            ctx->pc = 0x2A3A20u;
            goto label_2a3a20;
        }
    }
    ctx->pc = 0x2A3A14u;
    // 0x2a3a14: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a3a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a3a18: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x2a3a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x2a3a1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a3a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2a3a20:
    // 0x2a3a20: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2a3a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2a3a24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a3a24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a3a28: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A3A28u;
    {
        const bool branch_taken_0x2a3a28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A3A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3A28u;
            // 0x2a3a2c: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3a28) {
            ctx->pc = 0x2A3A48u;
            goto label_2a3a48;
        }
    }
    ctx->pc = 0x2A3A30u;
    // 0x2a3a30: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x2a3a30u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a3a34: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2a3a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x2a3a38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a3a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3a3c: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x2A3A3Cu;
    SET_GPR_U32(ctx, 31, 0x2A3A44u);
    ctx->pc = 0x2A3A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3A3Cu;
            // 0x2a3a40: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3A44u; }
        if (ctx->pc != 0x2A3A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3A44u; }
        if (ctx->pc != 0x2A3A44u) { return; }
    }
    ctx->pc = 0x2A3A44u;
label_2a3a44:
    // 0x2a3a44: 0x0  nop
    ctx->pc = 0x2a3a44u;
    // NOP
label_2a3a48:
    // 0x2a3a48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a3a48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3a4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a3a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3a50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a3a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3a54: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3A54u;
            // 0x2a3a58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3A5Cu;
    // 0x2a3a5c: 0x0  nop
    ctx->pc = 0x2a3a5cu;
    // NOP
    // 0x2a3a60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a3a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a3a64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a3a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a3a68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a3a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a3a6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a3a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a3a70: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a3a70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3a74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a3a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a3a78: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2a3a78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3a7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a3a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a3a80: 0x1280005b  beqz        $s4, . + 4 + (0x5B << 2)
    ctx->pc = 0x2A3A80u;
    {
        const bool branch_taken_0x2a3a80 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3A80u;
            // 0x2a3a84: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3a80) {
            ctx->pc = 0x2A3BF0u;
            goto label_2a3bf0;
        }
    }
    ctx->pc = 0x2A3A88u;
    // 0x2a3a88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a3a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a3a8c: 0x2442fad0  addiu       $v0, $v0, -0x530
    ctx->pc = 0x2a3a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965968));
    // 0x2a3a90: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2a3a90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x2a3a94: 0x8e910018  lw          $s1, 0x18($s4)
    ctx->pc = 0x2a3a94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2a3a98: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A3A98u;
    {
        const bool branch_taken_0x2a3a98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3A98u;
            // 0x2a3a9c: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3a98) {
            ctx->pc = 0x2A3AE0u;
            goto label_2a3ae0;
        }
    }
    ctx->pc = 0x2A3AA0u;
    // 0x2a3aa0: 0x8c30ea40  lw          $s0, -0x15C0($at)
    ctx->pc = 0x2a3aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x2a3aa4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2a3aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2a3aa8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2a3aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a3aac: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2a3aacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a3ab0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3AB0u;
    {
        const bool branch_taken_0x2a3ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3AB0u;
            // 0x2a3ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3ab0) {
            ctx->pc = 0x2A3AC8u;
            goto label_2a3ac8;
        }
    }
    ctx->pc = 0x2A3AB8u;
    // 0x2a3ab8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a3ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3abc: 0xc0a79ec  jal         func_29E7B0
    ctx->pc = 0x2A3ABCu;
    SET_GPR_U32(ctx, 31, 0x2A3AC4u);
    ctx->pc = 0x2A3AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3ABCu;
            // 0x2a3ac0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3AC4u; }
        if (ctx->pc != 0x2A3AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3AC4u; }
        if (ctx->pc != 0x2A3AC4u) { return; }
    }
    ctx->pc = 0x2A3AC4u;
label_2a3ac4:
    // 0x2a3ac4: 0x0  nop
    ctx->pc = 0x2a3ac4u;
    // NOP
label_2a3ac8:
    // 0x2a3ac8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2a3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2a3acc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a3accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a3ad0: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2a3ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x2a3ad4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2a3ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a3ad8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2a3ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2a3adc: 0xae11002c  sw          $s1, 0x2C($s0)
    ctx->pc = 0x2a3adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 17));
label_2a3ae0:
    // 0x2a3ae0: 0x2682000c  addiu       $v0, $s4, 0xC
    ctx->pc = 0x2a3ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x2a3ae4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2A3AE4u;
    {
        const bool branch_taken_0x2a3ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3ae4) {
            ctx->pc = 0x2A3B98u;
            goto label_2a3b98;
        }
    }
    ctx->pc = 0x2A3AECu;
    // 0x2a3aec: 0x8e920010  lw          $s2, 0x10($s4)
    ctx->pc = 0x2a3aecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2a3af0: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x2a3af0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2a3af4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A3AF4u;
    {
        const bool branch_taken_0x2a3af4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3AF4u;
            // 0x2a3af8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3af4) {
            ctx->pc = 0x2A3B48u;
            goto label_2a3b48;
        }
    }
    ctx->pc = 0x2A3AFCu;
    // 0x2a3afc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a3afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3b00:
    // 0x2a3b00: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2a3b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2a3b04: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a3b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a3b08: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A3B08u;
    {
        const bool branch_taken_0x2a3b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3b08) {
            ctx->pc = 0x2A3B38u;
            goto label_2a3b38;
        }
    }
    ctx->pc = 0x2A3B10u;
    // 0x2a3b10: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A3B10u;
    {
        const bool branch_taken_0x2a3b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3b10) {
            ctx->pc = 0x2A3B38u;
            goto label_2a3b38;
        }
    }
    ctx->pc = 0x2A3B18u;
    // 0x2a3b18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a3b1c: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x2a3b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x2a3b20: 0x2464fff4  addiu       $a0, $v1, -0xC
    ctx->pc = 0x2a3b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x2a3b24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a3b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a3b28: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3B28u;
    {
        const bool branch_taken_0x2a3b28 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2A3B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3B28u;
            // 0x2a3b2c: 0xac62fffc  sw          $v0, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3b28) {
            ctx->pc = 0x2A3B38u;
            goto label_2a3b38;
        }
    }
    ctx->pc = 0x2A3B30u;
    // 0x2a3b30: 0xc0a8460  jal         func_2A1180
    ctx->pc = 0x2A3B30u;
    SET_GPR_U32(ctx, 31, 0x2A3B38u);
    ctx->pc = 0x2A1180u;
    if (runtime->hasFunction(0x2A1180u)) {
        auto targetFn = runtime->lookupFunction(0x2A1180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3B38u; }
        if (ctx->pc != 0x2A3B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1180_0x2a1180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3B38u; }
        if (ctx->pc != 0x2A3B38u) { return; }
    }
    ctx->pc = 0x2A3B38u;
label_2a3b38:
    // 0x2a3b38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a3b38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a3b3c: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x2a3b3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2a3b40: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2A3B40u;
    {
        const bool branch_taken_0x2a3b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3B40u;
            // 0x2a3b44: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3b40) {
            ctx->pc = 0x2A3B00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a3b00;
        }
    }
    ctx->pc = 0x2A3B48u;
label_2a3b48:
    // 0x2a3b48: 0x2682000c  addiu       $v0, $s4, 0xC
    ctx->pc = 0x2a3b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x2a3b4c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A3B4Cu;
    {
        const bool branch_taken_0x2a3b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3b4c) {
            ctx->pc = 0x2A3B98u;
            goto label_2a3b98;
        }
    }
    ctx->pc = 0x2A3B54u;
    // 0x2a3b54: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x2a3b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2a3b58: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2a3b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2a3b5c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a3b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a3b60: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A3B60u;
    {
        const bool branch_taken_0x2a3b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3b60) {
            ctx->pc = 0x2A3B98u;
            goto label_2a3b98;
        }
    }
    ctx->pc = 0x2A3B68u;
    // 0x2a3b68: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x2a3b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2a3b6c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2a3b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x2a3b70: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2a3b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x2a3b74: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2a3b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2a3b78: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x2a3b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2a3b7c: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x2a3b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
    // 0x2a3b80: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x2a3b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x2a3b84: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a3b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a3b88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a3b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a3b8c: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x2A3B8Cu;
    SET_GPR_U32(ctx, 31, 0x2A3B94u);
    ctx->pc = 0x2A3B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3B8Cu;
            // 0x2a3b90: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3B94u; }
        if (ctx->pc != 0x2A3B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3B94u; }
        if (ctx->pc != 0x2A3B94u) { return; }
    }
    ctx->pc = 0x2A3B94u;
label_2a3b94:
    // 0x2a3b94: 0x0  nop
    ctx->pc = 0x2a3b94u;
    // NOP
label_2a3b98:
    // 0x2a3b98: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x2A3B98u;
    {
        const bool branch_taken_0x2a3b98 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3B98u;
            // 0x2a3b9c: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3b98) {
            ctx->pc = 0x2A3BC8u;
            goto label_2a3bc8;
        }
    }
    ctx->pc = 0x2A3BA0u;
    // 0x2a3ba0: 0x2442fae0  addiu       $v0, $v0, -0x520
    ctx->pc = 0x2a3ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965984));
    // 0x2a3ba4: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A3BA4u;
    {
        const bool branch_taken_0x2a3ba4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3BA4u;
            // 0x2a3ba8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3ba4) {
            ctx->pc = 0x2A3BC8u;
            goto label_2a3bc8;
        }
    }
    ctx->pc = 0x2A3BACu;
    // 0x2a3bac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a3bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a3bb0: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2a3bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x2a3bb4: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3BB4u;
    {
        const bool branch_taken_0x2a3bb4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3BB4u;
            // 0x2a3bb8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3bb4) {
            ctx->pc = 0x2A3BC8u;
            goto label_2a3bc8;
        }
    }
    ctx->pc = 0x2A3BBCu;
    // 0x2a3bbc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a3bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a3bc0: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x2a3bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x2a3bc4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2a3bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2a3bc8:
    // 0x2a3bc8: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x2a3bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
    // 0x2a3bcc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a3bccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a3bd0: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A3BD0u;
    {
        const bool branch_taken_0x2a3bd0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A3BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3BD0u;
            // 0x2a3bd4: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3bd0) {
            ctx->pc = 0x2A3BF0u;
            goto label_2a3bf0;
        }
    }
    ctx->pc = 0x2A3BD8u;
    // 0x2a3bd8: 0x96860004  lhu         $a2, 0x4($s4)
    ctx->pc = 0x2a3bd8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2a3bdc: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2a3bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x2a3be0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a3be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3be4: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x2A3BE4u;
    SET_GPR_U32(ctx, 31, 0x2A3BECu);
    ctx->pc = 0x2A3BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3BE4u;
            // 0x2a3be8: 0x24070033  addiu       $a3, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3BECu; }
        if (ctx->pc != 0x2A3BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3BECu; }
        if (ctx->pc != 0x2A3BECu) { return; }
    }
    ctx->pc = 0x2A3BECu;
label_2a3bec:
    // 0x2a3bec: 0x0  nop
    ctx->pc = 0x2a3becu;
    // NOP
label_2a3bf0:
    // 0x2a3bf0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2a3bf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3bf4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a3bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a3bf8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a3bf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a3bfc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a3bfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a3c00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a3c00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3c04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a3c04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3c08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a3c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3C0Cu;
            // 0x2a3c10: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3C14u;
    // 0x2a3c14: 0x0  nop
    ctx->pc = 0x2a3c14u;
    // NOP
    // 0x2a3c18: 0x0  nop
    ctx->pc = 0x2a3c18u;
    // NOP
    // 0x2a3c1c: 0x0  nop
    ctx->pc = 0x2a3c1cu;
    // NOP
    // 0x2a3c20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a3c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a3c24: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2a3c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x2a3c28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a3c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a3c2c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x2a3c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2a3c30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a3c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a3c34: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2a3c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x2a3c38: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x2A3C38u;
    SET_GPR_U32(ctx, 31, 0x2A3C40u);
    ctx->pc = 0x2A3C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3C38u;
            // 0x2a3c3c: 0x24060033  addiu       $a2, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3C40u; }
        if (ctx->pc != 0x2A3C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3C40u; }
        if (ctx->pc != 0x2A3C40u) { return; }
    }
    ctx->pc = 0x2A3C40u;
label_2a3c40:
    // 0x2a3c40: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2a3c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2a3c44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a3c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3c48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3C48u;
    {
        const bool branch_taken_0x2a3c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3C48u;
            // 0x2a3c4c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c48) {
            ctx->pc = 0x2A3C58u;
            goto label_2a3c58;
        }
    }
    ctx->pc = 0x2A3C50u;
    // 0x2a3c50: 0xc0a8e44  jal         func_2A3910
    ctx->pc = 0x2A3C50u;
    SET_GPR_U32(ctx, 31, 0x2A3C58u);
    ctx->pc = 0x2A3C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3C50u;
            // 0x2a3c54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3910u;
    goto label_2a3910;
    ctx->pc = 0x2A3C58u;
label_2a3c58:
    // 0x2a3c58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a3c58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3c5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a3c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3c60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a3c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3c64: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3C64u;
            // 0x2a3c68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3C6Cu;
    // 0x2a3c6c: 0x0  nop
    ctx->pc = 0x2a3c6cu;
    // NOP
    // 0x2a3c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a3c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a3c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a3c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a3c78: 0xc0a8f24  jal         func_2A3C90
    ctx->pc = 0x2A3C78u;
    SET_GPR_U32(ctx, 31, 0x2A3C80u);
    ctx->pc = 0x2A3C90u;
    if (runtime->hasFunction(0x2A3C90u)) {
        auto targetFn = runtime->lookupFunction(0x2A3C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3C80u; }
        if (ctx->pc != 0x2A3C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3C90_0x2a3c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3C80u; }
        if (ctx->pc != 0x2A3C80u) { return; }
    }
    ctx->pc = 0x2A3C80u;
label_2a3c80:
    // 0x2a3c80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a3c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3c84: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3C84u;
            // 0x2a3c88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3C8Cu;
    // 0x2a3c8c: 0x0  nop
    ctx->pc = 0x2a3c8cu;
    // NOP
}
