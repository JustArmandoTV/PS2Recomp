#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00248FD0
// Address: 0x248fd0 - 0x249070
void sub_00248FD0_0x248fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248FD0_0x248fd0");
#endif

    switch (ctx->pc) {
        case 0x248fd0u: goto label_248fd0;
        case 0x248fd4u: goto label_248fd4;
        case 0x248fd8u: goto label_248fd8;
        case 0x248fdcu: goto label_248fdc;
        case 0x248fe0u: goto label_248fe0;
        case 0x248fe4u: goto label_248fe4;
        case 0x248fe8u: goto label_248fe8;
        case 0x248fecu: goto label_248fec;
        case 0x248ff0u: goto label_248ff0;
        case 0x248ff4u: goto label_248ff4;
        case 0x248ff8u: goto label_248ff8;
        case 0x248ffcu: goto label_248ffc;
        case 0x249000u: goto label_249000;
        case 0x249004u: goto label_249004;
        case 0x249008u: goto label_249008;
        case 0x24900cu: goto label_24900c;
        case 0x249010u: goto label_249010;
        case 0x249014u: goto label_249014;
        case 0x249018u: goto label_249018;
        case 0x24901cu: goto label_24901c;
        case 0x249020u: goto label_249020;
        case 0x249024u: goto label_249024;
        case 0x249028u: goto label_249028;
        case 0x24902cu: goto label_24902c;
        case 0x249030u: goto label_249030;
        case 0x249034u: goto label_249034;
        case 0x249038u: goto label_249038;
        case 0x24903cu: goto label_24903c;
        case 0x249040u: goto label_249040;
        case 0x249044u: goto label_249044;
        case 0x249048u: goto label_249048;
        case 0x24904cu: goto label_24904c;
        case 0x249050u: goto label_249050;
        case 0x249054u: goto label_249054;
        case 0x249058u: goto label_249058;
        case 0x24905cu: goto label_24905c;
        case 0x249060u: goto label_249060;
        case 0x249064u: goto label_249064;
        case 0x249068u: goto label_249068;
        case 0x24906cu: goto label_24906c;
        default: break;
    }

    ctx->pc = 0x248fd0u;

label_248fd0:
    // 0x248fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_248fd4:
    // 0x248fd4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x248fd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_248fd8:
    // 0x248fd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_248fdc:
    // 0x248fdc: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x248fdcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_248fe0:
    // 0x248fe0: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
label_248fe4:
    if (ctx->pc == 0x248FE4u) {
        ctx->pc = 0x248FE4u;
            // 0x248fe4: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248FE8u;
        goto label_248fe8;
    }
    ctx->pc = 0x248FE0u;
    {
        const bool branch_taken_0x248fe0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x248FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248FE0u;
            // 0x248fe4: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248fe0) {
            ctx->pc = 0x249060u;
            goto label_249060;
        }
    }
    ctx->pc = 0x248FE8u;
label_248fe8:
    // 0x248fe8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x248fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_248fec:
    // 0x248fec: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
label_248ff0:
    if (ctx->pc == 0x248FF0u) {
        ctx->pc = 0x248FF0u;
            // 0x248ff0: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x248FF4u;
        goto label_248ff4;
    }
    ctx->pc = 0x248FECu;
    {
        const bool branch_taken_0x248fec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x248FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248FECu;
            // 0x248ff0: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248fec) {
            ctx->pc = 0x249018u;
            goto label_249018;
        }
    }
    ctx->pc = 0x248FF4u;
label_248ff4:
    // 0x248ff4: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_248ff8:
    if (ctx->pc == 0x248FF8u) {
        ctx->pc = 0x248FFCu;
        goto label_248ffc;
    }
    ctx->pc = 0x248FF4u;
    {
        const bool branch_taken_0x248ff4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x248ff4) {
            ctx->pc = 0x249010u;
            goto label_249010;
        }
    }
    ctx->pc = 0x248FFCu;
label_248ffc:
    // 0x248ffc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x248ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_249000:
    // 0x249000: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_249004:
    if (ctx->pc == 0x249004u) {
        ctx->pc = 0x249008u;
        goto label_249008;
    }
    ctx->pc = 0x249000u;
    {
        const bool branch_taken_0x249000 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x249000) {
            ctx->pc = 0x249010u;
            goto label_249010;
        }
    }
    ctx->pc = 0x249008u;
label_249008:
    // 0x249008: 0x10000015  b           . + 4 + (0x15 << 2)
label_24900c:
    if (ctx->pc == 0x24900Cu) {
        ctx->pc = 0x249010u;
        goto label_249010;
    }
    ctx->pc = 0x249008u;
    {
        const bool branch_taken_0x249008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249008) {
            ctx->pc = 0x249060u;
            goto label_249060;
        }
    }
    ctx->pc = 0x249010u;
label_249010:
    // 0x249010: 0x10000003  b           . + 4 + (0x3 << 2)
label_249014:
    if (ctx->pc == 0x249014u) {
        ctx->pc = 0x249014u;
            // 0x249014: 0x24850020  addiu       $a1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x249018u;
        goto label_249018;
    }
    ctx->pc = 0x249010u;
    {
        const bool branch_taken_0x249010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249010u;
            // 0x249014: 0x24850020  addiu       $a1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249010) {
            ctx->pc = 0x249020u;
            goto label_249020;
        }
    }
    ctx->pc = 0x249018u;
label_249018:
    // 0x249018: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x249018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_24901c:
    // 0x24901c: 0x0  nop
    ctx->pc = 0x24901cu;
    // NOP
label_249020:
    // 0x249020: 0x90860001  lbu         $a2, 0x1($a0)
    ctx->pc = 0x249020u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_249024:
    // 0x249024: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x249024u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_249028:
    // 0x249028: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x249028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_24902c:
    // 0x24902c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x24902cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_249030:
    // 0x249030: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x249030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_249034:
    // 0x249034: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x249034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_249038:
    // 0x249038: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x249038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24903c:
    // 0x24903c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x24903cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_249040:
    // 0x249040: 0x8c6316c8  lw          $v1, 0x16C8($v1)
    ctx->pc = 0x249040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5832)));
label_249044:
    // 0x249044: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_249048:
    if (ctx->pc == 0x249048u) {
        ctx->pc = 0x24904Cu;
        goto label_24904c;
    }
    ctx->pc = 0x249044u;
    {
        const bool branch_taken_0x249044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x249044) {
            ctx->pc = 0x249060u;
            goto label_249060;
        }
    }
    ctx->pc = 0x24904Cu;
label_24904c:
    // 0x24904c: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x24904cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_249050:
    // 0x249050: 0x8c89000c  lw          $t1, 0xC($a0)
    ctx->pc = 0x249050u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_249054:
    // 0x249054: 0x60f809  jalr        $v1
label_249058:
    if (ctx->pc == 0x249058u) {
        ctx->pc = 0x249058u;
            // 0x249058: 0x8c860014  lw          $a2, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->pc = 0x24905Cu;
        goto label_24905c;
    }
    ctx->pc = 0x249054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24905Cu);
        ctx->pc = 0x249058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249054u;
            // 0x249058: 0x8c860014  lw          $a2, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24905Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24905Cu; }
            if (ctx->pc != 0x24905Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24905Cu;
label_24905c:
    // 0x24905c: 0x0  nop
    ctx->pc = 0x24905cu;
    // NOP
label_249060:
    // 0x249060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_249064:
    // 0x249064: 0x3e00008  jr          $ra
label_249068:
    if (ctx->pc == 0x249068u) {
        ctx->pc = 0x249068u;
            // 0x249068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x24906Cu;
        goto label_24906c;
    }
    ctx->pc = 0x249064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249064u;
            // 0x249068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24906Cu;
label_24906c:
    // 0x24906c: 0x0  nop
    ctx->pc = 0x24906cu;
    // NOP
}
