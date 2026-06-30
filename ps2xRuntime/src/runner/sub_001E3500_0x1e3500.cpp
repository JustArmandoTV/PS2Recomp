#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E3500
// Address: 0x1e3500 - 0x1e3600
void sub_001E3500_0x1e3500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3500_0x1e3500");
#endif

    ctx->pc = 0x1e3500u;

    // 0x1e3500: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x1e3500u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1e3504: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1e3504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x1e3508: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1e3508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e350c: 0x244214a0  addiu       $v0, $v0, 0x14A0
    ctx->pc = 0x1e350cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5280));
    // 0x1e3510: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1e3510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e3514: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e3514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e3518: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e3518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e351c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1e351cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3520: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x1E3520u;
    {
        const bool branch_taken_0x1e3520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3520) {
            ctx->pc = 0x1E3524u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3520u;
            // 0x1e3524: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E35F8u;
            goto label_1e35f8;
        }
    }
    ctx->pc = 0x1E3528u;
    // 0x1e3528: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1e3528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1e352c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1e352cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1e3530: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E3530u;
    {
        const bool branch_taken_0x1e3530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e3530) {
            ctx->pc = 0x1E3584u;
            goto label_1e3584;
        }
    }
    ctx->pc = 0x1E3538u;
    // 0x1e3538: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1e3538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e353c: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1E353Cu;
    {
        const bool branch_taken_0x1e353c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e353c) {
            ctx->pc = 0x1E3540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E353Cu;
            // 0x1e3540: 0x34820200  ori         $v0, $a0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E357Cu;
            goto label_1e357c;
        }
    }
    ctx->pc = 0x1E3544u;
    // 0x1e3544: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1e3544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e3548: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E3548u;
    {
        const bool branch_taken_0x1e3548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e3548) {
            ctx->pc = 0x1E3578u;
            goto label_1e3578;
        }
    }
    ctx->pc = 0x1E3550u;
    // 0x1e3550: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1e3550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e3554: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E3554u;
    {
        const bool branch_taken_0x1e3554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e3554) {
            ctx->pc = 0x1E3578u;
            goto label_1e3578;
        }
    }
    ctx->pc = 0x1E355Cu;
    // 0x1e355c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1e355cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e3560: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3560u;
    {
        const bool branch_taken_0x1e3560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e3560) {
            ctx->pc = 0x1E3564u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3560u;
            // 0x1e3564: 0x34820100  ori         $v0, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E3570u;
            goto label_1e3570;
        }
    }
    ctx->pc = 0x1E3568u;
    // 0x1e3568: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1E3568u;
    {
        const bool branch_taken_0x1e3568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E356Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3568u;
            // 0x1e356c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3568) {
            ctx->pc = 0x1E35F8u;
            goto label_1e35f8;
        }
    }
    ctx->pc = 0x1E3570u;
label_1e3570:
    // 0x1e3570: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1E3570u;
    {
        const bool branch_taken_0x1e3570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3570u;
            // 0x1e3574: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3570) {
            ctx->pc = 0x1E35F4u;
            goto label_1e35f4;
        }
    }
    ctx->pc = 0x1E3578u;
label_1e3578:
    // 0x1e3578: 0x34820200  ori         $v0, $a0, 0x200
    ctx->pc = 0x1e3578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
label_1e357c:
    // 0x1e357c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1E357Cu;
    {
        const bool branch_taken_0x1e357c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E357Cu;
            // 0x1e3580: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e357c) {
            ctx->pc = 0x1E35F4u;
            goto label_1e35f4;
        }
    }
    ctx->pc = 0x1E3584u;
label_1e3584:
    // 0x1e3584: 0x50c2001a  beql        $a2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E3584u;
    {
        const bool branch_taken_0x1e3584 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e3584) {
            ctx->pc = 0x1E3588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3584u;
            // 0x1e3588: 0x34820300  ori         $v0, $a0, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)768);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E35F0u;
            goto label_1e35f0;
        }
    }
    ctx->pc = 0x1E358Cu;
    // 0x1e358c: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x1e358cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1e3590: 0x10c20016  beq         $a2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E3590u;
    {
        const bool branch_taken_0x1e3590 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e3590) {
            ctx->pc = 0x1E35ECu;
            goto label_1e35ec;
        }
    }
    ctx->pc = 0x1E3598u;
    // 0x1e3598: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1e3598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1e359c: 0x10c20013  beq         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E359Cu;
    {
        const bool branch_taken_0x1e359c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e359c) {
            ctx->pc = 0x1E35ECu;
            goto label_1e35ec;
        }
    }
    ctx->pc = 0x1E35A4u;
    // 0x1e35a4: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1e35a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1e35a8: 0x10c20010  beq         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E35A8u;
    {
        const bool branch_taken_0x1e35a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e35a8) {
            ctx->pc = 0x1E35ECu;
            goto label_1e35ec;
        }
    }
    ctx->pc = 0x1E35B0u;
    // 0x1e35b0: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1e35b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1e35b4: 0x10c2000d  beq         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E35B4u;
    {
        const bool branch_taken_0x1e35b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e35b4) {
            ctx->pc = 0x1E35ECu;
            goto label_1e35ec;
        }
    }
    ctx->pc = 0x1E35BCu;
    // 0x1e35bc: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x1e35bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1e35c0: 0x10c2000a  beq         $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E35C0u;
    {
        const bool branch_taken_0x1e35c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e35c0) {
            ctx->pc = 0x1E35ECu;
            goto label_1e35ec;
        }
    }
    ctx->pc = 0x1E35C8u;
    // 0x1e35c8: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x1e35c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1e35cc: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E35CCu;
    {
        const bool branch_taken_0x1e35cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e35cc) {
            ctx->pc = 0x1E35ECu;
            goto label_1e35ec;
        }
    }
    ctx->pc = 0x1E35D4u;
    // 0x1e35d4: 0x24020035  addiu       $v0, $zero, 0x35
    ctx->pc = 0x1e35d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1e35d8: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E35D8u;
    {
        const bool branch_taken_0x1e35d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e35d8) {
            ctx->pc = 0x1E35ECu;
            goto label_1e35ec;
        }
    }
    ctx->pc = 0x1E35E0u;
    // 0x1e35e0: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x1e35e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1e35e4: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E35E4u;
    {
        const bool branch_taken_0x1e35e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e35e4) {
            ctx->pc = 0x1E35F4u;
            goto label_1e35f4;
        }
    }
    ctx->pc = 0x1E35ECu;
label_1e35ec:
    // 0x1e35ec: 0x34820300  ori         $v0, $a0, 0x300
    ctx->pc = 0x1e35ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)768);
label_1e35f0:
    // 0x1e35f0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1e35f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1e35f4:
    // 0x1e35f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e35f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e35f8:
    // 0x1e35f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E35F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3600u;
}
