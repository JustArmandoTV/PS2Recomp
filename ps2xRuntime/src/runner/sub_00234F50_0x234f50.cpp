#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00234F50
// Address: 0x234f50 - 0x235030
void sub_00234F50_0x234f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234F50_0x234f50");
#endif

    switch (ctx->pc) {
        case 0x234f50u: goto label_234f50;
        case 0x234f54u: goto label_234f54;
        case 0x234f58u: goto label_234f58;
        case 0x234f5cu: goto label_234f5c;
        case 0x234f60u: goto label_234f60;
        case 0x234f64u: goto label_234f64;
        case 0x234f68u: goto label_234f68;
        case 0x234f6cu: goto label_234f6c;
        case 0x234f70u: goto label_234f70;
        case 0x234f74u: goto label_234f74;
        case 0x234f78u: goto label_234f78;
        case 0x234f7cu: goto label_234f7c;
        case 0x234f80u: goto label_234f80;
        case 0x234f84u: goto label_234f84;
        case 0x234f88u: goto label_234f88;
        case 0x234f8cu: goto label_234f8c;
        case 0x234f90u: goto label_234f90;
        case 0x234f94u: goto label_234f94;
        case 0x234f98u: goto label_234f98;
        case 0x234f9cu: goto label_234f9c;
        case 0x234fa0u: goto label_234fa0;
        case 0x234fa4u: goto label_234fa4;
        case 0x234fa8u: goto label_234fa8;
        case 0x234facu: goto label_234fac;
        case 0x234fb0u: goto label_234fb0;
        case 0x234fb4u: goto label_234fb4;
        case 0x234fb8u: goto label_234fb8;
        case 0x234fbcu: goto label_234fbc;
        case 0x234fc0u: goto label_234fc0;
        case 0x234fc4u: goto label_234fc4;
        case 0x234fc8u: goto label_234fc8;
        case 0x234fccu: goto label_234fcc;
        case 0x234fd0u: goto label_234fd0;
        case 0x234fd4u: goto label_234fd4;
        case 0x234fd8u: goto label_234fd8;
        case 0x234fdcu: goto label_234fdc;
        case 0x234fe0u: goto label_234fe0;
        case 0x234fe4u: goto label_234fe4;
        case 0x234fe8u: goto label_234fe8;
        case 0x234fecu: goto label_234fec;
        case 0x234ff0u: goto label_234ff0;
        case 0x234ff4u: goto label_234ff4;
        case 0x234ff8u: goto label_234ff8;
        case 0x234ffcu: goto label_234ffc;
        case 0x235000u: goto label_235000;
        case 0x235004u: goto label_235004;
        case 0x235008u: goto label_235008;
        case 0x23500cu: goto label_23500c;
        case 0x235010u: goto label_235010;
        case 0x235014u: goto label_235014;
        case 0x235018u: goto label_235018;
        case 0x23501cu: goto label_23501c;
        case 0x235020u: goto label_235020;
        case 0x235024u: goto label_235024;
        case 0x235028u: goto label_235028;
        case 0x23502cu: goto label_23502c;
        default: break;
    }

    ctx->pc = 0x234f50u;

label_234f50:
    // 0x234f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_234f54:
    // 0x234f54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x234f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234f58:
    // 0x234f58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x234f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_234f5c:
    // 0x234f5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x234f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_234f60:
    // 0x234f60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x234f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_234f64:
    // 0x234f64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x234f64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234f68:
    // 0x234f68: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x234f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_234f6c:
    // 0x234f6c: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x234f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_234f70:
    // 0x234f70: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x234f70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_234f74:
    // 0x234f74: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x234f74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_234f78:
    // 0x234f78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234f7c:
    // 0x234f7c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x234f7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_234f80:
    // 0x234f80: 0x320f809  jalr        $t9
label_234f84:
    if (ctx->pc == 0x234F84u) {
        ctx->pc = 0x234F84u;
            // 0x234f84: 0x24a5cbc8  addiu       $a1, $a1, -0x3438 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953928));
        ctx->pc = 0x234F88u;
        goto label_234f88;
    }
    ctx->pc = 0x234F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x234F88u);
        ctx->pc = 0x234F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234F80u;
            // 0x234f84: 0x24a5cbc8  addiu       $a1, $a1, -0x3438 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953928));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x234F88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x234F88u; }
            if (ctx->pc != 0x234F88u) { return; }
        }
        }
    }
    ctx->pc = 0x234F88u;
label_234f88:
    // 0x234f88: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x234f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_234f8c:
    // 0x234f8c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x234f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_234f90:
    // 0x234f90: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x234f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_234f94:
    // 0x234f94: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_234f98:
    if (ctx->pc == 0x234F98u) {
        ctx->pc = 0x234F98u;
            // 0x234f98: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->pc = 0x234F9Cu;
        goto label_234f9c;
    }
    ctx->pc = 0x234F94u;
    {
        const bool branch_taken_0x234f94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x234f94) {
            ctx->pc = 0x234F98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x234F94u;
            // 0x234f98: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x234FD4u;
            goto label_234fd4;
        }
    }
    ctx->pc = 0x234F9Cu;
label_234f9c:
    // 0x234f9c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x234f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_234fa0:
    // 0x234fa0: 0x410bc  dsll32      $v0, $a0, 2
    ctx->pc = 0x234fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 2));
label_234fa4:
    // 0x234fa4: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x234fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_234fa8:
    // 0x234fa8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x234fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_234fac:
    // 0x234fac: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x234facu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_234fb0:
    // 0x234fb0: 0x8e270034  lw          $a3, 0x34($s1)
    ctx->pc = 0x234fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_234fb4:
    // 0x234fb4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x234fb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_234fb8:
    // 0x234fb8: 0x248c0  sll         $t1, $v0, 3
    ctx->pc = 0x234fb8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_234fbc:
    // 0x234fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234fc0:
    // 0x234fc0: 0x24a5cbd0  addiu       $a1, $a1, -0x3430
    ctx->pc = 0x234fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953936));
label_234fc4:
    // 0x234fc4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x234fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_234fc8:
    // 0x234fc8: 0x320f809  jalr        $t9
label_234fcc:
    if (ctx->pc == 0x234FCCu) {
        ctx->pc = 0x234FCCu;
            // 0x234fcc: 0x340c0  sll         $t0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->pc = 0x234FD0u;
        goto label_234fd0;
    }
    ctx->pc = 0x234FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x234FD0u);
        ctx->pc = 0x234FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234FC8u;
            // 0x234fcc: 0x340c0  sll         $t0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x234FD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x234FD0u; }
            if (ctx->pc != 0x234FD0u) { return; }
        }
        }
    }
    ctx->pc = 0x234FD0u;
label_234fd0:
    // 0x234fd0: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x234fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_234fd4:
    // 0x234fd4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x234fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_234fd8:
    // 0x234fd8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x234fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_234fdc:
    // 0x234fdc: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_234fe0:
    if (ctx->pc == 0x234FE0u) {
        ctx->pc = 0x234FE0u;
            // 0x234fe0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x234FE4u;
        goto label_234fe4;
    }
    ctx->pc = 0x234FDCu;
    {
        const bool branch_taken_0x234fdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x234fdc) {
            ctx->pc = 0x234FE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x234FDCu;
            // 0x234fe0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23501Cu;
            goto label_23501c;
        }
    }
    ctx->pc = 0x234FE4u;
label_234fe4:
    // 0x234fe4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x234fe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_234fe8:
    // 0x234fe8: 0x410bc  dsll32      $v0, $a0, 2
    ctx->pc = 0x234fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 2));
label_234fec:
    // 0x234fec: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x234fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_234ff0:
    // 0x234ff0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x234ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_234ff4:
    // 0x234ff4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x234ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_234ff8:
    // 0x234ff8: 0x8e27004c  lw          $a3, 0x4C($s1)
    ctx->pc = 0x234ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_234ffc:
    // 0x234ffc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x234ffcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_235000:
    // 0x235000: 0x24900  sll         $t1, $v0, 4
    ctx->pc = 0x235000u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_235004:
    // 0x235004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235008:
    // 0x235008: 0x34100  sll         $t0, $v1, 4
    ctx->pc = 0x235008u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_23500c:
    // 0x23500c: 0x24a5cbe0  addiu       $a1, $a1, -0x3420
    ctx->pc = 0x23500cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953952));
label_235010:
    // 0x235010: 0x320f809  jalr        $t9
label_235014:
    if (ctx->pc == 0x235014u) {
        ctx->pc = 0x235014u;
            // 0x235014: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x235018u;
        goto label_235018;
    }
    ctx->pc = 0x235010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x235018u);
        ctx->pc = 0x235014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235010u;
            // 0x235014: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x235018u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x235018u; }
            if (ctx->pc != 0x235018u) { return; }
        }
        }
    }
    ctx->pc = 0x235018u;
label_235018:
    // 0x235018: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x235018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23501c:
    // 0x23501c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23501cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_235020:
    // 0x235020: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x235020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_235024:
    // 0x235024: 0x3e00008  jr          $ra
label_235028:
    if (ctx->pc == 0x235028u) {
        ctx->pc = 0x235028u;
            // 0x235028: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x23502Cu;
        goto label_23502c;
    }
    ctx->pc = 0x235024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235024u;
            // 0x235028: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23502Cu;
label_23502c:
    // 0x23502c: 0x0  nop
    ctx->pc = 0x23502cu;
    // NOP
}
