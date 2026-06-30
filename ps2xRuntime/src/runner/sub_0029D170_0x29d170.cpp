#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029D170
// Address: 0x29d170 - 0x29d230
void sub_0029D170_0x29d170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D170_0x29d170");
#endif

    switch (ctx->pc) {
        case 0x29d1c0u: goto label_29d1c0;
        case 0x29d1fcu: goto label_29d1fc;
        default: break;
    }

    ctx->pc = 0x29d170u;

    // 0x29d170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29d170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29d174: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29d174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29d178: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29d17c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29d180: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29d180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d184: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x29D184u;
    {
        const bool branch_taken_0x29d184 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D184u;
            // 0x29d188: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d184) {
            ctx->pc = 0x29D214u;
            goto label_29d214;
        }
    }
    ctx->pc = 0x29D18Cu;
    // 0x29d18c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x29d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29d190: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29d190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x29d194: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29d194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29d198: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x29D198u;
    {
        const bool branch_taken_0x29d198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d198) {
            ctx->pc = 0x29D19Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29D198u;
            // 0x29d19c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29D1C4u;
            goto label_29d1c4;
        }
    }
    ctx->pc = 0x29D1A0u;
    // 0x29d1a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29d1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x29d1a4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x29d1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x29d1a8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x29d1ac: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x29d1acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29d1b0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x29d1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29d1b4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x29d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29d1b8: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x29D1B8u;
    SET_GPR_U32(ctx, 31, 0x29D1C0u);
    ctx->pc = 0x29D1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D1B8u;
            // 0x29d1bc: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D1C0u; }
        if (ctx->pc != 0x29D1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D1C0u; }
        if (ctx->pc != 0x29D1C0u) { return; }
    }
    ctx->pc = 0x29D1C0u;
label_29d1c0:
    // 0x29d1c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x29d1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_29d1c4:
    // 0x29d1c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29d1c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x29d1c8: 0x58400013  blezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x29D1C8u;
    {
        const bool branch_taken_0x29d1c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29d1c8) {
            ctx->pc = 0x29D1CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29D1C8u;
            // 0x29d1cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29D218u;
            goto label_29d218;
        }
    }
    ctx->pc = 0x29D1D0u;
    // 0x29d1d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29d1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x29d1d4: 0x8c50ea40  lw          $s0, -0x15C0($v0)
    ctx->pc = 0x29d1d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x29d1d8: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x29d1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x29d1dc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x29d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x29d1e0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x29d1e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29d1e4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x29D1E4u;
    {
        const bool branch_taken_0x29d1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d1e4) {
            ctx->pc = 0x29D1E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29D1E4u;
            // 0x29d1e8: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29D200u;
            goto label_29d200;
        }
    }
    ctx->pc = 0x29D1ECu;
    // 0x29d1ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d1f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29d1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29d1f4: 0xc0a79ec  jal         func_29E7B0
    ctx->pc = 0x29D1F4u;
    SET_GPR_U32(ctx, 31, 0x29D1FCu);
    ctx->pc = 0x29D1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D1F4u;
            // 0x29d1f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D1FCu; }
        if (ctx->pc != 0x29D1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D1FCu; }
        if (ctx->pc != 0x29D1FCu) { return; }
    }
    ctx->pc = 0x29D1FCu;
label_29d1fc:
    // 0x29d1fc: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x29d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_29d200:
    // 0x29d200: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29d200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29d204: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x29d204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x29d208: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x29d208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x29d20c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x29d20cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x29d210: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x29d210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_29d214:
    // 0x29d214: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29d214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29d218:
    // 0x29d218: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29d218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d21c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d21cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d220: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d224: 0x3e00008  jr          $ra
    ctx->pc = 0x29D224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D224u;
            // 0x29d228: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29D22Cu;
    // 0x29d22c: 0x0  nop
    ctx->pc = 0x29d22cu;
    // NOP
}
