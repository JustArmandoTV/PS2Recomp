#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F7CC0
// Address: 0x4f7cc0 - 0x4f7e40
void sub_004F7CC0_0x4f7cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F7CC0_0x4f7cc0");
#endif

    switch (ctx->pc) {
        case 0x4f7ce0u: goto label_4f7ce0;
        case 0x4f7db4u: goto label_4f7db4;
        default: break;
    }

    ctx->pc = 0x4f7cc0u;

    // 0x4f7cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f7cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f7cc4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f7cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4f7cc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f7cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4f7ccc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f7cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4f7cd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f7cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f7cd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f7cd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7cd8: 0xc074740  jal         func_1D1D00
    ctx->pc = 0x4F7CD8u;
    SET_GPR_U32(ctx, 31, 0x4F7CE0u);
    ctx->pc = 0x4F7CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7CD8u;
            // 0x4f7cdc: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F7CE0u; }
        if (ctx->pc != 0x4F7CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F7CE0u; }
        if (ctx->pc != 0x4F7CE0u) { return; }
    }
    ctx->pc = 0x4F7CE0u;
label_4f7ce0:
    // 0x4f7ce0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x4f7ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x4f7ce4: 0x8e260048  lw          $a2, 0x48($s1)
    ctx->pc = 0x4f7ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x4f7ce8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x4f7ce8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4f7cec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4f7cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4f7cf0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4f7cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4f7cf4: 0x8c670e80  lw          $a3, 0xE80($v1)
    ctx->pc = 0x4f7cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x4f7cf8: 0x1810  mfhi        $v1
    ctx->pc = 0x4f7cf8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x4f7cfc: 0x10c00025  beqz        $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x4F7CFCu;
    {
        const bool branch_taken_0x4f7cfc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7CFCu;
            // 0x4f7d00: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7cfc) {
            ctx->pc = 0x4F7D94u;
            goto label_4f7d94;
        }
    }
    ctx->pc = 0x4F7D04u;
    // 0x4f7d04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4f7d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f7d08: 0x50c5000b  beql        $a2, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x4F7D08u;
    {
        const bool branch_taken_0x4f7d08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x4f7d08) {
            ctx->pc = 0x4F7D0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7D08u;
            // 0x4f7d0c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7D38u;
            goto label_4f7d38;
        }
    }
    ctx->pc = 0x4F7D10u;
    // 0x4f7d10: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4f7d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4f7d14: 0x50c50003  beql        $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F7D14u;
    {
        const bool branch_taken_0x4f7d14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x4f7d14) {
            ctx->pc = 0x4F7D18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7D14u;
            // 0x4f7d18: 0x8ce60968  lw          $a2, 0x968($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2408)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7D24u;
            goto label_4f7d24;
        }
    }
    ctx->pc = 0x4F7D1Cu;
    // 0x4f7d1c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x4F7D1Cu;
    {
        const bool branch_taken_0x4f7d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7D1Cu;
            // 0x4f7d20: 0x306600ff  andi        $a2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7d1c) {
            ctx->pc = 0x4F7DACu;
            goto label_4f7dac;
        }
    }
    ctx->pc = 0x4F7D24u;
label_4f7d24:
    // 0x4f7d24: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x4f7d24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x4f7d28: 0x24a5ee50  addiu       $a1, $a1, -0x11B0
    ctx->pc = 0x4f7d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962768));
    // 0x4f7d2c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4f7d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4f7d30: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4F7D30u;
    {
        const bool branch_taken_0x4f7d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7D30u;
            // 0x4f7d34: 0xa68021  addu        $s0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7d30) {
            ctx->pc = 0x4F7DA8u;
            goto label_4f7da8;
        }
    }
    ctx->pc = 0x4F7D38u;
label_4f7d38:
    // 0x4f7d38: 0x8ca50da0  lw          $a1, 0xDA0($a1)
    ctx->pc = 0x4f7d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3488)));
    // 0x4f7d3c: 0x30a50010  andi        $a1, $a1, 0x10
    ctx->pc = 0x4f7d3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x4f7d40: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4F7D40u;
    {
        const bool branch_taken_0x4f7d40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7d40) {
            ctx->pc = 0x4F7D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7D40u;
            // 0x4f7d44: 0x8ce80968  lw          $t0, 0x968($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2408)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7D68u;
            goto label_4f7d68;
        }
    }
    ctx->pc = 0x4F7D48u;
    // 0x4f7d48: 0x8ce70968  lw          $a3, 0x968($a3)
    ctx->pc = 0x4f7d48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2408)));
    // 0x4f7d4c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x4f7d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x4f7d50: 0x24a5ec20  addiu       $a1, $a1, -0x13E0
    ctx->pc = 0x4f7d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962208));
    // 0x4f7d54: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x4f7d54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x4f7d58: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x4f7d58u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x4f7d5c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4f7d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4f7d60: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4F7D60u;
    {
        const bool branch_taken_0x4f7d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7D60u;
            // 0x4f7d64: 0xa68021  addu        $s0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7d60) {
            ctx->pc = 0x4F7DA8u;
            goto label_4f7da8;
        }
    }
    ctx->pc = 0x4F7D68u;
label_4f7d68:
    // 0x4f7d68: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x4f7d68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x4f7d6c: 0x9225005a  lbu         $a1, 0x5A($s1)
    ctx->pc = 0x4f7d6cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
    // 0x4f7d70: 0x24c6ec20  addiu       $a2, $a2, -0x13E0
    ctx->pc = 0x4f7d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962208));
    // 0x4f7d74: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x4f7d74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x4f7d78: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x4f7d78u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x4f7d7c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4f7d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4f7d80: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x4f7d80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4f7d84: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4f7d84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4f7d88: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x4f7d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x4f7d8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4F7D8Cu;
    {
        const bool branch_taken_0x4f7d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F7D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7D8Cu;
            // 0x4f7d90: 0xa68021  addu        $s0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7d8c) {
            ctx->pc = 0x4F7DA8u;
            goto label_4f7da8;
        }
    }
    ctx->pc = 0x4F7D94u;
label_4f7d94:
    // 0x4f7d94: 0x8ce60968  lw          $a2, 0x968($a3)
    ctx->pc = 0x4f7d94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2408)));
    // 0x4f7d98: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x4f7d98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x4f7d9c: 0x24a5ee00  addiu       $a1, $a1, -0x1200
    ctx->pc = 0x4f7d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962688));
    // 0x4f7da0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4f7da0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4f7da4: 0xa68021  addu        $s0, $a1, $a2
    ctx->pc = 0x4f7da4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4f7da8:
    // 0x4f7da8: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x4f7da8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4f7dac:
    // 0x4f7dac: 0x64080003  daddiu      $t0, $zero, 0x3
    ctx->pc = 0x4f7dacu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
    // 0x4f7db0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4f7db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f7db4:
    // 0x4f7db4: 0x310500ff  andi        $a1, $t0, 0xFF
    ctx->pc = 0x4f7db4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x4f7db8: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x4f7db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x4f7dbc: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x4f7dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x4f7dc0: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x4f7dc0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f7dc4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4f7dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4f7dc8: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x4f7dc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x4f7dcc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x4F7DCCu;
    {
        const bool branch_taken_0x4f7dcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7dcc) {
            ctx->pc = 0x4F7DF8u;
            goto label_4f7df8;
        }
    }
    ctx->pc = 0x4F7DD4u;
    // 0x4f7dd4: 0x2503ffff  addiu       $v1, $t0, -0x1
    ctx->pc = 0x4f7dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4f7dd8: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x4f7dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x4f7ddc: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x4f7ddcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4f7de0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x4f7de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4f7de4: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x4f7de4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x4f7de8: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x4f7de8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x4f7dec: 0x480fff1  bltz        $a0, . + 4 + (-0xF << 2)
    ctx->pc = 0x4F7DECu;
    {
        const bool branch_taken_0x4f7dec = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4F7DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7DECu;
            // 0x4f7df0: 0x30a700ff  andi        $a3, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7dec) {
            ctx->pc = 0x4F7DB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f7db4;
        }
    }
    ctx->pc = 0x4F7DF4u;
    // 0x4f7df4: 0x0  nop
    ctx->pc = 0x4f7df4u;
    // NOP
label_4f7df8:
    // 0x4f7df8: 0x922300e4  lbu         $v1, 0xE4($s1)
    ctx->pc = 0x4f7df8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x4f7dfc: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F7DFCu;
    {
        const bool branch_taken_0x4f7dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7dfc) {
            ctx->pc = 0x4F7E00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7DFCu;
            // 0x4f7e00: 0x41e3c  dsll32      $v1, $a0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7E0Cu;
            goto label_4f7e0c;
        }
    }
    ctx->pc = 0x4F7E04u;
    // 0x4f7e04: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4f7e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4f7e08: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x4f7e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
label_4f7e0c:
    // 0x4f7e0c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4f7e0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x4f7e10: 0x4630003  bgezl       $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F7E10u;
    {
        const bool branch_taken_0x4f7e10 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x4f7e10) {
            ctx->pc = 0x4F7E14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7E10u;
            // 0x4f7e14: 0x41e3c  dsll32      $v1, $a0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F7E20u;
            goto label_4f7e20;
        }
    }
    ctx->pc = 0x4F7E18u;
    // 0x4f7e18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4f7e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f7e1c: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x4f7e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
label_4f7e20:
    // 0x4f7e20: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4f7e20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x4f7e24: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x4f7e24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
    // 0x4f7e28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f7e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f7e2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f7e2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f7e30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f7e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f7e34: 0x3e00008  jr          $ra
    ctx->pc = 0x4F7E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F7E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7E34u;
            // 0x4f7e38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F7E3Cu;
    // 0x4f7e3c: 0x0  nop
    ctx->pc = 0x4f7e3cu;
    // NOP
}
