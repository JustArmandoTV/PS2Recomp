#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F7E40
// Address: 0x4f7e40 - 0x4f7f60
void sub_004F7E40_0x4f7e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F7E40_0x4f7e40");
#endif

    switch (ctx->pc) {
        case 0x4f7e60u: goto label_4f7e60;
        case 0x4f7ee0u: goto label_4f7ee0;
        default: break;
    }

    ctx->pc = 0x4f7e40u;

    // 0x4f7e40: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4f7e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4f7e44: 0x808500e5  lb          $a1, 0xE5($a0)
    ctx->pc = 0x4f7e44u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 229)));
    // 0x4f7e48: 0x8c6375c0  lw          $v1, 0x75C0($v1)
    ctx->pc = 0x4f7e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30144)));
    // 0x4f7e4c: 0x8c660070  lw          $a2, 0x70($v1)
    ctx->pc = 0x4f7e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x4f7e50: 0x14a00018  bnez        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x4F7E50u;
    {
        const bool branch_taken_0x4f7e50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F7E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7E50u;
            // 0x4f7e54: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7e50) {
            ctx->pc = 0x4F7EB4u;
            goto label_4f7eb4;
        }
    }
    ctx->pc = 0x4F7E58u;
    // 0x4f7e58: 0x8c670074  lw          $a3, 0x74($v1)
    ctx->pc = 0x4f7e58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x4f7e5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4f7e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f7e60:
    // 0x4f7e60: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4f7e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f7e64: 0x8c6300f8  lw          $v1, 0xF8($v1)
    ctx->pc = 0x4f7e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x4f7e68: 0x5465000d  bnel        $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x4F7E68u;
    {
        const bool branch_taken_0x4f7e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x4f7e68) {
            ctx->pc = 0x4F7E6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7E68u;
            // 0x4f7e6c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7EA0u;
            goto label_4f7ea0;
        }
    }
    ctx->pc = 0x4F7E70u;
    // 0x4f7e70: 0xa08500e5  sb          $a1, 0xE5($a0)
    ctx->pc = 0x4f7e70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 229), (uint8_t)GPR_U32(ctx, 5));
    // 0x4f7e74: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4f7e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4f7e78: 0xac8000ec  sw          $zero, 0xEC($a0)
    ctx->pc = 0x4f7e78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 0));
    // 0x4f7e7c: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x4f7e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x4f7e80: 0xac8000f0  sw          $zero, 0xF0($a0)
    ctx->pc = 0x4f7e80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 0));
    // 0x4f7e84: 0x8c6375c0  lw          $v1, 0x75C0($v1)
    ctx->pc = 0x4f7e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30144)));
    // 0x4f7e88: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x4f7e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x4f7e8c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4f7e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4f7e90: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4f7e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f7e94: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x4f7e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x4f7e98: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x4F7E98u;
    {
        const bool branch_taken_0x4f7e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7E98u;
            // 0x4f7e9c: 0xac8300e8  sw          $v1, 0xE8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7e98) {
            ctx->pc = 0x4F7F54u;
            goto label_4f7f54;
        }
    }
    ctx->pc = 0x4F7EA0u;
label_4f7ea0:
    // 0x4f7ea0: 0x126182b  sltu        $v1, $t1, $a2
    ctx->pc = 0x4f7ea0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4f7ea4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x4F7EA4u;
    {
        const bool branch_taken_0x4f7ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F7EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7EA4u;
            // 0x4f7ea8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7ea4) {
            ctx->pc = 0x4F7E60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f7e60;
        }
    }
    ctx->pc = 0x4F7EACu;
    // 0x4f7eac: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x4F7EACu;
    {
        const bool branch_taken_0x4f7eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7eac) {
            ctx->pc = 0x4F7F54u;
            goto label_4f7f54;
        }
    }
    ctx->pc = 0x4F7EB4u;
label_4f7eb4:
    // 0x4f7eb4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4f7eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x4f7eb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4f7eb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7ebc: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x4f7ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x4f7ec0: 0xc48000ec  lwc1        $f0, 0xEC($a0)
    ctx->pc = 0x4f7ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4f7ec4: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x4f7ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4f7ec8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4f7ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4f7ecc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4f7eccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4f7ed0: 0xe48000ec  swc1        $f0, 0xEC($a0)
    ctx->pc = 0x4f7ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
    // 0x4f7ed4: 0x8c6375c0  lw          $v1, 0x75C0($v1)
    ctx->pc = 0x4f7ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30144)));
    // 0x4f7ed8: 0x8c650074  lw          $a1, 0x74($v1)
    ctx->pc = 0x4f7ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x4f7edc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x4f7edcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f7ee0:
    // 0x4f7ee0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4f7ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f7ee4: 0x8c6300f8  lw          $v1, 0xF8($v1)
    ctx->pc = 0x4f7ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x4f7ee8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F7EE8u;
    {
        const bool branch_taken_0x4f7ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7ee8) {
            ctx->pc = 0x4F7EECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7EE8u;
            // 0x4f7eec: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7F00u;
            goto label_4f7f00;
        }
    }
    ctx->pc = 0x4F7EF0u;
    // 0x4f7ef0: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x4f7ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x4f7ef4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4f7ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4f7ef8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4F7EF8u;
    {
        const bool branch_taken_0x4f7ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7EF8u;
            // 0x4f7efc: 0x8c680000  lw          $t0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7ef8) {
            ctx->pc = 0x4F7F10u;
            goto label_4f7f10;
        }
    }
    ctx->pc = 0x4F7F00u;
label_4f7f00:
    // 0x4f7f00: 0x126182b  sltu        $v1, $t1, $a2
    ctx->pc = 0x4f7f00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4f7f04: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x4F7F04u;
    {
        const bool branch_taken_0x4f7f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F7F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7F04u;
            // 0x4f7f08: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7f04) {
            ctx->pc = 0x4F7EE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f7ee0;
        }
    }
    ctx->pc = 0x4F7F0Cu;
    // 0x4f7f0c: 0x0  nop
    ctx->pc = 0x4f7f0cu;
    // NOP
label_4f7f10:
    // 0x4f7f10: 0x55000003  bnel        $t0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F7F10u;
    {
        const bool branch_taken_0x4f7f10 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f7f10) {
            ctx->pc = 0x4F7F14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7F10u;
            // 0x4f7f14: 0x8d050130  lw          $a1, 0x130($t0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 304)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7F20u;
            goto label_4f7f20;
        }
    }
    ctx->pc = 0x4F7F18u;
    // 0x4f7f18: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4F7F18u;
    {
        const bool branch_taken_0x4f7f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7F18u;
            // 0x4f7f1c: 0xa08000e5  sb          $zero, 0xE5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 229), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7f18) {
            ctx->pc = 0x4F7F54u;
            goto label_4f7f54;
        }
    }
    ctx->pc = 0x4F7F20u;
label_4f7f20:
    // 0x4f7f20: 0x8c8300e8  lw          $v1, 0xE8($a0)
    ctx->pc = 0x4f7f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x4f7f24: 0x5065000b  beql        $v1, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x4F7F24u;
    {
        const bool branch_taken_0x4f7f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x4f7f24) {
            ctx->pc = 0x4F7F28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7F24u;
            // 0x4f7f28: 0xac8500e8  sw          $a1, 0xE8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7F54u;
            goto label_4f7f54;
        }
    }
    ctx->pc = 0x4F7F2Cu;
    // 0x4f7f2c: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x4f7f2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x4f7f30: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x4F7F30u;
    {
        const bool branch_taken_0x4f7f30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7f30) {
            ctx->pc = 0x4F7F50u;
            goto label_4f7f50;
        }
    }
    ctx->pc = 0x4F7F38u;
    // 0x4f7f38: 0xc48100f0  lwc1        $f1, 0xF0($a0)
    ctx->pc = 0x4f7f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4f7f3c: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x4f7f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x4f7f40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f7f40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4f7f44: 0x0  nop
    ctx->pc = 0x4f7f44u;
    // NOP
    // 0x4f7f48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4f7f48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4f7f4c: 0xe48000f0  swc1        $f0, 0xF0($a0)
    ctx->pc = 0x4f7f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 240), bits); }
label_4f7f50:
    // 0x4f7f50: 0xac8500e8  sw          $a1, 0xE8($a0)
    ctx->pc = 0x4f7f50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 5));
label_4f7f54:
    // 0x4f7f54: 0x3e00008  jr          $ra
    ctx->pc = 0x4F7F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F7F5Cu;
    // 0x4f7f5c: 0x0  nop
    ctx->pc = 0x4f7f5cu;
    // NOP
}
